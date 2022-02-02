--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:45:20 11/26/2021
-- Design Name:   
-- Module Name:   Z:/Desktop/CAD/HW2/Timer/simulate.vhd
-- Project Name:  Timer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: timer
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY simulate IS
END simulate;
 
ARCHITECTURE behavior OF simulate IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT timer
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         run : IN  std_logic;
         digit1 : OUT  std_logic_vector(7 downto 0);
         digit2 : OUT  std_logic_vector(7 downto 0);
         digit3 : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '1';
   signal rst : std_logic := '0';
   signal run : std_logic := '0';

 	--Outputs
   signal digit1 : std_logic_vector(7 downto 0);
   signal digit2 : std_logic_vector(7 downto 0);
   signal digit3 : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: timer PORT MAP (
          clk => clk,
          rst => rst,
          run => run,
          digit1 => digit1,
          digit2 => digit2,
          digit3 => digit3
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;

 

   -- Stimulus process
   stim_proc1: process
   begin		
      -- hold reset state for 100 ns.
      wait for 50 ns;	
		rst<='0';
      wait for clk_period*5;
		rst<='1';
      -- insert stimulus here 

      wait;
   end process;
	
	stim_proc2: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		run<='0';
      wait for clk_period*10;
		run<='1';
      -- insert stimulus here 

      wait for clk_period*10;
   end process;



END;
