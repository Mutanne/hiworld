org 0000h       	;
MOV P1,#00h     	;
principal:			;do menor p o maior
	setb p1.0       ;
	lcall tempo     ;
	mov p1,#02h     ;
	lcall tempo		;
	mov p1,#04h     ;
	lcall tempo		;
	mov p1,#08h     ;
	lcall tempo		;
	mov p1,#10h     ;
	lcall tempo		;
	mov p1,#20h     ;
	lcall tempo		;
	mov p1,#40h     ;
	lcall tempo		;
	mov p1,#80h     ;
	lcall tempo		;
	MOV P1,#00h    	;
	lcall tempo 	;
	lcall volta     ;
	ljmp principal  ;
tempo:
	mov r6,#155     ;
	mov r5,#150     ;
tempo1:
	djnz r6,tempo1  ;
	mov r6,#155     ;
	djnz r5,tempo1  ;
	ret             ;
tempo2:
	mov r6,#255     ;
	mov r5,#250     ;
tempo3:
	djnz r6,tempo1  ;
	mov r6,#255     ;
	djnz r5,tempo1  ;
	lcall tempo2    ;
	djnz r6,tempo1  ;
	djnz r5,tempo1  ;
	ret             ;
tempo_r:
	mov r6,#55     ;
	mov r5,#50      ;
tempo_rp:
	djnz r6,tempo_rp;
	djnz r5,tempo_rp;
	ret             ;
volta:			    ;do maior p o menor
	setb p1.7   	;
	lcall tempo 	;
	mov p1,#40h     ;
	lcall tempo		;
	mov p1,#20h     ;
	lcall tempo		;
	mov p1,#10h     ;
	lcall tempo		;
	mov p1,#08h     ;
	lcall tempo		;
	mov p1,#04h     ;
	lcall tempo		;
	mov p1,#02h     ;
	lcall tempo		;
	mov p1,#01h     ;
	lcall tempo		;
	MOV P1,#00h     ;
	lcall tempo 	;
	lcall volta2    ;
volta1:				;abre
	mov p1,#18h		;
	lcall tempo		;
	mov p1,#24h		;
	lcall tempo		;
	mov p1,#42h		;
	lcall tempo		;
	mov p1,#81h		;
	lcall tempo		;
	mov p1,#00h		;
	lcall tempo		;
	lcall volta3    ;
volta2:				;fecha
	mov p1,#81h		;
	lcall tempo		;
	mov p1,#42h		;
	lcall tempo		;
	mov p1,#24h		;
	lcall tempo		;
	mov p1,#18h		;
	lcall tempo		;
	mov p1,#00h		;
	lcall tempo		;
	lcall volta1    ;
volta4:      		;tetris part1
	setb p1.0   	;
	lcall tempo 	;
	mov p1,#02h     ;
	lcall tempo 	;
	mov p1,#04h     ;
	lcall tempo 	;
	mov p1,#08h     ;
	lcall tempo 	;
	mov p1,#10h     ;
	lcall tempo 	;
	mov p1,#20h     ;
	lcall tempo 	;
	mov p1,#40h     ;
	lcall tempo 	;
	mov p1,#80h     ;
	lcall tempo 	;
					;tetris part2
	mov p1,#81h     ;
	lcall tempo 	;
	mov p1,#82h     ;
	lcall tempo 	;
	mov p1,#84h     ;
	lcall tempo 	;
	mov p1,#88h     ;
	lcall tempo 	;
	mov p1,#90h     ;
	lcall tempo 	;
	mov p1,#10100000b;
	lcall tempo 	;
	mov p1,#11000000b;
	lcall tempo 	;
					;tetris part3
	mov p1,#11000001b;
	lcall tempo 	 ;
	mov p1,#11000010b;
	lcall tempo 	 ;
	mov p1,#11000100b;
	lcall tempo 	 ;
	mov p1,#11001000b;
	lcall tempo 	 ;
	mov p1,#11010000b;
	lcall tempo 	 ;
	mov p1,#11100000b;
	lcall tempo 	 ;
					;tetris part4
	mov p1,#11100001b;
	lcall tempo 	 ;
	mov p1,#11100010b;
	lcall tempo 	 ;
	mov p1,#11100100b;
	lcall tempo 	 ;
	mov p1,#11101000b;
	lcall tempo 	 ;
	mov p1,#11110000b;
	lcall tempo 	 ;
					;tetris part5
	mov p1,#11110001b;
	lcall tempo 	 ;
	mov p1,#11110010b;
	lcall tempo 	 ;
	mov p1,#11110100b;
	lcall tempo 	 ;
	mov p1,#11111000b;
	lcall tempo 	 ;
					;tetris part6
	mov p1,#11111001b;
	lcall tempo 	 ;
	mov p1,#11111010b;
	lcall tempo 	 ;
	mov p1,#11111100b;
	lcall tempo 	 ;
					;tetris part7
	mov p1,#11111101b;
	lcall tempo 	 ;
	mov p1,#11111110b;
	lcall tempo 	 ;
	mov p1,#11111111b;
	lcall tempo 	 ;
	ret
