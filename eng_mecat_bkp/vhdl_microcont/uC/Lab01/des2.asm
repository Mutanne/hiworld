org 0h                     ; 
	mov P1,#01h        ;
	mov A,P1           ;
	cjne A,#00h,part2  ;
	mov P3,#00h        ;
part2:
	cjne A,00,part3    ;
	mov P3,#33h        ;
part3:
	cjne A,#00h,test2  ;
	jmp part4          ;
test2:
	cjne A,00,vp3      ;
	jmp part4          ;
vp3:
	mov P3,#10101010b  ;
part4:
	nop                ;
end
