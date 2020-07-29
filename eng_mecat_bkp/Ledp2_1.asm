org 0h
leds EQU P2 ;porta dos leds
sw EQU P1	;porta dos botoes
mov P2,#0ffh
mov P1,#00h
;------Parte1------------
sw1:
	mov R0,sw
	cjne R0,#01h,sw2
	mov A,#0Fh
pisca:
	mov leds,A
	call temp
	swap A
	mov R0,sw
	cjne R0,#01h,sw2
	sjmp pisca
;------Parte2------------
sw2:
	mov R0,sw
	cjne R0,#02h,sw3
	mov leds,#0FFh  ;apaga tudo
	call temp
	mov leds,#07Fh	;acende de 1 em 1
	call temp
	mov leds,#3Fh	;
	call temp	
	mov leds,#1Fh	;
	call temp
	mov leds,#0Fh	;
	call temp
	mov leds,#07h	;
	call temp
	mov leds,#03h	;
	call temp
	mov leds,#01h	;
	call temp
	mov leds,#00h	;todos acesos
	call temp
	mov leds,#01h	;apaga de 1 em 1
	call temp
	mov leds,#03h	;na sequencia reversa
	call temp
	mov leds,#07h	;
	call temp
	mov leds,#0Fh	;
	call temp
	mov leds,#1Fh	;
	call temp
	mov leds,#3Fh	;
	call temp
	mov leds,#07Fh	;
	call temp
	jmp sw2
;------ponte------------
jto1:	;ponte para ir do sw5 para o sw1
	jmp sw1 
;------Parte3------------
sw3:
	mov R0,sw
	cjne R0,#04h,sw4
	mov A,#55h
alt:
	mov leds,A
	call temp
	RL A
	mov R0,sw
	cjne R0,#04h,sw4
	mov leds,A
	call temp
	RR A
	mov R0,sw
	cjne R0,#04h,sw4
	sjmp alt
;------Parte4------------
sw4:
	mov R0,sw
	cjne R0,#05h,sw5
	mov A,#7Fh
rdir:
	mov leds,A
	call temp
	RR A
	mov R0,sw
	cjne R0,#05h,sw5
	sjmp rdir
;------Parte5------------
sw5:
	mov R0,sw
	cjne R0,#06h,jto1
	mov A,#0FEh
resq:
	mov leds,A
	call temp
	RL A
	mov R0,sw
	cjne R0,#06h,jto1
	sjmp resq
;------Tempo------------
temp:
	mov R4,#0ffh
	mov R5,#0f0h
conta:
	djnz R4,conta
	mov R4,#255
	djnz R5,conta
	ret




