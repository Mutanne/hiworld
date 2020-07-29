org 0Ah
leds EQU P3 ;porta com os leds
sw EQU P1	;porta com as chaves
mov sw,#00h ;reseta a porta P1
;-----parte1----------------
sw1:
	mov A,sw
	cjne A,#01h,sw2
	mov A,#0fh
sw1_1:
	swap A
	mov leds,A
	mov R0,sw
	cjne R0,#01h,sw2
	sjmp sw1_1
;-----parte2----------------
sw2:
	org 00h
	db 0,80h,0C0h,0E0h,0F0h,0F8h,0FCh,0FEh,0FFh
	org 1Fh
	mov R0,#0h
acende:
	mov A,sw
	mov leds,@R0
	cjne A,#02h,sw3
	inc R0
	cjne R0,#09h,acende
	dec R0
apaga:
	mov A,sw	
	mov leds,@R0
	cjne A,#02h,sw3
	djnz R0,apaga
	jmp acende
;-----parte3----------------
sw3:
	mov A,#55h
alt:
	mov R0,sw
	cjne R0,#04h,sw4
	mov leds,A
	rl A
	mov leds,A
	rr A
	sjmp alt
;-----parte4----------------
sw4:
	mov R0,sw
	cjne R0,#05h,sw5
	mov a,#80h
roda_dir:
	mov R0,sw
	cjne R0,#05h,sw5
	mov leds,A
	rr a
	sjmp roda_dir
;-----parte5----------------
sw5:
	mov R0,sw
	cjne R0,#06h,sw1
	mov a,#01h
roda_esq:
	mov R0,sw
	cjne R0,#06h,sw1
	mov leds,A
	rl a
	sjmp roda_esq







	


