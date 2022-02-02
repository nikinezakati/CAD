----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:41:38 01/03/2022 
-- Design Name: 
-- Module Name:    signal_generator - Behavioral 
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

entity Sequenece is
port (CLK,RST,AB : in std_logic; 
     Z : out std_logic);
end entity Sequenece;     

architecture moore of Sequenece is
     type state is
          (IDLE,S0,S01,S011,S0110);
     signal CS,NS: state; 
     begin
     SEQ: process (CLK) is 
     begin
     if (rising_edge(CLK)) then 
          if (RST='1' ) then
               CS<=IDLE;
          else
               CS <= NS; end if;
          end if;
     end process SEQ;     
     COM: process (CS,AB) is 
     begin
     Z<='0'; 
     case CS is
     when IDLE =>
          if (AB = '0') then
               NS<=S0; 
          else
               NS<=IDLE; 
          end if;
          when S0 =>
          if (AB = '0') then
               NS<=S0; 
          else
               NS<=S01;
          end if;
     when S01=>
          if (AB = '0') then          
               NS<=S0; 
          else
               NS<=S011; 
          end if;
     when S011 =>
          if (AB = '0') then
               NS<=S0110; 
          else
               NS<=IDLE; 
          end if;
     when S0110=> 
          Z<='1';
          NS<=IDLE; 
     end case;
     end process COM;
     end architecture moore;