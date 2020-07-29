;LABEL		INSTRUÇÃO		OPERANDO			COMENTÁRIOS
			ORG				0000H				;o programa inicia na linha 0000H da EPRON
			MOV				P2,#00H				;move o valor 00H para Porta P2
PRINCIPAL:
			CLR				P2.0				;zera a porta P2.0
			LCALL			TEMPO				;chama sub-rotina de tempo

			SETB			P2.0				;complementa a Porta P2.0
			LCALL			TEMPO				;chama sub-rotina de tempo

			LJMP			PRINCIPAL			;desvio incondicional para label PRINCIPAL

;rotina de tempo
TEMPO:
			MOV				R6,#255				;move valor 255 decimal para reg. R6
			MOV				R5,#150			;move valor 150 decimal para reg. R5
TEMPO1:
			DJNZ			R6,TEMPO1			;decrementa R6 de 1 e enquanto não for zero
												;retorna para label Tempo 1
			MOV				R6,#255				;move o valor 255 decimal para registrador R6
			DJNZ			R5,TEMPO1			;decrementa R5 de uma unidade e se for zero
												;retorna da sub-rotina
			RET									;retorno de sub-rotina