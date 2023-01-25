
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY LMX2531_tb IS
END LMX2531_tb;
 
ARCHITECTURE behavior OF LMX2531_tb IS 

    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT LMX2531
    PORT(
         Clock 		: IN 	   std_logic;
         SCK 			: OUT  	std_logic;
         SDIO 			: INOUT  std_logic;
         LE 			: OUT    std_logic;
         SYS_Ready 	: OUT    std_logic;
         Start 		: IN  	std_logic;
         Data_IN 		: IN  	unsigned(31 downto 0);
         CMD_Type 	: IN  	unsigned(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clock 		: std_logic := '0';
   signal Start 		: std_logic := '0';
   signal Data_IN 	: unsigned(31 downto 0) := (others => '0');
   signal CMD_Type 	: unsigned(1 downto 0) := (others => '0');

	--BiDirs
   signal SDIO : std_logic;

 	--Outputs
   signal SCK : std_logic;
   signal LE : std_logic;
   signal SYS_Ready : std_logic;

   -- Clock period definitions
   constant Clock_period : time := 12.5 ns;
	constant T_Hold       : time := 12.5 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: LMX2531 PORT MAP (
          Clock 		=> Clock,
          SCK 			=> SCK,
          SDIO 		=> SDIO,
          LE 			=> LE,
          SYS_Ready 	=> SYS_Ready,
          Start 		=> Start,
          Data_IN 	=> Data_IN,
          CMD_Type 	=> CMD_Type
        );

   -- Clock process definitions
   Clock_process :process
   begin
		Clock <= '0';
		wait for Clock_period/2;
		Clock <= '1';
		wait for Clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      
    -- Drive inputs T_HOLD time after rising edge of clock
    wait until rising_edge(Clock);
    wait for T_Hold;

    -- Run for long enough to produce 5 periods of outputs
    wait for CLOCK_PERIOD * 50;
	             
	 Start				<=	'0';                   
	
	 CMD_Type		<=	to_unsigned(2,2);
	 Data_IN			<=	x"00840005";   

	 Start				<=	'1';                   
    wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';                   
    wait for CLOCK_PERIOD * 99;
	 
	 Start				<=	'1'; 
	 Data_IN			<=	x"00800005";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
    wait for CLOCK_PERIOD * 99;
	 
	 Start				<=	'1'; 
	 Data_IN			<=	x"008007f5";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
	 wait for CLOCK_PERIOD * 99;
	 
	 Start				<=	'1'; 
	 Data_IN			<=	x"0001048c";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
    wait for CLOCK_PERIOD * 99;
	 
	 Start				<=	'1'; 
	 Data_IN			<=	x"00000ba9";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
	 wait for CLOCK_PERIOD * 99;
 
	 Start				<=	'1'; 
	 Data_IN			<=	x"00028008";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
    wait for CLOCK_PERIOD * 99;
	 
	 Start				<=	'1'; 
	 Data_IN			<=	x"00000307";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
	 wait for CLOCK_PERIOD * 99;

	 Start				<=	'1'; 
	 Data_IN			<=	x"00280006";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
	 
    wait for CLOCK_PERIOD * 99;
	 Start				<=	'1'; 
	 Data_IN			<=	x"00000004";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
	 wait for CLOCK_PERIOD * 99;
	 
	 Start				<=	'1'; 
	 Data_IN			<=	x"0034e623";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
	 wait for CLOCK_PERIOD * 99;
 
	 Start				<=	'1'; 
	 Data_IN			<=	x"00568022";
	 wait for CLOCK_PERIOD * 1;
	 Start				<=	'0';
    wait for CLOCK_PERIOD * 99;
	 
	 Start				<=	'1'; 

    wait;
  end process stim_proc;

END;
