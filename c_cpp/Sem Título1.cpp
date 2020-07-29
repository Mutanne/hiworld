#include <stdio.h>
#include <stdlib.h>

int main(){
	float idade;
    printf("Digite sua idade: \n");
    scanf("%f", &idade);
 	if(idade>=18.0){
  		printf("voce ja e maior de 18, ja pode tirar sua carteira de Habilitacao");
 	}
 	else{
    	printf("Voce ainda e menor de 18 anos, aguarde a maior idade para poder tirar sua carteira de habilitacao");
 	}

 return 0;
}
