ORG 0000H        ;começa em zero
inicio:
	MOV A,#00H   ; carrega inicialmente A em zero
	MOV R0,#09H  ; carrega R0 com 9
	DJNZ R0,$    ; decremento R0, comparo com zero e se não for
                 ; zero,desvio para este mesmo ponto do software
	MOV A,#0FFH  ; se contagem chegou ao fim carrego A com FFh
	SJMP inicio  ; volta para o inicio
	END
