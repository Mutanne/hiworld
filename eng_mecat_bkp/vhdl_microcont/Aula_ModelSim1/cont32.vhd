library ieee;
use ieee.std_logic_1164.all;

entity cont32 is
port(
	ck:in std_logic;
	inic:in bit_vector(31 downto 0);
	load:in bit;
	saida:out bit_vector(31 downto 0)
	);
end cont32;

architecture Acont32 of cont32 is
-- 1073741823
signal ss : bit_vector(31 downto 0);
signal s : bit_vector(31 downto 0);  
begin
process(ck)
begin
  s<="00000000000000000000000000000001";
	if(ck'event and (ck='1')) then
		if(load='1') then
			ss<=inic;
		else
			ss<=ss+s;
		end if;
	end if;
end process;
saida<=ss;
end Acont32 ;
			