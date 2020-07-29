--Adicionando as bibliotecas utilizadas no projeto.
Library ieee;
Use ieee.std_logic_1164.all;
Use ieee.std_logic_unsigned.all;
Use ieee.std_logic_arith.all;
Use ieee.math_real.all;
Use ieee.std_logic_textio.all;
Use std.textio.all;

---Essas são as saidas do meu teste
Entity tula is
    PORT (  
    -- Input ports            
		
		-- Output ports
		        t_DATA	: out std_logic_vector (31 downto 0)		      		      	                 
          );
end;

architecture testeULA of tula is
  COMPONENT ULA 
    PORT(
		-- Input ports
		      clk : in  std_logic;
		      A	  : in  std_logic_vector(31 downto 0);
		      B	  : in  std_logic_vector(31 downto 0);
		      ALUop  : in  std_logic_vector( 3 downto 0);
		
		-- Output ports
		      DATA	: out std_logic_vector (31 downto 0)		
	);    
  END COMPONENT;
  
SIGNAL sig_clk : std_logic := '0';
SIGNAL sig_A : std_logic_vector(31 downto 0);
SIGNAL sig_B : std_logic_vector(31 downto 0);
SIGNAL sig_ALUop : std_logic_vector( 3 downto 0);
SIGNAL sig_DATA : std_logic_vector( 31 downto 0);

  begin
 
dutULA : ULA
      PORT MAP(sig_clk,
               sig_A,
               sig_B,
               sig_ALUop,
               sig_DATA);
clock : process
        begin          
          wait for 10 ns; 
          sig_clk  <= not sig_clk; 
      end process clock;     

estimulos: process
       begin
         sig_ALUop <= "0000";
         sig_A <="00000000000000000000000001011011";
         sig_B <="11111111111111111111111111111111";         
         wait for 40 ns;
         
         sig_ALUop <= "0001";
         sig_A <="11111111111111111111110111110101";
         sig_B <="00000000000000000000000000000000";
         wait for 40 ns;
         
		 sig_Aluop <="0010";
		 sig_A <="00000000000000000000000111110101";
         sig_B <="00000000000000000000000000000000";
         wait for 40 ns;
		 
		 sig_Aluop <="0110";
		 sig_A <="00000000000000000000000111110101";
         sig_B <="00000000000000000000000000000001";
         wait for 40 ns;
		 
		 sig_Aluop <="0111";
		 sig_A <="00000000000000000000000111110101";
         sig_B <="00000000000000000000000111110101";
         wait for 40 ns;
		 
		 sig_Aluop <="1100";
		 sig_A <="00000000000011111010100111110101";
         sig_B <="00000000001011111010100111110101";
         wait for 40 ns;
		 
		 sig_Aluop <="0011";
		 sig_A <="00000000000011111010100111110101";
         sig_B <="00000000001011111010100111110101";
         wait for 40 ns;
		 
		 sig_Aluop <="0100";
		 sig_A <="00000000000011111010100111110101";
         sig_B <="00000000001011111010100111110101";
         wait for 40 ns;
		 
		 sig_Aluop <="1010";
		 sig_A <="00000000000011111010100111110101";
         sig_B <="00000000000011111010100111110101";
         wait for 40 ns;
		 
         wait;             
       
     end process estimulos;  
     
     t_DATA  <= sig_DATA;
     
  end testeULA;