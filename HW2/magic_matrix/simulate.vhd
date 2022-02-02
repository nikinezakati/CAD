--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:07:42 11/28/2021
-- Design Name:   
-- Module Name:   Z:/Desktop/CAD/HW2/Q1/simulate.vhd
-- Project Name:  Q1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MagicMatrix
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
 
    COMPONENT MagicMatrix
    PORT(
         n : IN  integer;
         clk : IN  std_logic;
         reset : IN  std_logic;
         result : OUT  std_logic_vector(0 to 576)
        );
    END COMPONENT;
    

   --Inputs
   signal n : INTEGER := 3;
   signal clk : std_logic := '1';
   signal reset : std_logic := '0';

 	--Outputs
   signal result : std_logic_vector(0 to 576);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MagicMatrix PORT MAP (
          n => n,
          clk => clk,
          reset => reset,
          result => result
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
   

END;
