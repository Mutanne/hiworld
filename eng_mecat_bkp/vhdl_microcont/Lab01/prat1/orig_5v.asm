org 0000h       	;
MOV P1,#00h     	;
MOV P2,#00h         ;
principal:

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
volta:
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
volta1:
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

volta2:
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
	lcall volta3    ;
volta3:
	setb p2.0   	;	
	lcall tempo     ;
	lcall tempo     ;
	clr p2.0        ;

	setb p2.1   	;	
	lcall tempo     ;
	lcall tempo     ;
	clr p2.1        ;

	setb p2.2   	;	
	lcall tempo     ;
	lcall tempo     ;
	clr p2.2        ;

	setb p2.3   	;	
	lcall tempo     ;
	lcall tempo     ;
	clr p2.3        ;	
	lcall tempo     ;
	lcall principal ;