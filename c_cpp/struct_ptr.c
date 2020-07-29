#include<stdio.h>

typedef struct{
	int n;
	char c;
}test;
typedef test *Test;

int main(int argc, char *argv[]){
	test var;
	var.n=10;
	var.c='A';
	Test ptr=malloc(sizeof(test));
	ptr=&var;
	Test *ptr2=&ptr;	
	printf("%x\n%x\n", &var.c, &ptr->c);
    printf("%c\n%x\n", (**ptr2).c, &(**&ptr2)->c);
	return 0;
}