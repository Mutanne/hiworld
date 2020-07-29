#include<stdio.h>

int main(){
	char nome[30];
	float idade;
	
	printf("Nome: ");
	scanf("%s",nome);
	
	printf("Idade: ");
	scanf("%f",&idade);
	
	printf("\n%s %0.2f", nome, idade);
	
	return 0;	
}
