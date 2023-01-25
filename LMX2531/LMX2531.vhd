
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity LMX2531 is
    Port ( 
				Clock 					: in 		std_logic;
				SCK 						: out		std_logic;
				SDIO 						: inout	std_logic;
				LE 						: out		std_logic;
				SYS_Ready 				: out 	std_logic;
				Start 					: in 		std_logic;
				Data_IN 					: in 		unsigned (31 downto 0);
				CMD_Type 				: in 		unsigned (1 downto 0)
           );
end LMX2531;

architecture Behavioral of LMX2531 is

	signal	SDIO_INT							:	std_logic							:=	'0';
	signal	Start_INT						:	std_logic							:=	'0';
	signal	Start_Last						:	std_logic							:=	'0';
	signal	SCK_INT							:	std_logic							:=	'0';
	signal	LE_INT							:	std_logic							:=	'0';
	signal	SYS_Ready_INT					:	std_logic							:=	'0';
	signal	SYS_Ready_INT_1				:	std_logic							:=	'0';
	signal	SYS_Ready_INT_2				:	std_logic							:=	'0';
	signal	SPI_Write_State				:	std_logic							:=	'0';
	signal	SPI_End_Send_Data				:	std_logic							:=	'0';
	signal	SCK_Disable						:	std_logic							:=	'0';
	signal	Set_SCK_Disable				:	std_logic							:=	'0';
	signal	SPI_Data_Bit_Width_Buffer 	:	unsigned	(4 downto  0)			:=	(others=>'0');	
	signal	Data_IN_INT						:	unsigned	(31 downto 0)			:=	(others=>'0');
	signal	Data_IN_Buffer					:	unsigned	(31 downto 0)			:=	(others=>'0');
	signal	CMD_Type_INT					:	unsigned	(1 downto  0)			:=	(others=>'0');	
	signal	SCK_Clock_Divider				:	unsigned	(1 downto  0)			:=	(others=>'0');
	signal	LE_Disable_Counter			:	unsigned	(2 downto  0)			:=	(others=>'1');
	type		SPI_Data_Bit_Width_Array is array (0 to 3) of unsigned(4 downto 0); 
	constant	SPI_Data_Bit_Width			:	SPI_Data_Bit_Width_Array	   :=	
				(to_unsigned(7,5),to_unsigned(15,5),to_unsigned(23,5),to_unsigned(31,5));						
begin
	SDIO								<=	SDIO_INT;
	LE									<=	LE_INT;	
	SCK								<=	SCK_INT AND SCK_Disable;
	SYS_Ready						<=	SYS_Ready_INT OR SYS_Ready_INT_1	OR	SYS_Ready_INT_2;	
	
	process(Clock)
	begin
		if rising_edge(Clock) then
		
			SCK_INT								<=	'1';	
			SCK_Clock_Divider					<=	SCK_Clock_Divider + 1;
			Start_INT							<=	Start;
			Start_Last							<=	Start_INT;
			Data_IN_INT							<=	Data_IN;			
			CMD_Type_INT						<=	CMD_Type;
			LE_INT								<=	'0';
			SYS_Ready_INT_1					<=	SYS_Ready_INT;
			SYS_Ready_INT_2					<=	SYS_Ready_INT_1;									
			if (LE_Disable_Counter < to_unsigned(2,3))then 
				LE_Disable_Counter			<=	LE_Disable_Counter + 1;
				LE_INT							<=	'1';				
			end if;							
			if (SCK_Clock_Divider = to_unsigned(0,2) AND SPI_Write_State = '1')then		
				SDIO_INT							<= Data_IN_Buffer(to_integer(SPI_Data_Bit_Width_Buffer));
				SPI_Data_Bit_Width_Buffer	<=	SPI_Data_Bit_Width_Buffer - 1;
				SCK_Disable						<=	Set_SCK_Disable;				
				if (SPI_Data_Bit_Width_Buffer = to_unsigned(0,5))then
					SPI_End_Send_Data		<=	'1';	
				end if;				
				if (SPI_End_Send_Data = '1')then					
					SYS_Ready_INT				<=	'0';
					SCK_Disable					<=	'0';
					Set_SCK_Disable			<=	'0';
					SPI_Write_State			<=	'0';
					SPI_End_Send_Data			<=	'0';					
				end if;				
			end if;																
			if (SCK_Clock_Divider < to_unsigned(2,2))then
				SCK_INT							<=	'0';
			end if;
			if (SCK_Clock_Divider = to_unsigned(3,2))then
				SCK_Clock_Divider				<=	(others=>'0');
			end if;
			if (Start_INT = '1' and Start_Last = '0' and SYS_Ready_INT = '0')then			
				Data_IN_Buffer					<=	Data_In_Int;
				SPI_Data_Bit_Width_Buffer	<=	SPI_Data_Bit_Width(to_integer(CMD_Type_INT));
				LE_Disable_Counter  			<=	(others=>'0');
				SCK_Clock_Divider				<=	to_unsigned(2,2); 
				SPI_Write_State				<=	'1';
				SYS_Ready_INT					<=	'1';
				Set_SCK_Disable				<=	'1';
				SPI_End_Send_Data				<=	'0';
				SCK_Disable						<=	'0';									
			end if;					
		end if;
	end process;
end Behavioral;

