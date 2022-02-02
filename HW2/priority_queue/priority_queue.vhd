----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:02:11 11/23/2021 
-- Design Name: 
-- Module Name:    priority_queue - Behavioral 
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

entity priority_queue is
    Port ( Enq : in  STD_LOGIC_Vector(7 downto 0);
           Deq : inout  STD_LOGIC_Vector(7 downto 0));
end priority_queue;

architecture Behavioral of priority_queue is
type dataout is array (15 downto 0,7 downto 0) of std_logic;
Signal cell :dataout;

begin

Process(Enq)
Variable temp : STD_LOGIC_Vector(7 downto 0);
Variable a : STD_LOGIC;
Variable b : STD_LOGIC;
begin
for i in 15 to 0 loop
for j in 0 to 7 loop
cell(i,j)<=cell(i-1,j);
end loop;
end loop;

for i in 0 to 7 loop
cell(0,i)<=Enq(i);
end loop;

for i in 0 to 14 loop
 a:='0';
 b:='0';
 for j in 0 to 7 loop
  if b='0' then
   if a='0' then
    if cell(i,j)='0' then
     if cell(i+1,j)='1' then
      a:='1';
     end if;
    end if;
    if cell(i,j)='1' then
     if cell(i+1,j)='0' then
      b:='1';
     end if;
    end if;
   end if;
  end if;
 end loop;

 if a='1' then
  for j in 0 to 7 loop
   temp(j) := cell(i,j);
   cell(i,j) <= cell((i+1),j);
      cell((i+1),j) <= temp(j);
  end loop;
 end if;
end loop;

for i in 0 to 7 loop
 Deq(i)<=cell(15,i);
End loop;



End Process;

end Behavioral;

