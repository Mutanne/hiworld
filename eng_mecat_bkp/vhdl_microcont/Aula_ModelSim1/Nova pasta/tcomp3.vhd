Library ieee;
Use ieee.std_logic_1164.all;

ENTITY tcomp3 is
port(
	toutF:out bit
	);
END tcomp3;

architecture Atcomp3 of tcomp3 is

component comp3 
port(
	inA:in bit;
	inB:in bit;
	inC:in bit;
	outF:out bit;
	);
end component;

signal S_inA:in bit;
signal S_inB:in bit;
signal S_inC:in bit;
signal S_outF:in bit;

dutcomp3:comp3
	port map(S_inA,
			 S_inB,
			 S_inC,
			 S_outF);

estimulos:process
	begin
	S_inA <="0";
	S_inB <="0";
	S_inC <="0";
	wait for 20 ns;
	S_inA <="0";
	S_inB <="0";
	S_inC <="1";
	wait for 20 ns;
	
	S_inA <="0";
	S_inB <="1";
	S_inC <="0";
	wait for 20 ns;
	S_inA <="0";
	S_inB <="1";
	S_inC <="1";
	wait for 20 ns;
	
	S_inA <="1";
	S_inB <="0";
	S_inC <="0";
	wait for 20 ns;
	S_inA <="1";
	S_inB <="0";
	S_inC <="1";
	wait for 20 ns;
	
	S_inA <="1";
	S_inB <="1";
	S_inC <="0";
	wait for 20 ns;
	S_inA <="1";
	S_inB <="1";
	S_inC <="1";
	wait for 20 ns;
	end process estimulos;
	toutf<=S_uotF;
end atcomp;
	
	
	
	
	
	