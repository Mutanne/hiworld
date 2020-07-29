;soma dois numeros de 16 bits 
org 0h			;
MOV R0,#0ffh	;LSB numero 1
MOV R1,#0ffh	;MSB numero 1
MOV R2,#0ffh	;LSB numero 2
MOV R3,#0ffh	;MSB numero 2

main:
	MOV A,R0	;move R0 p ACC para somar
	ADD A,R2	;soma e salva no ACC
	MOV R4,A	;salva LSB da soma no R4
	MOV A,R1	;move R1 p ACC para somar
	ADDC A,R3	;
	MOV R5,A	;salva MSB da soma no R4
	jc fim		;se carry=1 vai p fim
	sjmp $		;
fim:
	MOV R6,#01	;
	sjmp $		;
	