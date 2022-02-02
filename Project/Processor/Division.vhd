library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE ieee.numeric_std.ALL;

entity Division is
    Port ( A : in  STD_LOGIC_Vector(31 downto 0);
           B : in  STD_LOGIC_Vector(31 downto 0);
           C : out  STD_LOGIC_Vector(31 downto 0);
           R : out  STD_LOGIC);
end Division;

architecture Behavioral of Division is
	Signal  EA, EB, EC : integer;
	Signal x,y, FAint, FBint: integer;
	Signal FA, FB : unsigned(22 downto 0);
	Signal ShiftA, ShiftB : integer :=0;
	Signal HA, HB : unsigned(22 downto 0);
	Signal MA, MB, MC : unsigned(22 downto 0);	
begin
	x <= to_integer(unsigned(A(30 downto 23)));
	EA <= x-127;
	y <= to_integer(unsigned(B(30 downto 23)));
	EB <= y -127;
	FA(22) <='1';
	FA(21 downto 0) <= unsigned(A(22 downto 1));
	FAint <= to_integer(unsigned(FA(21 downto 0)));	
	FB(22) <='1';
	FB(21 downto 0) <= unsigned(B(22 downto 1));
	FBint <= to_integer(unsigned(FB(21 downto 0)));
	ShiftA <= EA-EB when EA > EB else 0;
	ShiftB <= EB-EA when EB > EA else 0;
	MA <= shift_right(unsigned(FA), ShiftA);
	MB <= shift_right(unsigned(FB), ShiftB);	

-- division
	MC <= MA / MB;
	C(31) <= '1' when (A(31) = '1' and B(31) = '0') or (A(31) = '0' and B(31) = '1') else '0';
	EC <= EA - EB;
	C(30 downto 23) <= (others => '0') when FAint = 0 else
							 (others => 'Z') when FBint = 0 else
							 std_logic_vector(to_unsigned(EC, 8));
	C(22 downto 1) <= (others => '0') when FAint = 0 else
							(others => 'Z') when FBint = 0 else
							 std_logic_vector(MC(21 downto 0));

end Behavioral;

