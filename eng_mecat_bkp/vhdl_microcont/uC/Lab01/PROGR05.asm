ORG 0000H            ; começa em 0
	MOV DPTR, #0010H ; escrevi o valor 0010h no registrador DPTR
	MOV A,#00H       ; carrega o ACC com zero
	JMP @A+DPTR      ; vou desviar o PC para DPTR+A = DPTR,isto é,
                     ; vou fazer o programa desviar para o endereço dado por DPTR
ORG 0010H            ; localizo a posição 10h
	MOV DPH,#00H;    ; nesta posição, escrevi instrução para mover
	MOV DPL,#20H;82h ; 0020h para o DPTR por meio de DPH e DPL,
                     ; isto é por partes de 8 bits
	JMP @A+DPTR      ; desvio agora para o endereço 0020h
ORG 0020H            ; escrevi nesta posição 0020h que voltarei
	LJMP 0000H       ; para a origem por meio do "long jump"
	END
