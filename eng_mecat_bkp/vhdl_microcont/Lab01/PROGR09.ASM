ORG 0000H        ; começa em zero

inicio:
	MOV A,#0FFH  ; carrega Acc com FFh
	LCALL compl  ; chama rotina de complementar o
                 ; acumulador
	SJMP inicio  ; volta para o inicio
;____________Sub-rotina de complementação do A___________

compl:
	CPL A        ; complementa o valor de A
	RET          ; retorna no programa principal
	END
