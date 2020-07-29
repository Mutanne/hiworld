;*************************************************************************************************
;								LABORATÓRIO: MOTOR DE PASSO ( STEP MOTOR)																																								*
;						     MOTORES DE PASSO CONTROLADOS A MICROCONTROLADOR
;*************************************************************************************************
; Este programa tem o objetivo de controlar um motor de passo.
; A rotação do motor é determinada pelo EQUATE TEMPO

;LABEL			INSTRUÇÃO			OPERANDO															COMENTÁRIOS
TEMPO			EQU					15535																			; 65535 - 15535 = 50000 * 5 = 250ms
SEQUENCIA		EQU					070H

				ORG					0000H																			; INICIO DO PROGRAMA
				LJMP				INICIO																	; DESVIO INCONDICINAL PARA LABEL INICIO

				ORG					0030H																		;
INICIO:
				MOV					TMOD,#10H											; TIMER 1 NO MODO 1 (CONTAGEM EM 16 BITS)
				MOV					DPTR,#SEQUENCIA ; CARREGA ENDEREÇO DO APONTADOR
				
ROTACAO:
				MOV					R0,#07H															;	ZERA CONTADOR
				MOV					A,R0																				;
VOLTA:
				MOVC				A,@A+DPTR												; LÊ A PALAVRA A SER ENVIADA AO MOTOR
				MOV					P1,A																				; ESCREVE EM P1, ISTO É, GIRA O MOTOR
				LCALL				ATRASO																	;CHAMA SUB-ROTINA DE ATRASO
				dec					R0																					; INCREMENTA CONTADOR
				MOV					A,R0																				; RESTAURA CONTADOR
				CJNE				R0,#-1,VOLTA						; SE < QUE 4 CONTINUA SEQUÊNCIA
				AJMP				ROTACAO														; DESVIO PARA ROTAÇÃO

;SUBROTINAS

ATRASO:
				MOV					R1,#05H															; MOVE O VALOR 05 PARA REGISTRADOR R1
VEZ:
				CLR					TR1																					; PARA O TIMER 1
				CLR					TF1																					; ZERA FLAG DE ESTOURO DO TIMER
				MOV					TH1,#HIGH(TEMPO); CARREGA PARTE ALTA DO TIMER 
				MOV					TL1,#LOW(TEMPO) ; CARREGA PARTE BAIXA DO TIMER
				SETB				TR1																				; LIGA TIMER
				JNB					TF1,$																		; AGUARDA ATÉ TIMER ESTOURAR
				DJNZ				R1,VEZ																; REPERE O LOOP 5 VEZES
				CLR					TR1																				; PARA O TIMER
				CLR					TF1																				; ZERA FLAG DE ESTOURO DO TIMER
				RET																									; RETORNA DA SUBROTINA

;TABELA NA MEMÓRIA DE PROGRAMA COM AS CONSTANTES PARA SER ENVIADA AO MOTOR DE PASSO
                ORG					070H
				DB					03H,01h,09H,08h,0CH,04h,06H,02h
				END				


