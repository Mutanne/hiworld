org 0000h       	;
MOV P1,#00h     	;
principal:			;do menor p o maior
	setb p1.0   	;
	lcall tempo 	;
	
	setb p1.1   	;
	clr p1.0        ;
	lcall tempo 	;

	setb p1.2   	;
	clr p1.1      	;
	lcall tempo 	;
	
	setb p1.3   	;
	clr p1.2      	;
	lcall tempo 	;
	
	setb p1.4   	;
	clr p1.3      	;
	lcall tempo 	;
	
	setb p1.5   	;
	clr p1.4      	;
	lcall tempo 	;
	
	setb p1.6   	;
	clr p1.5      	;
	lcall tempo 	;

	setb p1.7   	;
	clr p1.6      	;
	lcall tempo 	;
	clr p1.7      	;
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
volta:			     ;do maior p o menor
	setb p1.7   	;
	lcall tempo 	;
	
	setb p1.6   	;
	clr p1.7      	;
	lcall tempo 	;

	setb p1.5   	;
	clr p1.6      	;
	lcall tempo 	;
	
	setb p1.4   	;
	clr p1.5      	;
	lcall tempo 	;
	
	setb p1.3   	;
	clr p1.4      	;
	lcall tempo 	;
	
	setb p1.2   	;
	clr p1.3      	;
	lcall tempo 	;
	
	setb p1.1   	;
	clr p1.2      	;
	lcall tempo 	;

	setb p1.0   	;
	clr p1.1      	;
	lcall tempo 	;
	clr p1.0      	;
	lcall tempo 	;
	
	lcall volta2    ;
volta1:				;abre
	setb p1.4   	;
	setb p1.3   	;
	lcall tempo 	;

	setb p1.5   	;
	setb p1.2   	;
	clr p1.4     	;
	clr p1.3     	;
	lcall tempo 	;
	
	setb p1.6   	;
	setb p1.1   	;
	clr p1.5     	;
	clr p1.2     	;
	lcall tempo 	;

	setb p1.7   	;
	setb p1.0   	;
	clr p1.6     	;
	clr p1.1     	;
	lcall tempo 	;
	clr p1.7     	;
	clr p1.0     	;
	lcall tempo 	;
	lcall volta3    ;
volta2:				;fecha
	setb p1.7   	;
	setb p1.0   	;
	lcall tempo 	;

	setb p1.6   	;
	setb p1.1   	;
	clr p1.7     	;
	clr p1.0     	;
	lcall tempo 	;
	
	setb p1.5   	;
	setb p1.2   	;
	clr p1.6     	;
	clr p1.1     	;
	lcall tempo 	;

	setb p1.4   	;
	setb p1.3   	;
	clr p1.5     	;
	clr p1.2     	;
	lcall tempo 	;
	clr p1.4     	;
	clr p1.3     	;
	lcall tempo 	;
	lcall volta1    ;
volta4:      		;tetris part1
	setb p1.0   	;
	lcall tempo 	;
	setb p1.1   	;
	clr p1.0        ;
	lcall tempo 	;

	setb p1.2   	;
	clr p1.1      	;
	lcall tempo 	;
	
	setb p1.3   	;
	clr p1.2      	;
	lcall tempo 	;
	
	setb p1.4   	;
	clr p1.3      	;
	lcall tempo 	;
	
	setb p1.5   	;
	clr p1.4      	;
	lcall tempo 	;
	
	setb p1.6   	;
	clr p1.5      	;
	lcall tempo 	;

	setb p1.7   	;
	clr p1.6      	;
	lcall tempo 	;
	ret
volta5:      		;tetris part2
	setb p1.0   	;
	lcall tempo 	;
	setb p1.1   	;
	clr p1.0        ;
	lcall tempo 	;

	setb p1.2   	;
	clr p1.1      	;
	lcall tempo 	;
	
	setb p1.3   	;
	clr p1.2      	;
	lcall tempo 	;
	
	setb p1.4   	;
	clr p1.3      	;
	lcall tempo 	;
	
	setb p1.5   	;
	clr p1.4      	;
	lcall tempo 	;
	
	setb p1.6   	;
	clr p1.5      	;
	lcall tempo 	;
	ret 
volta6:      		;tetris part3
	setb p1.0   	;
	lcall tempo 	;
	setb p1.1   	;
	clr p1.0        ;
	lcall tempo 	;

	setb p1.2   	;
	clr p1.1      	;
	lcall tempo 	;
	
	setb p1.3   	;
	clr p1.2      	;
	lcall tempo 	;
	
	setb p1.4   	;
	clr p1.3      	;
	lcall tempo 	;
	
	setb p1.5   	;
	clr p1.4      	;
	lcall tempo 	;
	ret
volta7:      		;tetris part4
	setb p1.0   	;
	lcall tempo 	;
	setb p1.1   	;
	clr p1.0        ;
	lcall tempo 	;

	setb p1.2   	;
	clr p1.1      	;
	lcall tempo 	;
	
	setb p1.3   	;
	clr p1.2      	;
	lcall tempo 	;
	
	setb p1.4   	;
	clr p1.3      	;
	lcall tempo 	;
	ret
volta8:      		;tetris part5
	setb p1.0   	;
	lcall tempo 	;
	setb p1.1   	;
	clr p1.0        ;
	lcall tempo 	;

	setb p1.2   	;
	clr p1.1      	;
	lcall tempo 	;
	
	setb p1.3   	;
	clr p1.2      	;
	lcall tempo 	;
	ret
volta9:      		;tetris part6
	setb p1.0   	;
	lcall tempo 	;
	setb p1.1   	;
	clr p1.0        ;
	lcall tempo 	;

	setb p1.2   	;
	clr p1.1      	;
	lcall tempo 	;
	ret
volta3:
	lcall volta4    ;chama tetris
	lcall volta5    ;
	lcall volta6    ;
	lcall volta7    ;
	lcall volta8    ;
	lcall volta9    ;
	setb p1.0   	;|
	lcall tempo 	;|
	setb p1.1   	;| tetris part7
	clr p1.0        ;|
	lcall tempo 	;|
	setb p1.0   	;|
	lcall tempo2    ;
	lcall tempo2 	;
	clr p1.0     	; ||
	clr p1.2     	; ||
	clr p1.4     	; \/
	clr p1.6     	;
	lcall tempo2 	;
	lcall tempo2 	;
	lcall tempo2 	;
	lcall tempo2 	;
	setb p1.0   	;
	setb p1.2   	;
	setb p1.4   	;pisca
	setb p1.6   	;
	clr p1.1      	;
	clr p1.3   	    ; /\
	clr p1.5   	    ; ||
	clr p1.7   	    ; ||
	lcall tempo2    ;
	lcall tempo2 	;
	lcall tempo2 	;
	lcall tempo2 	;

	lcall principal ;

	
