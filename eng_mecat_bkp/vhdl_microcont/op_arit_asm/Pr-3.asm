;potenciaçao com mult sucessivas
;so vale para resultados em 8 bits
org 0h				;
	mov R0,#05h		;valor da base
	mov R1,#04h		;valor da potencia
	dec R1			;decremento r1 por culpa do DJNZ
	mov A,R0		;LSB
	mov B,#0		;MSB

	cjne R1,#0h,main;testa se pot e 0 
	mov A,#01 		;se R1=0, ACC=1
	sjmp $			;fim do programa

	cjne R1,#01,main;testa se pot e 1
	sjmp $			;fim do programa ACC ja e = a R0
main:
	mov B,R0		;poe o valor de R0 em B(B=ACC)
	mul AB			;multiplica
	djnz R1,main	;volta enquanto (R1-1)!=0
	sjmp $			;fim do programa
	
	

