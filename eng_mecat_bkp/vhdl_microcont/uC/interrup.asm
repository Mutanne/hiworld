org 0h
org 03h
	setb p1.5
	reti
org 13h
	clr p1.5
	reti
inicio:
	mov tcon,#0ah
	mov ie,#85h
main:
	sjmp main