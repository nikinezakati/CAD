----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:28:42 12/24/2021 
-- Design Name: 
-- Module Name:    cache - Behavioral 
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
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity cache is
    port(clk, wr_en, reset :in STD_LOGIC;
         adress :in STD_LOGIC_VECTOR(9 downto 0);
         wr_data :in STD_LOGIC_VECTOR(31 downto 0);
         valid : in STD_LOGIC;
         invalid :in STD_LOGIC;
         data: out STD_LOGIC_VECTOR(31 downto 0);
         hit: out STD_LOGIC;
         ready: out STD_LOGIC := '1'
     );
end cache;

architecture gate of cache is
    component data_array is
        port(clk, wr_en:in STD_LOGIC;
             address:in STD_LOGIC_VECTOR(5 downto 0);
             wr_data:in STD_LOGIC_VECTOR(31 downto 0);
             data:out STD_LOGIC_VECTOR(31 downto 0)
         );
    end component;

    component valid_array is
        port(clk,wr_en,reset,valid,invalid:in STD_LOGIC;
             address:in STD_LOGIC_VECTOR(5 downto 0);
             wr_data:in STD_LOGIC_VECTOR(3 downto 0);
             output:out STD_LOGIC_VECTOR(4 downto 0)
         );
    end component;

    component lru_array is
        port(address : in STD_LOGIC_VECTOR(5 downto 0);
             k : in STD_LOGIC;
             clk : in STD_LOGIC;
             enable : in STD_LOGIC;
             reset : in STD_LOGIC;
             w0_valid : out STD_LOGIC
         );
    end component;

    component miss_hit is
        port(tag : in STD_LOGIC_VECTOR(3 downto 0);
             w0 : in STD_LOGIC_VECTOR(4 downto 0);
             w1 : in STD_LOGIC_VECTOR(4 downto 0);
             hit : out STD_LOGIC;
             w0_valid : out STD_LOGIC;
             w1_valid : out STD_LOGIC
         );
    end component;

    component mux is
        port(sel:in STD_LOGIC;
             w0:in STD_LOGIC_VECTOR(31 downto 0);
             w1:in STD_LOGIC_VECTOR(31 downto 0);
             output: out STD_LOGIC_VECTOR(31 downto 0)
         );
    end component;

    type data_array_data is array (63 downto 0) of STD_LOGIC_VECTOR (31 downto 0);
    signal k0_data : STD_LOGIC_VECTOR(31 downto 0);
    signal k1_data : STD_LOGIC_VECTOR(31 downto 0);
    signal k0_tag_valid_out : STD_LOGIC_VECTOR(4 downto 0);
    signal k1_tag_valid_out : STD_LOGIC_VECTOR(4 downto 0);
    signal k0_wr_en : STD_LOGIC := '0';
    signal k1_wr_en : STD_LOGIC := '0';
    signal enable : STD_LOGIC := '1';
    signal k : STD_LOGIC := '0';
    signal hit_readable : STD_LOGIC;
    signal w0_valid, w1_valid : STD_LOGIC;
    signal w0_valid_lru : STD_LOGIC;
begin
    k0_data_array: data_array port map(clk => clk , wr_en => k0_wr_en, address =>
        adress(5 downto 0), wr_data => wr_data, data => k0_data);
    k1_data_array: data_array port map(clk => clk , wr_en => k1_wr_en, address =>
        adress(5 downto 0), wr_data => wr_data, data => k1_data);

    k0_tag_valid: valid_array port map(clk => clk, wr_en => k0_wr_en,
                                           reset => reset,valid => valid,invalid => invalid,
                                           address => adress(5 downto 0), wr_data => adress(9 downto 6),output => k0_tag_valid_out);

    k1_tag_valid: valid_array port map(clk => clk, wr_en => k1_wr_en, reset => reset,valid => valid, invalid => invalid,
                                           address => adress(5 downto 0), wr_data => adress(9 downto 6),output => k1_tag_valid_out);

    miss_hit: miss_hit port map(tag => adress(9 downto 6),w0 => k0_tag_valid_out
    ,w1 => k1_tag_valid_out,hit => hit_readable,w0_valid => w0_valid,w1_valid => w1_valid);

    hit <= hit_readable;
    lru_logic: lru_array port map(address => adress(5 downto 0),k => k,
                                  clk => clk,reset=> invalid,w0_valid => w0_valid_lru, enable => enable);

    mux_2 : mux port map(k, k0_data, k1_data, data);

    process(clk)
        variable current : integer := 0;
        constant begin_write : integer := 1;
        constant begin_read : integer := 2;
        constant start : integer := 0;
        variable one_loop : integer := 0;
        variable address_to_be_written: STD_LOGIC_VECTOR(9 downto 0);
        variable last_address : STD_LOGIC_VECTOR(9 downto 0);
        variable last_write : STD_LOGIC;
        variable last_wr_data : STD_LOGIC_VECTOR(31 downto 0);
    begin
        if(current = start) then
            if(last_address /= adress or last_write /= wr_en or wr_data /= last_wr_data) then
                if(wr_en = '1') then
                    current := begin_write;
                    k0_wr_en <= '0';
                    k1_wr_en <= '0';
                    ready <= '0';
                    enable <= '0';
                    address_to_be_written := adress;
                else
                    current := start;
                    k1_wr_en <= '0';
                    k <= w1_valid;
                    if(one_loop = 1) then
                        k0_wr_en <= '0';
                    end if;

                end if;
            else
                k <= w1_valid;
                k0_wr_en <= '0';
                k1_wr_en <= '0';
                enable <= '0';
            end if;
        elsif(current = begin_write) then
            if(address_to_be_written = adress) then
                current := start;
                k0_wr_en <= (not hit_readable and w0_valid_lru and wr_en) or (hit_readable and w0_valid and wr_en);
                k1_wr_en <= ((not w0_valid_lru) and wr_en and not hit_readable) or (hit_readable and w1_valid and wr_en);
                k <= (not hit_readable and w0_valid_lru and wr_en) or (hit_readable and w0_valid and wr_en);
                enable <= '1';
                one_loop := 1;
                ready <= '1';
            else
                one_loop := 1;
                current := start;
            end if;
        end if;
        last_address := adress;
        last_wr_data := wr_data;
        last_write := wr_en;
    end process;
end gate;