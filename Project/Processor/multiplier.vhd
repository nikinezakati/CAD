----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:30:24 01/23/2022 
-- Design Name: 
-- Module Name:    multiplier - Behavioral 
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
use ieee.numeric_std.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multiplier is
    Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           B : in  STD_LOGIC_Vector(31 downto 0);
           C : out  STD_LOGIC_Vector(31 downto 0));
end multiplier;

architecture Behavioral of multiplier is
	Signal SA, EA : integer;
	Signal SB, EB : integer;
	Signal EC : integer;
	Signal x,y: integer;
	Signal FA, FB : unsigned(22 downto 0);
	Signal ShiftA, ShiftB : integer :=0;
	Signal HA, HB : unsigned(22 downto 0);
	Signal MA, MB : unsigned(22 downto 0);
	Signal MC : unsigned(45 downto 0);
begin
	SA <= -1 When A(31) = '1' else 1;
	SB <= -1 When B(31) = '1' else 1;
	x <= to_integer(unsigned(A(30 downto 23)));
	EA <= x-127;
	y <= to_integer(unsigned(B(30 downto 23)));
	EB <= y -127;
	FA(22) <='1';
	HA <= unsigned(A(22 downto 0));
	HB <= unsigned(B(22 downto 0));
	FA(21 downto 0) <= unsigned(A(22 downto 1));
	FB(22) <='1';
	FB(21 downto 0) <= unsigned(B(22 downto 1));
	ShiftA <= EA-EB when EA > EB else 0;
	ShiftB <= EB-EA when EB > EA else 0;
	MA <= shift_right(unsigned(FA), ShiftA);
	MB <= shift_right(unsigned(FB), ShiftB);
	
	--multiplier
	MC <= FB * FA;
	C(31) <= '0' When SA >=0 and SB >=0 else '1';
	EC <= EA + EC;
	C(30 downto 23) <= std_logic_vector(to_unsigned(EC, 8));
	C(22 downto 1) <= std_logic_vector(MC(21 downto 0));
	C(0)<='0';
end Behavioral;

