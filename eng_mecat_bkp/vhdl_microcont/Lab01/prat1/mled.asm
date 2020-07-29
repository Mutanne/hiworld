org 00h				;
i:
	mov p1,#00h			;
	mov p0,#00h			;
;preparar memoria
dados:
	mov 30h,#18h			;
	mov 31h,#24h			;
	mov 32h,#42h			;
	mov 33h,#42h			;
	mov 34h,#42h			;
	mov 35h,#42h			;
	mov 36h,#24h			;
;roda prog
exec:
	mov p1,30h				;
	mov p0,01h				;
	mov p1,31h				;
	mov p0,02h				;
	mov p1,32h				;
	mov p0,04h				;
	mov p1,33h				;
	mov p0,08h				;
	mov p1,34h				;
	mov p0,10h				;
	mov p1,20h				;
	mov p0,40h				;
	mov p1,36h				;
	mov p0,01h				;
	mov p1,30h				;
	mov p0,01h				;
	