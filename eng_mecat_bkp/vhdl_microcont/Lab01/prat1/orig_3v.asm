org 0000h       	;
MOV P1,#00h     	;
principal:

	setb p1.0   	;
	lcall tempo 	;
	clr p1.0      	;
	lcall tempo 	;
	
	setb p1.1   	;
	lcall tempo 	;
	clr p1.1      	;
	lcall tempo 	;

	setb p1.2   	;
	lcall tempo 	;
	clr p1.2      	;
	lcall tempo 	;
	
	setb p1.3   	;
	lcall tempo 	;
	clr p1.3      	;
	lcall tempo 	;
	
	setb p1.4   	;
	lcall tempo 	;
	clr p1.4      	;
	lcall tempo 	;
	
	setb p1.5   	;
	lcall tempo 	;
	clr p1.5      	;
	lcall tempo 	;
	
	setb p1.6   	;
	lcall tempo 	;
	clr p1.6      	;
	lcall tempo 	;

	setb p1.7   	;
	lcall tempo 	;
	clr p1.7      	;
	lcall tempo 	;

	lcall volta     ;
	ljmp principal  ;

tempo:
	mov r6,#255     ;
	mov r5,#150     ;
tempo1:
	djnz r6,tempo1  ;
	mov r6,#255     ;
	djnz r5,tempo1  ;
	ret             ;
volta:
	setb p1.7   	;
	lcall tempo 	;
	clr p1.7      	;
	lcall tempo 	;
	
	setb p1.6   	;
	lcall tempo 	;
	clr p1.6      	;
	lcall tempo 	;

	setb p1.5   	;
	lcall tempo 	;
	clr p1.5      	;
	lcall tempo 	;
	
	setb p1.4   	;
	lcall tempo 	;
	clr p1.4      	;
	lcall tempo 	;
	
	setb p1.3   	;
	lcall tempo 	;
	clr p1.3      	;
	lcall tempo 	;
	
	setb p1.2   	;
	lcall tempo 	;
	clr p1.2      	;
	lcall tempo 	;
	
	setb p1.1   	;
	lcall tempo 	;
	clr p1.1      	;
	lcall tempo 	;

	setb p1.0   	;
	lcall tempo 	;
	clr p1.0      	;
	lcall tempo 	;
	
	lcall volta2    ;
volta1:
	setb p1.4   	;
	setb p1.3   	;
	lcall tempo 	;
	clr p1.4     	;
	clr p1.3     	;
	lcall tempo 	;

	setb p1.5   	;
	setb p1.2   	;
	lcall tempo 	;
	clr p1.5     	;
	clr p1.2     	;
	lcall tempo 	;
	
	setb p1.6   	;
	setb p1.1   	;
	lcall tempo 	;
	clr p1.6     	;
	clr p1.1     	;
	lcall tempo 	;

	setb p1.7   	;
	setb p1.0   	;
	lcall tempo 	;
	clr p1.7     	;
	clr p1.0     	;
	lcall tempo 	;
	lcall principal ;
volta2:
	setb p1.7   	;
	setb p1.0   	;
	lcall tempo 	;
	clr p1.7     	;
	clr p1.0     	;
	lcall tempo 	;

	setb p1.6   	;
	setb p1.1   	;
	lcall tempo 	;
	clr p1.6     	;
	clr p1.1     	;
	lcall tempo 	;
	
	setb p1.5   	;
	setb p1.2   	;
	lcall tempo 	;
	clr p1.5     	;
	clr p1.2     	;
	lcall tempo 	;

	setb p1.4   	;
	setb p1.3   	;
	lcall tempo 	;
	clr p1.4     	;
	clr p1.3     	;
	lcall tempo 	;
	lcall volta1    ;