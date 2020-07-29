Library ieee;
Use ieee.std_logic_1164.all;
-- F=(A and B)or C
ENTITY comp3 is
port(
	inA:in bit;
	inB:in bit;
	inC:in bit;
	outF:out bit;
	);
end comp3
architecture Acomp3 of comp3 is
begin
	process(A or B or C)
	variable varF: bit;
	begin
		varF:=(A and B)or C;
	end process;
	outF<=varF;
end Acomp3;