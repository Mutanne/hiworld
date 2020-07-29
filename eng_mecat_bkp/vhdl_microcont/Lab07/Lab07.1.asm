;Laborat�rio Display de 7 Segmentos

;LABEL		OPERANDO 		OPERA��O				COMENT�RIOS
			ORG 			00h
			MOV 			P3,#03FH; Configura porta como sa�da
			MOV				 R0,#0FFH; Armazena #0ffh em R0
    

;Rotina de Leitua de Palavra de Entrada
ciclo1:
			MOV				 A,P1												; Leitura do Porte 1
			CJNE 			 A,0FFH,ciclo2							; se a entrada atual for diferente da anterior, v� para o ciclo2 (00h = R0)
			lJMP 			 ciclo1								   ; caso contr�rio v� para o ciclo 1

ciclo2:
			MOV 			R0,A													; armazena entrada atual em R0
			SJMP 			carac_1													; v� para carac_0

;Rotina de Varredura de caractere a ser Mostrado
carac_1:
			CJNE 			A,#0FEH,carac_2    ;Se a palavra de entrada diferente de 01 v� para caract2
			MOV  			P3,#06H            ; mostra caractere 1 no display
			SJMP 			ciclo1             ; volta para a rotina de leitura

carac_2:
			CJNE 			A,#0FDH,carac_3							;Se a palavra de entrada diferente de 02 v� para caract2
			MOV  			P3,#5BH            ; mostra caractere 2 no display
			SJMP 			ciclo1             ; volta para a rotina de leitura

carac_3:
			CJNE 			A,#0FCH,carac_4; Se a palavra de entrada diferente de 04 v� para caract2
			MOV  			P3,#04FH ; mostra caractere 3 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_4:
			CJNE 			A,#0FBH,carac_5; Se a palavra de entrada diferente de 08 v� para caract2
			MOV  			P3,#066H; mostra caractere 4 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_5:
			CJNE 			A,#0FAH,carac_6; Se a palavra de entrada diferente de 10 v� para caract2
			MOV  			P3,#06DH; mostra caractere 5 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_6:
			CJNE 			A,#0F9H,carac_7; Se a palavra de entrada diferente de 20 v� para caract2
			MOV  			P3,#07DH; mostra caractere 6 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_7:
			CJNE 			A,#0F8H,carac_8; Se a palavra de entrada diferente de 40 v� para caract2
			MOV  			P3,#07H; mostra caractere 7 no display
			SJMP 			ciclo1; volta para a rotina de leitura

carac_8:
			CJNE 			A,#0F7H,carac_9; Se a palavra de entrada diferente de 80 v� para label pulo
			MOV  			P3,#07FH; mostra caractere 8 no display
        	SJMP 			ciclo1; volta para a rotina de leitura
carac_9:
			CJNE 			A,#0F6H,carac_10; Se a palavra de entrada diferente de 40 v� para caract2
			MOV  			P3,#06FH; mostra caractere 7 no display
			SJMP 			ciclo1; volta para a rotina de leitura
carac_10:
			CJNE 			A,#0F5H,carac_11; Se a palavra de entrada diferente de 40 v� para caract2
			MOV  			P3,#077H; mostra caractere 7 no display
			SJMP 			ciclo1; volta para a rotina de leitura
carac_11:
			CJNE 			A,#0F4H,carac_12; Se a palavra de entrada diferente de 40 v� para caract2
			MOV  			P3,#07CH; mostra caractere 7 no display
			SJMP 			ciclo1; volta para a rotina de leitura
carac_12:
			CJNE 			A,#0F3H,carac_13; Se a palavra de entrada diferente de 40 v� para caract2
			MOV  			P3,#039H; mostra caractere 7 no display
			SJMP 			ciclo1; volta para a rotina de leitura
carac_13:
			CJNE 			A,#0F2H,carac_14; Se a palavra de entrada diferente de 40 v� para caract2
			MOV  			P3,#05EH; mostra caractere 7 no display
			SJMP 			ciclo1; volta para a rotina de leitura
carac_14:
			CJNE 			A,#0F1H,carac_15; Se a palavra de entrada diferente de 40 v� para caract2
			MOV  			P3,#079H; mostra caractere 7 no display
			SJMP 			ciclo1; volta para a rotina de leitura
carac_15:
			CJNE 			A,#0F0H,pulo; Se a palavra de entrada diferente de 40 v� para caract2
			MOV  			P3,#071H; mostra caractere 7 no display

pulo:
			lJMP 			ciclo1; volta para a rotina de leitura
			END
