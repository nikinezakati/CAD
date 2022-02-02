----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:49:16 12/17/2021 
-- Design Name: 
-- Module Name:    dice - Behavioral 
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

entity DiceGame is
	port (Rb, Reset: in bit;
			Sum: in integer range 2 to 12;
			CLK: in std_ulogic;
			Roll, Win, Lose: out bit);
end DiceGame;


architecture DiceBehave of DiceGame is
	signal State, Nextstate: integer range 0 to 5;
	signal Point: integer range 2 to 12;
	signal Sp: bit;
begin
	process(Rb, Reset, Sum, State)
	begin
		Sp <= '0'; Roll <= '0'; Win <= '0'; Lose <= '0';
		case State is
			when 0 => if Rb = '1' then Nextstate <= 1; end if;
			when 1 =>
				if Rb = '1' then Roll <= '1';
					elsif Sum = 7 or Sum = 11 then Nextstate <= 2;
					elsif Sum = 2 or Sum = 3 or Sum =12 then Nextstate <= 3;
					else Sp <= '1'; Nextstate <= 4;
				end if;
			when 2 => Win <= '1';
				if Reset = '1' then Nextstate <= 0; end if;
			when 3 => Lose <= '1';
				if Reset = '1' then Nextstate <= 0; end if;
					when 4 => if Rb = '1' then Nextstate <= 5; end if;
					when 5 =>
						if Rb = '1' then Roll <= '1';
							elsif Sum = Point then Nextstate <= 2;
							elsif Sum = 7 then Nextstate <= 3;
							else Nextstate <= 4;
						end if;
					end case;
		end process;
		process(CLK)
		begin
			if rising_edge(CLK) then
				State <= Nextstate;
				if Sp = '1' then Point <= Sum; end if;
			end if;
		end process;
end DiceBehave;

