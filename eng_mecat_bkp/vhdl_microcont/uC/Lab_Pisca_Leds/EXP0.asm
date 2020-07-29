;*******************************************************************************************
;                  Experimento Pisca-Pisca e Sequ�ncia de Leds
;*******************************************************************************************

;LABEL		INSTRU��O		OPERANDO					COMENT�RIOS
TEMPO		EQU				15535						;define atraso de 50.000 us
VEZES		EQU				14H	          ; define o numero de vezes que TEMPO ser� 
													; multiplicado para cristal de 12MHz
												; 14h corresponde a 20 decimal: produzir�
 												; TEMPO = 1s, pois 50.000 us x 20 = 1 s


			ORG 			0000H			; define endere�o inicial
			MOV 			TMOD,#01H 		; programa timer 0 no modo 1 (16bits)
			LJMP 			PRINCIPAL    ; pula para a rotina de inicio do programa

			ORG 			0040H		; define endere�o inicial

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
			MOV 			R0,p1		; l� teclado
			CJNE 			R0,#0FEH,PISCA ; verifica se S1 foi pressionada
															; se n�o, continua sequ�ncia pisca (vide esquema)
			LCALL 			SOLTATECLA		; se S1 foi pressionada, v� para rotina soltatecla

			; rotina de sequ�ncia de leds
			; faz com que um led acenda de cada vez em sequ�ncia
SEQUENCIA1:
			MOV 			R3,#80H			; valor (10000000)b para R3
LOOP2:
			MOV 			P3,R3			; move R3 para P3, isto far� com
											; que acenda o led que receber� o bit 1
										 ; os tres comandos abaixo far�o com que no
										 ; registrador R3, que � nosso registrador de 
											; sa�da v� deslocando para direita o �nico bit 1
											; inserido nele
			MOV 			A,R3			; move R3 para o ACC
			RR 				A			 ; desloca o acumulador � direita
			MOV 			R3,A			; carrega R3 com o conte�do de A
			LCALL 			ATRASO		 ; chama rotina de atraso
			MOV 			R0,P1		; l� teclado
			CJNE 			R0,#0FDH,LOOP2 ; fica em "loop" se n�o for pressionada a tecla S2
			LCALL 			SOLTATECLA	; se foi v� para "solta tecla"
			SJMP 			SEQUENCIA0	; retorne a sequencia "pisca"

;*****************************************************************************************************
;									SUB-ROTINAS
;*****************************************************************************************************
ATRASO:
			PUSH 			ACC			; salva valor do acumulador na pilha
			PUSH 			01H			; salva valor de R1 na pilha		
			MOV 			R1,#00H		; zera o conte�do de R1

LOOP:
			MOV 			TH0,#HIGH(TEMPO); carrega THight e Tlow do timer 0 com 50000, j�
			MOV 			TL0,#LOW(TEMPO)	; separados em High e Low
			SETB 			TR0			; liga timer 							
			JNB 			TF0,$		; Enquanto TF0-0 permanece aqui em "loop"
			MOV 			A,R1		; l� R1
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
			MOV 			R0,P1		; l� teclado
			MOV 			TH0,#HIGH(65000); perde tempo para ler �ltimo estado da tecla
																; antes de soltar, para evitar problemas de 
																; "boucing" da tecla
			MOV 			TL0,#LOW(65000)
			SETB 			TR0									; liga timer0
			JNB 			TF0,$								;	enquanto TF0=0 permanece aqui
			CLR 			TR0									; desliga timer
			CLR 			TF0									; reseta FLAG do timer 0
			MOV 			R0,P1								; l� teclado
			CJNE 			R0,#0FFH,SOLTATECLA; enquanto tecla estiver apertada espera soltar
			RET													; retorna da subrotina
			END												 ; final do programa
