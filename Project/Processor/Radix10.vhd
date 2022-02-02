----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:55:35 01/21/2022 
-- Design Name: 
-- Module Name:    Coprocessor - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE ieee.numeric_std.ALL;
--library ieee_proposed;
--use ieee_proposed.float_pkg.all;

entity Radix10 is
    Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           I : out  STD_LOGIC_VECTOR(31 downto 0);
           F : out  STD_LOGIC_VECTOR(31 downto 0);
           E : out  STD_LOGIC_VECTOR(31 downto 0));
end Radix10;

architecture Behavioral of Radix10 is
	Signal SA, EA : integer;
	Signal EC : integer;
	Signal x, nn: integer;
	Signal FA : unsigned(22 downto 0);
	Signal HA : unsigned(22 downto 0);
	Signal MA, MC : unsigned(22 downto 0);	
	Signal h_int : integer;
	Signal m_real : integer;
	Signal res, y: integer;
	type digits is array(39 downto 0) of integer;
	Signal digs : digits;
	shared variable j : integer:= 39;

begin
	x <= to_integer(unsigned(A(30 downto 23)));
	EA <= x-127;
	FA(22) <='1';
	HA <= unsigned(A(22 downto 0));
	FA(21 downto 0) <= unsigned(A(22 downto 1));
	SA <= 1 when A(31) = '1' else 0;
	res <= (-1)**(SA) * (1 + to_integer(FA))* 2**(EA);
	
	process(A)
	begin
	y <= res;
	while not(y = 0) loop
	digs(j) <= y mod 10;
	y <= y/10;
	j := j + 1;
	end loop;
	end process;
	
	I <= std_logic_vector(to_unsigned(digs(39), I'length));
	F <= std_logic_vector(to_unsigned(res - (digs(39) * 10**(39-j-1)), F'length));
	E <= std_logic_vector(to_unsigned(39-j-1, E'length));
			 
end Behavioral;

