org 0
mov A,#00h
volta:  inc  A
	    mov  P1,A
		sjmp volta
end