	ORG 0000H; começa em 0h

INICIO:
	MOV A,p1; Leio o que está no P1 e guardo em A
	MOV R0,#00h; Movo 0 para o registrador do Banco 0 R0
VOLTA:
	INC R0; Incremento R0 por 1
	CJNE A,00H,VOLTA; Comparo R0 com A: enquanto forem diferentes,
                    ; incremento R0 até que R0=A, então saio do loop
                    ; e movo o conteúdo de R0 para P3. Esta instrução
                    ; só aceita o endereço absoluto de R0, que é 00H.

	MOV P3,R0       ; movo o conteúdo de R0 para P3
	SJMP INICIO       ; Volto para início
	END
