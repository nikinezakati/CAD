library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE ieee.numeric_std.ALL;

entity Fixed is
    Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           n : in  STD_LOGIC_Vector(4 downto 0);
           I : out  STD_LOGIC_VECTOR(31 downto 0);
           F : out  STD_LOGIC_VECTOR(31 downto 0);
           E : out  STD_LOGIC_VECTOR(31 downto 0));
end Fixed;

architecture Behavioral of Fixed is
	Signal EA, nn, x : integer := 0;
	Signal FA: unsigned(22 downto 0);
begin
	x <= to_integer(unsigned(A(30 downto 23)));
	EA <= x-127;
	FA(22) <='1';
	FA(21 downto 0) <= unsigned(A(22 downto 1));
	nn <= to_integer(unsigned(n));

	-- fixed-point
	-- A, n --> I, F, E
	F <= std_logic_vector(FA(nn-1 downto 0));
	I <= std_logic_vector(FA(22 downto nn));
	E <= std_logic_vector(to_unsigned(EA - FA'length + nn , E'length));

end Behavioral;

