----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:41:25 11/25/2021 
-- Design Name: 
-- Module Name:    MagicMatrix - Behavioral 
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
use ieee.numeric_std.all;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MagicMatrix is
    Port ( n : in  INTEGER;
           clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           result : out  STD_LOGIC_VECTOR(0 to 576));
end MagicMatrix;

architecture Behavioral of MagicMatrix is
TYPE matrix IS ARRAY(0 to 12, 0 to 12) of INTEGER;
begin

PROCESS
VARIABLE middle: INTEGER;
VARIABLE x:INTEGER;
VARIABLE y:INTEGER;
VARIABLE temp:INTEGER;
VARIABLE new_matrix : matrix;
VARIABLE counter : INTEGER;
VARIABLE index : INTEGER;
VARIABLE curr : STD_LOGIC_VECTOR(3 downto 0);
BEGIN
if((n mod 2) = 1)
THEN
x:= n/2 + 1;
y:= n/2;
temp:=1;

WHILE(temp <= (n*n)) LOOP
IF((new_matrix (x,y)) = 0 ) THEN
	new_matrix (x,y) := temp;
	temp:= temp+1;
	x:=(x+1) mod n;
	y:=(y+1) mod n;
ELSE
	x:=(x+1) mod n;
	y:=(y-1) mod n;
END IF;
END LOOP;

ELSE

IF((n mod 4) = 0) THEN
		temp:=1;
		
		WHILE(temp <= (n*n)) LOOP
				if(((temp-1)/n) = ((temp-1) mod n)) then
					new_matrix(((temp-1)/n) , ((temp-1) mod n)) := temp;
				end if;
				temp:= temp+1;
		END LOOP;
		temp:= n*n;
		x:= 0;
		WHILE(temp > 0) LOOP
				if((x/n) /= (x mod n)) then
					new_matrix((x/n) , (x mod n)) := temp;
				end if;
				temp:= temp-1;
				x:=x+1;
		END LOOP;
END IF;

END IF;

IF(clk'event AND clk='1') then
	if(counter < n*n) then
		index:=counter*4;
		curr:=std_logic_vector( to_signed( new_matrix(counter/n , counter mod n), 4));
		result(index)<=curr(3);
		result(index+1)<=curr(2);
		result(index+2)<=curr(1);
		result(index+3)<=curr(0);
		counter:=counter+1;
	END IF;
END IF;

IF(reset = '1') THEN
	index:=0;
	WHILE(index<=576)loop
		result(index)<='0';
	END LOOP;
END IF;
END PROCESS;

end Behavioral;

