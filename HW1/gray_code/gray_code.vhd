----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:11:39 10/30/2021 
-- Design Name: 
-- Module Name:    gray_code - Behavioral 
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
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;
use ieee.numeric_std.all;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity gray_code is
    Port ( b4 : in  STD_LOGIC;
           b3 : in  STD_LOGIC;
           b2 : in  STD_LOGIC;
           b1 : in  STD_LOGIC;
           b0 : in  STD_LOGIC;
           g4 : out  STD_LOGIC;
           g3 : out  STD_LOGIC;
           g2 : out  STD_LOGIC;
           g1 : out  STD_LOGIC;
           g0 : out  STD_LOGIC);
end gray_code;

architecture Behavioral of gray_code is
begin

process(b4 , b3 , b2 , b1, b0)
variable s: std_logic_vector(4 downto 0) :=(others => '0');
variable o: std_logic_vector(4 downto 0):=(others => '0');
begin
s:= b4 &b3 &b2 &b1 &b0;

o(4):= b4 ;

o(3):= b3 xor b4 ; 

o(2):= b2 xor b3 ;

o(1):= b1 xor b2 ;

o(0):= b0 xor b1 ;

-- Assign 0 for 25 and more
if(s="11001")then
	o:= "00000";
elsif(s>"11001")then
	o:= "00000";

end if;		 			 
		
			 
g4<=o(4);		
g3<=o(3);	
g2<=o(2);	
g1<=o(1);	
g0<=o(0);	

end process;	 
end Behavioral;

