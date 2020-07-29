;*************************************************************************************************
;								LABORATÓRIO: PWM - PULSE WIDH MODULATION																																								*
;						     
;*************************************************************************************************
; Este programa tem o objetivo de gerar 3 tipos de formas de onda PWM
; 10%, 20% e 50% de duty-cycle
; OBS.: Periodo de 25.000 us     Cristal de 12 MHz

TOTAL			EQU			25000		; TEMPO TOTAL DE 25 ms
ERRO			EQU			P1.6		;
LED10			EQU			P1.3		;
LED20			EQU			P1.4		;
LED50			EQU			P1.5		;
SAIDA			EQU			P1.7		;


				ORG			0000H		;
				LJMP		INICIO		;
				
				ORG			0040H		;
INICIO:
				MOV			TMOD,#01H	; TIMER 0 CONFIGURADO NO MODO 1 (16 BITS)
				MOV			TCON,#00H	; TIMER DESLIGADO
				SETB		LED10		;
				SETB		LED20		;
				SETB		LED50		;
				CLR			ERRO		;

LETECLA:
				MOV			A,P1		; LÊ PORT (TECLADO)
				ORL			A,#11111000B; MÁSCARA PARA OS BITS QUE INTERESSAM, DIPSWITCH
;***********************************************************************************************
;*		10% (HIGH)																																																																																														*
;*	_______________				90% (LOW)																																																																																						*
;*					__________________________________																																																																	*
;**********************************************************************************************

;GERE ESTE SINAL DURANTE 5 SEGUNDOS

				CJNE		A,#11111001B,VINTE			; CASO O CÓDIGO DO DIPSWITCH NÃO SEJA PARA GERAR 10% DESVIA PARA 20%
				MOV			R0,#200														; CONTADOR PARA 5 SEGUNDOS
				CLR			LED10
				SETB		ERRO

DEZ_POR_CENTO:																			;2500 us OU 2,5 ms EM ALTA
				MOV			TH0,#0A8H													; CARREGA TIMER 0 COM 22,5 ms
				MOV			TL0,#01BH													; EM BAIXO
				SETB		TR0															; LIGA TIMER 0
				CLR			SAIDA														;	PÕE SAÍDA EM ZERO

				JNB			TF0,$														; ESPERA OVERFLOW
				CLR			TR0															; DESLIGA TIMER
				CLR			TF0															; ZERA FLAG DE OVERFLOW

				MOV			TH0,#0F6H								 			; CARREGA TIMER 0 COM 2,5 ms
				MOV			TL0,#03BH													; EM ALTA
				SETB		TR0														 ; LIGA TIMER0
				SETB		SAIDA														; PÕE SAÍDA EM NÍVEL 1

				JNB			TF0,$														; ESPERA OVERFLOW DO TIMER
				CLR			TR0															; DESLIGA TIMER
				CLR			TF0															; ZERA FLAG DE OVERFLOR DO TIMER
				DJNZ		R0,DEZ_POR_CENTO						; FAZ ENSTA ONDA POR 5 SEGUNDOS
				SETB		LED10														; LIGA LED 10%
				CLR			ERRO														; DESLIGA LED DE ERRO

;**************************************************************************************************
;*	   20 %																																																																				 																																*
;*    ______________________           80%																																																					 																																				*
;*							_____________________________________												 																																								*
;**************************************************************************************************

;GERE ESTE SINAL POR 5 SEGUNDOS

VINTE:
				CJNE		A,#11111010B,CINQUENTA; 20 % DE DUTY-CYCLE
				MOV			R0,#200																	; CONTADOR PARA 50 SEGUNDOS
				CLR			LED20																		; APAGA LED20
				SETB		ERRO																		; LIGA LED DE ERRO

VINTE_POR_CENTO:
				MOV			TH0,#0B1H																; CARREGA TIMER 0 COM 20.000 us 
				MOV			TL0,#0DFH																; EM BAIXA
				SETB		TR0																		; LIGA TIMER 0
				CLR			SAIDA																	; PÕE SAINDA EM ZERO

				JNB			TF0,$																	; ESPERA OVERFLOW
				CLR			TR0																		; DESLOGA TIMER
				CLR			TF0																		; ZERA FLAG DE OVERFLOW

				MOV			TH0,#0ECH																; CARREGA TIMER 0 COM
				MOV			TL0,#077H																; 5000 us EM ALTA
				SETB		TR0																		; LIGA TIMER 0
				SETB		SAIDA																	; PÕE SAÍDA EM NÍVEL ALTO

				JNB			TF0,$																	; ESPERA OVERFLOW
				CLR			TR0																		; DESLIGA TIMER
				CLR			TF0																		; ZERA FLAG DE OVERFLOW DO TIMER
				DJNZ		R0,VINTE_POR_CENTO						;
				SETB		LED20
				CLR			ERRO

;***************************************************************************************************
;*					50%																																																																																																			*
;*		__________________________________                  50%																																																									*
;*                                        __________________________________________               *
;***************************************************************************************************

;GERE ESTE SINAL POR 5 SEGUNDOS

CINQUENTA:
			CJNE			A,#11111011B,FINAL								; 50% DE DUTY-CYCLE
			MOV				R0,#200																			; CONTADOR PARA 5 SEGUNDOS
			CLR				LED50
			SETB			ERRO

CINQUENTA_POR_CENTO:																								;12.500 us
			MOV				TH0,#0CFH																				; CARREGA TIMER 0 
			MOV				TL0,#02BH																				; 12,5 ms EM BAIXA

			SETB			TR0																						; LIGA TIMER 0
			CLR 			SAIDA																					; COLOCA SAIDA EM 0

			JNB				TF0,$																					; ESPERA OVERFLOW
			CLR				TR0																						; DESLIGA TIMER
			CLR				TF0																						; ZERA FLAG DE OVERFLOW

			MOV				TH0,#0CFH               ; CARREGA TIMER 0 
			MOV				TL0,#02BH																				; 12,5 ms EM BAIXA
			SETB			TR0																						; LIGA TIMER
			SETB			SAIDA																					; COLOCA SAIDA EM 1
			JNB				TF0,$																					; ESPERA OVERFLOW

			CLR				TR0																					; DESLIGA TIMER
			CLR				TF0																					; ZERA FLAG DE OVERFLOW
			DJNZ			R0,CINQUENTA_POR_CENTO ;
            SETB			LED50
            CLR             ERRO
FINAL:
			LJMP			LETECLA
			END
;OBS.: AS DIPSWITCHS DEVEM SER MODIFICADAS DENTRO DO TEMPO DE 5 SEGUNDOS DE GERAÇÃO DA ONDA PARA QUE
; NA PRÓXIMA LEITURA DE TECLADO, QUE IRÁ OCORRER APOS OS 5 SEGUNDOS, O MICRO GERE NOVA FORMA DE ONDA!

				

			
		

				





				
























