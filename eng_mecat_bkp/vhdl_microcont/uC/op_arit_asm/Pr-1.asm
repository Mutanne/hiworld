;multiplica 
org 0h

mov r0,#100			;
mov r1,#10			;
volta:
	add A,R0		;soma acc e R0
	jnc volta2		;caso carry n 1 volta2
	inc B			;
volta2:
	djnz R1,volta	;
	sjmp $			;
end
