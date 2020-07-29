ORG 0000H       	; Inicia em 0
	MOV R0,#00H 	; Movo para o R0 do banco B0 o valor 00h
                	; note que pelo reset o banco já é B0
	MOV PSW,#00001000b	; movo para o PSW "0 e 1" para os bits
                    ; RS1 e RS0, selecionando o banco B1
	MOV PSW,#08H    ; mesma instrução acima porém com valores em hexa
	MOV R0,#01H     ; Movo para R0 do banco B1 o valor 01H
	SETB RS1        ; Faço diretamente o bit RS1 = 1. Com o bit RS0 =1
                    ; teremos agora os dois bits em 1, logo selecionamos o banco B3
	MOV R0,#03H     ; movo então o valor 03h para o reg R0 do B3
	
;Verificar se realmente os dados foram para os bancos B0,B1 e B3

	MOV PSW,#00h;
    MOV A,R0;

    MOV PSW,#00001000b
    MOV A,R0;

    MOV PSW,#00011000b
	MOV A,R0;

    END