volta3:	
	lcall volta4    ;chama tetris
	lcall tempo2    ;
	lcall tempo2 	;
	mov p1,#10101010b;
	lcall tempo2 	;
	lcall tempo2 	;
	lcall tempo2 	;
	lcall tempo2 	;
	mov p1,#01010101b;
	lcall tempo2    ;
	lcall tempo2 	;
	lcall tempo2 	;
	lcall tempo2 	;
	
	lcall volta5    ;
volta5:
	mov p1,#01010110b;
	lcall tempo      ;
	mov p1,#01010100b;
	lcall tempo		 ;
	mov p1,#01011000b;
	lcall tempo		 ;
	mov p1,#01010000b;
	lcall tempo		 ;
	mov p1,#01100000b;
	lcall tempo		 ;
	mov p1,#01000000b;
	lcall tempo		 ;
	mov p1,#10000000b;
	lcall tempo		 ;
	MOV P1,#00h      ;
	lcall tempo 	 ;
	
	setb p1.7   	;
	lcall tempo 	;
	mov p1,#40h     ;
	lcall tempo		;
	mov p1,#20h     ;
	lcall tempo		;
	mov p1,#10h     ;
	lcall tempo		;
	mov p1,#08h     ;
	lcall tempo		;
	mov p1,#04h     ;
	lcall tempo		;
	mov p1,#02h     ;
	lcall tempo		;
	mov p1,#01h     ;
	lcall tempo		;
	MOV P1,#00h     ;
	lcall tempo 	;
	lcall volta6 ;
volta6:
	mov p1,#10101010b;
	lcall tempo_r    ;
	mov p1,#01101011b;
	lcall tempo_r    ;
	mov p1,#01010101b;
	lcall tempo_r    ;
	mov p1,#10110010b;
	lcall tempo_r    ;
	mov p1,#11010111b;
	lcall tempo_r    ;
	mov p1,#10101101b;
	lcall tempo_r    ;
	mov p1,#10101010b;
	lcall tempo_r    ;
	mov p1,#01101011b;
	lcall tempo_r    ;
	mov p1,#01010101b;
	lcall tempo_r    ;
	mov p1,#10110010b;
	lcall tempo_r    ;
	mov p1,#11010111b;
	lcall tempo_r    ;
	mov p1,#10101101b;
	lcall tempo_r    ;
	mov p1,#10101010b;
	lcall tempo_r    ;
	mov p1,#01101011b;
	lcall tempo_r    ;
	mov p1,#01010101b;
	lcall tempo_r    ;
	mov p1,#10110010b;
	lcall tempo_r    ;
	mov p1,#11010111b;
	lcall tempo_r    ;
	mov p1,#10101101b;
	lcall tempo_r    ;
	lcall principal  ;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
