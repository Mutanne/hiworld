zero	 EQU    00h ; EQUATE � o mesmo que escrever zero ou 00
somador  EQU    0E0h; Somador � o endere�o de A, � o mesmo que A
porta1   EQU    p1  ; Porta 1 � o mesmo que port P1

ORG 0000H           ; come�a em zero
	MOV somador,#zero;escrevi o valor 00h no somador (=A)
volta:
	INC somador      ; incrementa A por 1
	MOV porta1,somador;movo o valor de A para P1
	SJMP volta       ; retorno o software para a posi��o com nome "volta"
	END
