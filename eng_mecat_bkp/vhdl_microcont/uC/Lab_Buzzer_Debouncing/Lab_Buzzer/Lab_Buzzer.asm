;*******************************************************************************************************************************************************
;																		LABORATÓRIO - BUZZER
;*******************************************************************************************************************************************************

;LABEL			INSTRUÇÃO		OPERANDO																COMENTÁRIOS
TEMPO			EQU				15535																; TEMPO DE 50.000 uS
VEZES			EQU				20	 															; QUANTIDADE DE VEZES QUE VAI REPETIR 20X50.000 uS = 1s


				ORG 			0000H																; INICIO DO PROGRAMA
				LJMP 			INICIO																; DESVIO INCONDICIONAL PARA INICIO DO PROGRAMA
;VETOR DE INICIO DA INTERRUPÇÃO EXTERNA 0
				ORG				0003H																;
				LJMP 			ALARME																; DESVIO INCONDICIONAL PARA TRATAR SUBROTINA DE ATENDIMENTO A INTERRUPÇÃO
;VETOR DE INICO DA INTERRUPÇÃO TIMER 0
				ORG				000BH;

;VETOR DE INICIO DA INTERRUPÇÃO EXTERNA 1
				ORG				0013H

;VETOR DE INICIO DA INTERRUPÇÃO TIMER 1
				ORG				001BH

;VETOR DE INICIO DA INTERRUPÇÃO DA SERIAL
				ORG				0023H

;INICIO DO PROGRAMA PRINCIPAL
				ORG 			0040H																;
INICIO:
				MOV 			TCON,#00H														; DESLIGA TODOS OS TIMERS
				MOV 			TMOD,#01H														; TIMER 0 NO MODO 1
				MOV 			A,#00H																; INICIA ACC COM 0H
				MOV 			IE,#81H																;		HABILITA INTERRUPÇÃO 0
DESLIGA:
				CLR 			P1.0																; DESLIGA BUZZER
PROXIMO:
				CJNE 			A,#00001100B,DIRETO; BUZZER DE 1 EM 1 SEGUNDOS
DE_1_EM_1:
				MOV 			R0,#VEZES													; CARREGA R0 COM 20 DECIMAL
VEZ:
				MOV 			TH0,#HIGH(TEMPO)  ; CARREGA TIMER COM 50.000 uS QUE 20 VEZES
				MOV 			TL0,#LOW(TEMPO)   ; RESULTARÁ EM 1 SEGUNDO

				SETB 			TR0																		; LIGA TIMER 0
				CLR 			P1.0																	; DESLIGA BUZZER
				JNB 			TF0,$																	; ESPERA TIMER ESTOURAR
				CLR 			TR0																		; DESLIGA TIMER 0
				CLR 			TF0																		; RESETA FLAG 0
				DJNZ 			R0,VEZ																	; CONTROLE DE LOOP REPETIR 20X

				MOV 			R0,#VEZES														; CARREGA NOVAMENTE R0 COM O VALOR 20 DECIMAL
VEZ2:
				MOV 			TH0,#HIGH(TEMPO)			; CARREGA TIMER COM 50.000 uS QUE 20 VEZES
				MOV 			TL0,#LOW(TEMPO)   ; RESULTARÁ EM 1 SEGUNDO
				SETB 			TR0																		; LIGA TIMER 0
				SETB 			P1.0																	; LIGA BUZZER 
				JNB 			TF0,$																	; ESPERA TIMER ESTOURAR
				CLR 			TR0																		; DESLIGA TIMER 0
				CLR 			TF0																		; RESETA FLAG 0
				DJNZ			R0,VEZ2																	; CONTROLE DE LOOP 20X
				CJNE 			A,#00001100B,DIRETO; VERIFICA SE A PALAVRA FOI MODIFICADA
				LJMP 			DE_1_EM_1														; DESVIO INCONDICIONAL PARA LOOP DE_1_em_1
DIRETO:
				CJNE			A,#00001110,PROXIMO; VERIFICA SE A PALAVRA FOI MODIFICADA
				CLR 			P1.0																	; DESLIGA BUZZER
				LJMP 			PROXIMO																	; DESVIO INCONDICIONAL PARA LOOP PROXIMO
;ROTINA DE ATENDIMENTO A INTERRUPÇÃO EXTERNA 0
;LE PORTA 1 E GUARDA NO ACC
ALARME:
				MOV 			A,P1																	; LÊ O PORT P1
				ANL 			A,#0EH																	; MÁSCARA PARA OS BITS QUE NOS INTERESSAM NA LEITURA DOS DIPs
				RETI																					; RETORNO DA SUBROTINA
				END																						; FIM DO PROGRAMA
