	ORG 0000H; come�a em 0h

INICIO:
	MOV A,p1; Leio o que est� no P1 e guardo em A
	MOV R0,#00h; Movo 0 para o registrador do Banco 0 R0
VOLTA:
	INC R0; Incremento R0 por 1
	CJNE A,00H,VOLTA; Comparo R0 com A: enquanto forem diferentes,
                    ; incremento R0 at� que R0=A, ent�o saio do loop
                    ; e movo o conte�do de R0 para P3. Esta instru��o
                    ; s� aceita o endere�o absoluto de R0, que � 00H.

	MOV P3,R0       ; movo o conte�do de R0 para P3
	SJMP INICIO       ; Volto para in�cio
	END
