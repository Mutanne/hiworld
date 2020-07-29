#include<stdio.h>
#include<stdlib.h>

int main(){
	float x=0,y=0,w=0,z=0;
	FILE *vend;
	vend = fopen("exerc_treino.txt", "r");
	if (vend == NULL) {
    	printf("Error opening file.");
    	return -1;
	}
	while(fscanf(vend, "%f", &x) !=EOF){
		printf("%0.2f\n", x);
	};
	fclose(vend);
	return 0;
}
