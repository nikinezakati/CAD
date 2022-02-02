----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:31:40 12/24/2021 
-- Design Name: 
-- Module Name:    data_array - Behavioral 
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

LIBRARY ieee;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;


entity data_array is
    port(clk, wren:in STD_LOGIC;
         address:in STD_LOGIC_VECTOR(5 downto 0);
         wrdata:in STD_LOGIC_VECTOR(31 downto 0);
         data:out STD_LOGIC_VECTOR(31 downto 0));
end data_array;

architecture behavioral of data_array is
    type data_array_data is array (63 downto 0) of STD_LOGIC_VECTOR (31 downto 0);
    signal data_array : data_array_data;
begin
    data <= data_array(to_integer(unsigned(address)));
    process(clk)
    begin
        if(wren = '1') then
            data_array(to_integer(unsigned(address))) <= wrdata;
        end if;

    end process;

end behavioral;