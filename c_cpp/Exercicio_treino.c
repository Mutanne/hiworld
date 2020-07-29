#include<stdio.h>
#include<stdlib.h>

int main(){
	float sfinal, vend[4]; //vend[0]=num carros, [1]=total vend, [2]=salario, [3]=ganho por carro
	printf("   Calculadora de Salario\nQuantos carros ele(a) vendeu?");
	scanf("%f", &vend[0]); //recebe o numero de carros vendidos
	
	printf("Qual valor total de suas vendas?");
	scanf("%f", &vend[1]); //recebe o valor total das vendas do mes
	
	printf("Qual e o salario?");
	scanf("%f", &vend[2]); //recebe o salario base do vendedor
	
	printf("Quanto ganha por carro vendido?");
	scanf("%f", &vend[3]); //recebe a comissao por carro vendido
	
	sfinal=(vend[2]+(vend[1]*0.05)+(vend[0]*vend[3]));
	printf("Salario final = R$%0.2f", sfinal);
	return 1;
}
