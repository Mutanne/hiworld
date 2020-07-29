//bhaskara usando macro
#include<stdio.h>

#define delta (b*b-4*a*c)
int main(int argc, char *argv[]){
	float x[2], a=1, b=3, c=1;
	x[0]=(-b + sqrt delta)/(2*a);
	x[1]=(-b - sqrt delta)/(2*a);	
	printf("X` =%0.3f\nX``=%0.3f\n",x[0],x[1]);
	return 0;
}