#include<stdio.h>
#include<stdlib.h>

struct vend{
		int cars=0;
		float slar=0.0, fslar=0.0, tsels=0.0, comis=0.0;
	};
int main(){
	vend vendedor;
	printf("---$$$ Reajuste do salario $$$--- \nQuantos carros vendeu?");
	scanf("%d", &vendedor.cars);
	
	printf("Qual valor total das vendas?");
	scanf("%f", &vendedor.tsels);
	
	printf("Quanto e o salario base?");
	scanf("%f", &vendedor.slar);
	
		printf("Qual a comissao por venda?");
	scanf("%f", &vendedor.comis);
	
	vendedor.fslar=vendedor.slar+vendedor.tsels*0.05+vendedor.comis*vendedor.cars;
	printf("Salario final: R$%0.2f", vendedor.fslar);
	return 1;
}