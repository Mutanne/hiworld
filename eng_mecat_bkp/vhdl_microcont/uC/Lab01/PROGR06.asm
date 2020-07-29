zero	 EQU    00h ; EQUATE é o mesmo que escrever zero ou 00
somador  EQU    0E0h; Somador é o endereço de A, é o mesmo que A
porta1   EQU    p1  ; Porta 1 é o mesmo que port P1

ORG 0000H           ; começa em zero
	MOV somador,#zero;escrevi o valor 00h no somador (=A)
volta:
	INC somador      ; incrementa A por 1
	MOV porta1,somador;movo o valor de A para P1
	SJMP volta       ; retorno o software para a posição com nome "volta"
	END
