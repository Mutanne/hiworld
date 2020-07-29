;**********************************************************************************************
;									LABORATÓRIO DEBOUNCING																																																										*
;**********************************************************************************************

;LABEL			INSTRUÇÃO			OPERANDO																					COMENTÁRIOS
;TABELA DE EQU'S

TECLA1			EQU					P1.0																										;0090H
TECLA2			EQU					P1.1																										;0091H
TECLA3			EQU					P1.2																										;0092H
TECLA4			EQU					P1.3																										;0093H
TECLA5			EQU					P1.4																										;0094H
TECLA6			EQU					P1.5																										;0095H
TECLA7			EQU					P1.6																										;0096H
TECLA8			EQU					P1.7																										;0097H

LED1			EQU					P3.0																										;0B0H
LED2			EQU					P3.1																										;0B0H
LED3			EQU					P3.2																										;0B0H
LED4			EQU					P3.3																										;0B0H
LED5			EQU					P3.4																										;0B0H
LED6			EQU					P3.5																										;0B0H
LED7			EQU					P3.6																										;0B0H
LED8			EQU					P3.7																										;0B0H


;ROTINA DE INICALIZAÇÃO
				MOV					P3,#00H																						; APAGA TODOS OS LEDS
;ROTINA DE LEITURA DAS TECLAS
CICLO1:
				MOV					A,P1																										; MOVE O QUE ESTÁ EM P1 PARA ACC
				CJNE				A,#0FFH,LETECLA1							; VERIFICA SE ALGUMA TECLA FOI PRESSIONADA
				SJMP				CICLO1																							; SE NÃO, VOLTE AO CICLO1

;ROTINA DE VARREDURA DE TECLAS
LETECLA1:
				JB					TECLA1,LETECLA2								; VERIFICA SE (IF) TECLA 1 FOI PRECIONADA SENÃO (ELSE) VERIFICA TECLA 2
				MOV					P3,#00000001B											; SE FOI ACENDE LED 1
				LCALL				ESPSOL																						; CHAMA ROTINA DE SOLTA TECLA
				SJMP				CICLO1																						; RETORNA A ROTINA INICIAL

LETECLA2:
				JB					TECLA2,LETECLA3								;	VERIFICA SE A TECLA 2 FOI PRESSIONADA
				MOV					P3, #00000010B									; SE FOI ACIONA LED 2
				LCALL				ESPSOL																						; CHAMA ROTINA DE SOLTA TECLA
				SJMP				CICLO1																						; RETORNA A ROTINA INICIAL
LETECLA3:
				JB					TECLA3, LETECLA4					; VERIFICA SE A TECLA 3 FOI PRESSIONADA
				MOV					P3,#00000100B										; SE FOI ACENDE LED 3
				LCALL				ESPSOL																					; CHAMA ROTINA DE SOLTA TECLA
				SJMP				CICLO1																					; RETORNA À ROTINA INICIAL

LETECLA4:
				;JB					TECLA4, LETECLA5					; VERIFICA SE A TECLA 4 FOI PRESSIONADA
				JB					TECLA4, CICLO1					; VERIFICA SE A TECLA 4 FOI PRESSIONADA
				MOV					P3,#00001000B									 ;	SE FOI ACENDE LED 4
				LCALL				ESPSOL																						; CHAMA ROTINA DE SOLTA TECLA
				SJMP				CICLO1																					; RETORNA A ROTINA INICIAL

LETECLA5:
				JB					TECLA5, LETECLA6					; VERIFICA SE A TECLA 5 FOI PRESSIONADA
				MOV					P3,#00010000B									 ; SE FOI ACENDE LED 5
				LCALL				ESPSOL																						; CHAMA ROTINA DE SOLTA TECLA
				SJMP				CICLO1																						; RETORNA A ROTINA INICIAL

LETECLA6:
				JB					TECLA6, LETECLA7    ; VERIFICA SE A TECLA 6 FOI PRESSIONADA
				MOV					P3, #00100000B									; SE FOI ACENDE LED 6
				LCALL				ESPSOL																						; CHAMA ROTINA DE SOLTA TECLA
				SJMP				CICLO1																						; RETORNA A ROTINA INICIAL

LETECLA7:
				JB					TECLA7, LETECLA8					; VERIFICA SE A TECLA 7 FOI PRESSIONADA
				MOV					P3, #01000000B								; SE FOI ACENDE LED 7
				LCALL				ESPSOL																					; CHAMA ROTINA DE SOLTA TECLA
				SJMP				CICLO1																					; RETORNA A ROTINA INICIAL

LETECLA8:
				JB					TECLA8, CICLO1								; VERIFICA SE A TECLA 8 FOI PRESSIONADA
				MOV					P3, #10000000B								; SE FOI ACENDE LED 8
				LCALL				ESPSOL																					; CHAMA ROTINICA DE SOLTA TECLA
				SJMP				CICLO1																					; RETORNA A ROTINA INICIAL

;ROTINA DE SOLTA TECLA

ESPSOL:
				MOV					A,P1																								; LE PORT P1
				CJNE				A,#255, ESPSOL								; SE ALGUMA TECLA PRESSIONADA ESPERA SOLTAR

;ROTINA DE DEBOUNCING
				MOV					TMOD, #01H														; HABILITA TIMER0 NO MODO 1
				MOV					TH0,#HIGH(35535)					; MOVE A PARTE ALTA PARA TH0
				MOV					TL0,#LOW(35535)    ; MOVE A PARTE BAIXA PARA TH1
				
				SETB				TR0																									; LIGA TIMER 0
				JNB					TF0,$																							; ESPERA ACABAR A CONTAGEM DO TIMER
				CLR					TR0																									; DESLIGA TIMER
				CLR					TF0																									; RESETA FLAG DO TIMER 0
                RET																														; RETORNO DA SUBROTINA DE VARREDURA
				END																														; FINAL DO PROGRAMA

