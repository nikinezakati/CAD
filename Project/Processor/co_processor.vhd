----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:30:17 01/24/2022 
-- Design Name: 
-- Module Name:    co_processor - Behavioral 
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

entity co_processor is
    Port ( A : in  STD_LOGIC_VECTOR (31 downto 0);
           B : in  STD_LOGIC_VECTOR (31 downto 0);
           n : in  STD_LOGIC_VECTOR (4 downto 0);
           control : in  STD_LOGIC_VECTOR (2 downto 0);
           C : out  STD_LOGIC_VECTOR (31 downto 0);
           R : out  STD_LOGIC;
           I : out  STD_LOGIC_VECTOR (31 downto 0);
           F : out  STD_LOGIC_VECTOR (31 downto 0);
           E : out  STD_LOGIC_VECTOR (31 downto 0));
end co_processor;

architecture Behavioral of co_processor is
Signal C1, C2,C3,C4,I1,I2,F1,F2,E1,E2 : STD_LOGIC_VECTOR(31 downto 0) := (others=> '0');
signal R_temp : std_logic := '0';

component Sum
	Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           B : in  STD_LOGIC_Vector(31 downto 0);
           C : out  STD_LOGIC_Vector(31 downto 0));
end component;

component Subtraction
	Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           B : in  STD_LOGIC_Vector(31 downto 0);
           C : out  STD_LOGIC_Vector(31 downto 0));
end component;

component multiplier
	Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           B : in  STD_LOGIC_Vector(31 downto 0);
           C : out  STD_LOGIC_Vector(31 downto 0));
end component;

component Division
	Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           B : in  STD_LOGIC_Vector(31 downto 0);
           C : out  STD_LOGIC_Vector(31 downto 0);
           R : out  STD_LOGIC);
end component;

component Fixed
	Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           n : in  STD_LOGIC_Vector(4 downto 0);
           I : out  STD_LOGIC_VECTOR(31 downto 0);
           F : out  STD_LOGIC_VECTOR(31 downto 0);
           E : out  STD_LOGIC_VECTOR(31 downto 0));
end component;

component Radix10
	Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           I : out  STD_LOGIC_VECTOR(31 downto 0);
           F : out  STD_LOGIC_VECTOR(31 downto 0);
           E : out  STD_LOGIC_VECTOR(31 downto 0));
end component;

begin

summ : Sum port map(A,B,C1);
subb : Subtraction port map(A,B,C2);
mull : multiplier port map(A,B,C3);
divisionn : Division port map(A,B,C4,R_temp);
fixedd : Fixed port map(A,n,I1,F1,E1);
radixx : Radix10 port map(A,I2,F2,E2);

process(A,B,n,control)

begin

case control is
     when "000" =>
          C<=C1;
     when "001"=>
          C<=C2;
     when "010" =>
          C<=C3;
     when "011"=> 
          C<=C4;
			 R<=R_temp;
	  when "100"=> 
          I<=I1;
			 F<=F1;
			 E<=E1;	
	  when "101"=> 
          I<=I2;
			 F<=F2;
			 E<=E2;	
	  when others=>
				null;
     end case;

end process;
end Behavioral;

