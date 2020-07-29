;Laboratório Display de 7 Segmentos

;LABEL		OPERANDO 		OPERAÇÃO				COMENTÁRIOS
			ORG 			00h
			MOV 			P3,#00H; Configura porta como saída
			MOV				 R0,#0FFH; Armazena #0ffh em R0
    

;Rotina de Leitua de Palavra de Entrada
ciclo1:
			MOV				 A,P1; Leitura do Porte 1
			CJNE 			 A,0FFH,ciclo2; se a entrada atual for diferente da anterior, vá para o ciclo2 (00h = R0)
			SJMP 			 ciclo1; caso contrário vá para o ciclo 1

ciclo2:
			MOV 			R0,A; armazena entrada atual em R0
			SJMP 			carac_1; vá para carac_0

;Rotina de Varredura de caractere a ser Mostrado
carac_1:
			CJNE 			A,#0FEH,carac_2;Se a palavra de entrada diferente de 01 vá para caract2
			MOV  			P3,#01H; mostra caractere 1 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_2:
			CJNE 			A,#0FDH,carac_3;Se a palavra de entrada diferente de 02 vá para caract2
			MOV  			P3,#02H; mostra caractere 2 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_3:
			CJNE 			A,#0FBH,carac_4; Se a palavra de entrada diferente de 04 vá para caract2
			MOV  			P3,#03H ; mostra caractere 3 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_4:
			CJNE 			A,#0F7H,carac_5; Se a palavra de entrada diferente de 08 vá para caract2
			MOV  			P3,#04H; mostra caractere 4 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_5:
			CJNE 			A,#0EFH,carac_6; Se a palavra de entrada diferente de 10 vá para caract2
			MOV  			P3,#05H; mostra caractere 5 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_6:
			CJNE 			A,#0DFH,carac_7; Se a palavra de entrada diferente de 20 vá para caract2
			MOV  			P3,#06H; mostra caractere 6 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_7:
			CJNE 			A,#0BFH,carac_8; Se a palavra de entrada diferente de 40 vá para caract2
			MOV  			P3,#07H; mostra caractere 7 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_8:
			CJNE 			A,#7FH,pulo; Se a palavra de entrada diferente de 80 vá para label pulo
			MOV  			P3,#08H; mostra caractere 8 no display
pulo:
			SJMP 			ciclo1; volta para a rotina de leitura
			END
