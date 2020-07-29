org 0h
leds EQU P3 ;porta dos leds
sw EQU P1	;porta dos botoes
mov P3,#0ffh
mov P1,#00h
;------Parte1(botoes: 001)------------
sw1:					;pisca de 4 em 4
	mov R0,sw
	cjne R0,#01h,sw2	;verifica botoes
	mov A,#0Fh
pisca:
	mov leds,A			;acende os leds
	call temp			;delay
	swap A				;alterna nibble
	mov R0,sw
	cjne R0,#01h,sw2	;verifica botoes 
	sjmp pisca
;------Parte2(botoes: 010)------------
sw2:				;acende e apaga de 1 em 1
	mov R0,sw		;
	cjne R0,#02h,sw3;verifica botoes
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
;------Parte3(botoes: 100)------------
sw3:					;alterna pares e impares
	mov R0,sw
	cjne R0,#04h,sw4	;verifica botoes
	mov A,#55h
alt:
	mov leds,A
	call temp
	RL A
	mov R0,sw
	cjne R0,#04h,sw4	;verifica botoes
	mov leds,A
	call temp
	RR A
	mov R0,sw
	cjne R0,#04h,sw4	;verifica botoes
	sjmp alt
;------Parte4(botoes: 101)------------
sw4:					;rotaciona à direita
	mov R0,sw
	cjne R0,#05h,sw5	;verifica botoes
	mov A,#07Fh
rdir:
	mov leds,A
	call temp
	RR A
	mov R0,sw
	cjne R0,#05h,sw5	;verifica botoes
	sjmp rdir
;------Parte5(botoes: 110)------------
sw5:					;rotaciona à esquerda
	mov R0,sw			;
	cjne R0,#06h,jto1	;verifica botoes
	mov A,#0FEh
resq:
	mov leds,A
	call temp
	RL A
	mov R0,sw
	cjne R0,#06h,jto1	;verifica botoes
	sjmp resq
;------Tempo------------
temp:	;delay de cerca de 100ms 
	mov R4,#0ffh
	mov R5,#0f0h
conta:	;conta 240 x 255
	djnz R4,conta
	mov R4,#255
	djnz R5,conta
	ret




