#include<stdio.h>

int main(){
	int a=1;
	for(int i=1; i<32; i++){
		a<<=1;
	}
	printf("Signed int32 range: %d",a);
	a=1;
	for(int i=1; i<31; i++){
		a<<=1;
		a++;
	}
	printf(" %d\n",a);
	return 0;
}