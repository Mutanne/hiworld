org 00h			 ;
ini:
mov p3,#00h		 ;
mov r0,#255	 ;
rep:
	mov p3,#01h		 ;
	mov p3,#02h		 ;
	mov p3,#01h		 ;
	djnz r0,rep
	call ini