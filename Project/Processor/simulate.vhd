--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:34:20 01/25/2022
-- Design Name:   
-- Module Name:   Z:/Desktop/CAD/Project/Processor/simulate.vhd
-- Project Name:  Processor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: co_processor
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
 
    COMPONENT co_processor
    PORT(
         A : IN  std_logic_vector(31 downto 0);
         B : IN  std_logic_vector(31 downto 0);
         n : IN  std_logic_vector(4 downto 0);
         control : IN  std_logic_vector(2 downto 0);
         C : OUT  std_logic_vector(31 downto 0);
         R : OUT  std_logic;
         I : OUT  std_logic_vector(31 downto 0);
         F : OUT  std_logic_vector(31 downto 0);
         E : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(31 downto 0) := (others => '0');
   signal B : std_logic_vector(31 downto 0) := (others => '0');
   signal n : std_logic_vector(4 downto 0) := (others => '0');
   signal control : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal C : std_logic_vector(31 downto 0):= (others => '0');
   signal R : std_logic := '0';
   signal I : std_logic_vector(31 downto 0) := (others => '0');
   signal F : std_logic_vector(31 downto 0) := (others => '0');
   signal E : std_logic_vector(31 downto 0) := (others => '0');
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
		signal clk: std_logic := '1';
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: co_processor PORT MAP (
          A => A,
          B => B,
          n => n,
          control => control,
          C => C,
          R => R,
          I => I,
          F => F,
          E => E
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
				A<="00000000000000000000000000000001";
      wait for clk_period*5;
				A<="00000000000000000000000000000001";
      -- insert stimulus here 

      wait;
   end process;
	
	stim_proc2: process
   begin		
      -- hold reset state for 100 ns.
      wait for 50 ns;	
				B<="00000000000000000000000000000001";
      wait for clk_period*5;
				B<="00000000000000000000000000000001";
      -- insert stimulus here 

      wait;
   end process;
	
	stim_proc3: process
   begin		
      -- hold reset state for 100 ns.
      wait for 50 ns;	
				n<="00000";
      wait for clk_period*5;
				n<="00000";
      -- insert stimulus here 

      wait;
   end process;
	
	stim_proc4: process
   begin		
      -- hold reset state for 100 ns.
      wait for 50 ns;	
				control<="000";
      wait for clk_period*5;
				control<="000";
      -- insert stimulus here 

      wait;
   end process;

END;
