#include<stdio.h>

int main(int argc, char *argv[]){
	int a;
	short int b;
	long int c;
	printf("int = %d\nshort int = %d\nlong int = %d",sizeof(a),sizeof(b),sizeof(c));
	return 0;
}