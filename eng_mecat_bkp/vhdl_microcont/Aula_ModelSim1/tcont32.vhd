library ieee;
use ieee.std_logic_1164.all;
entity tcont32 is
port(
	tsaida:out integer range 0 to 1073741823
	);
end tcont32;
architecture Atcont32 of tcont32 is

component cont32
	port(
	ck:in std_logic;
	inic:in integer range 0 to 1073741823;
	load:in bit;
	saida:out integer range 0 to 1073741823
	);
end component;
signal S_ck: std_logic;
signal S_inic: integer range 0 to 1073741823;
signal S_load: bit;
signal S_saida: integer range 0 to 1073741823;
begin
dut : cont32
	port map(S_ck,
			 S_inic,
			 S_load,
			 S_saida);
clock:process
	  begin
		wait for 10 ms;
		S_ck<=not(S_ck);
	  end process clock;
inicial:process
	   begin
	   S_load<='1';
	   S_inic<=10;
	   S_load<='0';
	   wait for 100 ms;
	   
	   S_load<='1';
	   S_inic<=30;
	   S_load<='0';
	   wait for 100 ms;
	   
	   S_load<='1';
	   S_inic<=1024;
	   S_load<='0';
	   wait for 100 ms;
	   
	   S_load<='1';
	   S_inic<=4095;
	   S_load<='0';
	   wait for 100 ms;
	   
	   S_load<='1';
	   S_inic<=65535;
	   S_load<='0';
	   wait for 100 ms;
	   
	   end process inicial;
	   end Atcont32;	   