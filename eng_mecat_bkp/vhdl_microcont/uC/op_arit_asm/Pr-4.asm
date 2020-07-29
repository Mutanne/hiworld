;fatoraçao com mult sucessivas
;so vale ate 5!.se fizer cressente,ate 6!  
org 0h				;
	mov R0,#06h		;valor da base
	mov A,R0		;LSB
	mov B,#0		;MSB
	dec R0			;
main:
	mov B,R0		;
	mul AB			;
	dec R0			;
	cjne R0,#0,main	;
	sjmp $			;
	
	

