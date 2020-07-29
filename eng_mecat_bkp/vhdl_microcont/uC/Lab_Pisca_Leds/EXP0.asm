;*******************************************************************************************
;                  Experimento Pisca-Pisca e Sequência de Leds
;*******************************************************************************************

;LABEL		INSTRUÇÃO		OPERANDO					COMENTÁRIOS
TEMPO		EQU				15535						;define atraso de 50.000 us
VEZES		EQU				14H	          ; define o numero de vezes que TEMPO será 
													; multiplicado para cristal de 12MHz
												; 14h corresponde a 20 decimal: produzirá
 												; TEMPO = 1s, pois 50.000 us x 20 = 1 s


			ORG 			0000H			; define endereço inicial
			MOV 			TMOD,#01H 		; programa timer 0 no modo 1 (16bits)
			LJMP 			PRINCIPAL    ; pula para a rotina de inicio do programa

			ORG 			0040H		; define endereço inicial

;**************************************************************************************************
;									PROGRAMA PRINCIPAL
;**************************************************************************************************

PRINCIPAL:
			MOV 			R0,#0FFH	; carrega R0 com valor FFh

SEQUENCIA0:
			MOV				 A,#0F0H	; carrega 11110000 no acumulador

PISCA:

			MOV 			P3,A		; escreve no port 3
			LCALL 			ATRASO		; chama rotina de atraso
			SWAP			A			; troca os 4 bits mais sig. pelos 4 menos significativos
			MOV 			R0,p1		; lê teclado
			CJNE 			R0,#0FEH,PISCA ; verifica se S1 foi pressionada
															; se não, continua sequência pisca (vide esquema)
			LCALL 			SOLTATECLA		; se S1 foi pressionada, vá para rotina soltatecla

			; rotina de sequência de leds
			; faz com que um led acenda de cada vez em sequência
SEQUENCIA1:
			MOV 			R3,#80H			; valor (10000000)b para R3
LOOP2:
			MOV 			P3,R3			; move R3 para P3, isto fará com
											; que acenda o led que receberá o bit 1
										 ; os tres comandos abaixo farão com que no
										 ; registrador R3, que é nosso registrador de 
											; saída vá deslocando para direita o único bit 1
											; inserido nele
			MOV 			A,R3			; move R3 para o ACC
			RR 				A			 ; desloca o acumulador à direita
			MOV 			R3,A			; carrega R3 com o conteúdo de A
			LCALL 			ATRASO		 ; chama rotina de atraso
			MOV 			R0,P1		; lê teclado
			CJNE 			R0,#0FDH,LOOP2 ; fica em "loop" se não for pressionada a tecla S2
			LCALL 			SOLTATECLA	; se foi vá para "solta tecla"
			SJMP 			SEQUENCIA0	; retorne a sequencia "pisca"

;*****************************************************************************************************
;									SUB-ROTINAS
;*****************************************************************************************************
ATRASO:
			PUSH 			ACC			; salva valor do acumulador na pilha
			PUSH 			01H			; salva valor de R1 na pilha		
			MOV 			R1,#00H		; zera o conteúdo de R1

LOOP:
			MOV 			TH0,#HIGH(TEMPO); carrega THight e Tlow do timer 0 com 50000, já
			MOV 			TL0,#LOW(TEMPO)	; separados em High e Low
			SETB 			TR0			; liga timer 							
			JNB 			TF0,$		; Enquanto TF0-0 permanece aqui em "loop"
			MOV 			A,R1		; lê R1
			ADD 			A,#01H		; soma 1 ao ACC
			MOV 			R1,A		; escreve em R1
			CLR 			TR0			;	desliga timer
			CLR 			TF0			; reseta FLAG do timer 0
			CJNE 			R1,#14H,LOOP; faz com que o timer conte 20 vezes
			POP 			01H			; volta o valor armazenado para R1
			POP 			ACC			; volta o valor armazenado para ACC
			RET							; retorna da sub-rotina
;	RET

SOLTATECLA:
			MOV 			R0,P1		; lê teclado
			MOV 			TH0,#HIGH(65000); perde tempo para ler último estado da tecla
																; antes de soltar, para evitar problemas de 
																; "boucing" da tecla
			MOV 			TL0,#LOW(65000)
			SETB 			TR0									; liga timer0
			JNB 			TF0,$								;	enquanto TF0=0 permanece aqui
			CLR 			TR0									; desliga timer
			CLR 			TF0									; reseta FLAG do timer 0
			MOV 			R0,P1								; lê teclado
			CJNE 			R0,#0FFH,SOLTATECLA; enquanto tecla estiver apertada espera soltar
			RET													; retorna da subrotina
			END												 ; final do programa
