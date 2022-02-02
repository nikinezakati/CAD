----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:59:34 11/26/2021 
-- Design Name: 
-- Module Name:    timer - Behavioral 
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
USE ieee.std_logic_1164.all;
-----------------------------------------------------------------
ENTITY timer IS
    GENERIC (fclk: INTEGER := 1); 
    PORT (clk, rst, run: IN STD_LOGIC;
        digit1, digit2, digit3: OUT STD_LOGIC_VECTOR(7 DOWNTO 0));
END timer;

ARCHITECTURE timer OF timer IS
    SIGNAL oneHz_clk: STD_LOGIC;
    SIGNAL seconds1: INTEGER RANGE 0 TO 10; 
    SIGNAL seconds2: INTEGER RANGE 0 TO 6;  
    SIGNAL minutes: INTEGER RANGE 0 TO 10;  
BEGIN
    
    PROCESS (clk)
       VARIABLE count: INTEGER RANGE 0 TO fclk;
    BEGIN
       IF (clk'EVENT AND clk='1') THEN
           count := count + 1;
           IF (count=fclk/2) THEN
               oneHz_clk <= '1';
           ELSIF (count=fclk) THEN
oneHz_clk <= '0';
count := 0;
       END IF;
    END IF;
END PROCESS;

PROCESS (oneHz_clk, rst)
    VARIABLE count1: INTEGER RANGE 0 TO 10; 
    VARIABLE count2: INTEGER RANGE 0 TO 6; 
    VARIABLE count3: INTEGER RANGE 0 TO 10; 
BEGIN
    IF (rst='1') THEN
       count1:=0;
       count2:=0;
       count3:=0;
    ELSIF (clk'EVENT AND clk='1') THEN
       IF (run='1' AND (count1/=9 OR count2/=5 OR count3/=9)) THEN
           count1 := count1 + 1;
           IF (count1=10) THEN
               count1 := 0;
               count2 := count2 + 1;
               IF (count2=6) THEN
count2 := 0; 
                  count3 := count3 + 1;
               END IF;
           END IF;
       END IF;
    END IF;
    seconds1 <= count1;
    seconds2 <= count2;
    minutes <= count3;
END PROCESS;

PROCESS (seconds1, seconds2, minutes)
BEGIN
    CASE seconds1 IS
       WHEN 0 => digit1 <= "11111100"; 
       WHEN 1 => digit1 <= "01100000"; 
       WHEN 2 => digit1 <= "11011010"; 
       WHEN 3 => digit1 <= "11110010"; 
       WHEN 4 => digit1 <= "01100110"; 
       WHEN 5 => digit1 <= "10110110"; 
       WHEN 6 => digit1 <= "10111110"; 
       WHEN 7 => digit1 <= "11100000"; 
       WHEN 8 => digit1 <= "11111110"; 
       WHEN 9 => digit1 <= "11110110"; 
       WHEN OTHERS => NULL;
    END CASE;
    CASE seconds2 IS
       WHEN 0 => digit2 <= "11111100"; 
       WHEN 1 => digit2 <= "01100000"; 
       WHEN 2 => digit2 <= "11011010"; 
       WHEN 3 => digit2 <= "11110010"; 
       WHEN 4 => digit2 <= "01100110";
       WHEN 5 => digit2 <= "10110110"; 
       WHEN OTHERS => NULL;
    END CASE;
    CASE minutes IS
       WHEN 0 => digit3 <= "11111101"; 
       WHEN 1 => digit3 <= "01100001"; 
       WHEN 2 => digit3 <= "11011011"; 
       WHEN 3 => digit3 <= "11110011"; 
       WHEN 4 => digit3 <= "01100111"; 
       WHEN 5 => digit3 <= "10110111"; 
       WHEN 6 => digit3 <= "10111111"; 
       WHEN 7 => digit3 <= "11100001"; 
       WHEN 8 => digit3 <= "11111111"; 
WHEN 9 => digit3 <= "11110111"; 
           WHEN OTHERS => NULL;
       END CASE;
    END PROCESS;
END timer;

