----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:53:10 10/31/2021 
-- Design Name: 
-- Module Name:    decoder3x8 - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity decoder3x8 is
    Port ( A_D : in  std_logic_vector(3 downto 0);
			  F : out  std_logic);
end decoder3x8;

architecture Behavioral of decoder3x8 is
	Signal A_B_notB, k2_k0: std_logic_vector(2 downto 0);
	Signal mux3_mux0: std_logic_vector(3 downto 0);
	Signal I7_I0, J7_J0: std_logic_vector(7 downto 0);
	
begin
	A_B_notB <= NOT A_D(3) & A_D(3) & A_D(2);
	
	with A_B_notB select
		I7_I0 <= "00000001" when "000",
					"00000010" when "001",
					"00000100" when "010",
					"00001000" when "011",
					"00010000" when "100",
					"00100000" when "101",
					"01000000" when "110",
					"10000000" when "111",
					"00000000" when others;
								
	J7_J0 <= I7_I0 when NOT A_D(2) = '1' else "00000000";
	
	with J7_J0 select
		k2_k0 <= "000" when "00000001",
					"001" when "00000010",
					"010" when "00000100",
					"011" when "00001000",
					"100" when "00010000",
					"101" when "00100000",
					"110" when "01000000",
					"111" when "10000000",
					"000" when others;
								
	mux3_mux0 <= k2_k0 & '1' when NOT A_D(2) = '1' else "0001";
	
	
	F<= ( NOT A_D(1) AND  NOT A_D(0)  AND mux3_mux0(3))  OR
             ( NOT A_D(1) AND A_D(0) AND mux3_mux0(2)) OR
             ( A_D(1) AND  NOT A_D(0) AND mux3_mux0(1)) OR
             ( A_D(1) AND  A_D(0) AND mux3_mux0(0));

end Behavioral;

