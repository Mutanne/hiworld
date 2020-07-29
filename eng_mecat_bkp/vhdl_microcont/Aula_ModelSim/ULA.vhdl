Library ieee;
Use ieee.std_logic_1164.all;
Use ieee.std_logic_unsigned.all;
Use ieee.std_logic_arith.all;
Use ieee.math_real.all;
	
entity ULA is

	port
	(
		-- Input ports
		clk : in  std_logic;
		A	: in  std_logic_vector(31 downto 0);
		B	: in  std_logic_vector(31 downto 0);
		ALUop  : in  std_logic_vector( 3 downto 0);
		
		-- Output ports
		DATA	: out std_logic_vector (31 downto 0)
		
	);
end ULA;

-- Library Clause(s) (optional)
-- Use Clause(s) (optional)

architecture arch_ULA of ULA is

	-- Declarations (optional)

begin

   process (clk)
   variable var_DATA : std_logic_vector (31 downto 0);
   begin
    if (clk'event and (clk = '1') )then     
      if (ALUop = "0000") then --AND
		  var_DATA := A and B;
    
      elsif (ALUop = "0001") then --OR
		  var_DATA := A or B;
    
      elsif (ALUop = "0010")then  --add
		  var_DATA := (A + B);
    
      elsif (ALUop = "0110")then   --subtract
		  var_DATA := (A - B);
    
      elsif (ALUop = "0111") then   --set on less then
		    if(A < B) then
			   var_DATA :="11111111111111111111111111111111";
		    else
            var_DATA :="00000000000000000000000000000000";
        end if;
    
      elsif (ALUop = "1100") then   --NOR
		  var_DATA := A nor B;
    
      end if;
    end if;
        DATA <= var_DATA;
   end process;

end arch_ULA;