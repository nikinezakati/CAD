----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:34:43 12/24/2021 
-- Design Name: 
-- Module Name:    mux - Behavioral 
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
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mux is
    port(sel:in STD_LOGIC;
         w0:in STD_LOGIC_VECTOR(31 downto 0);
         w1:in STD_LOGIC_VECTOR(31 downto 0);
         output: out STD_LOGIC_VECTOR(31 downto 0)
     );
end mux;

architecture behavioral of mux is
begin
    with sel select
        output <= w0 when '0',
                  w1 when '1',
                  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" when others;
end behavioral;