org 0000h       	;
MOV P1,#00h     	;
principal:
	clr p1.0    	;
	lcall tempo 	;
	setb p1.0   	;
	lcall tempo 	;
	ljmp principal  ;

tempo:
	mov r6,#255     ;
	mov r5,#150     ;
tempo1:
	djnz r6,tempo1  ;
	mov r6,#255     ;
	djnz r5,tempo1  ;
	ret             ;
