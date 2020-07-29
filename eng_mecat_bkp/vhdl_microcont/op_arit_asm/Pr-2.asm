;divisao R0/R1 por subtraçoes sucetivas
	org 0h			;
	mov R0,#0fh		;valor A que sera dividido por B
	mov R1,#03h		;valor B
	mov R3,#00h		;R3=0
	mov R2,#00h		;R2=0
	mov A,R0		;move o valor de R0 para o ACC
VOLTA:
	subb A,R1		;calcula A-B e salva em A(ACC)
	jc FIM			;se carry=1 vai para FIM
	mov R2,A		;ACC recebe result da ultima div
	inc R3			;qtdade de subtraçoes
	sjmp VOLTA		;retorna ao inicio enquanto jc = falso
FIM:
	mov A,R3		;faz ACC =R3
	jz SEM_DIVI		;se ACC = 0, vai p SEM_DIVI,n foi possivel dividir.
	mov B,R2		;salva resto da div no reg B
	sjmp $			;loop infinito nessa linha(fim do prog)
SEM_DIVI:
	mov A,R0		;faz ACC=R0
	mov B,R1		;faz B=R1
	sjmp $			;fim do prog