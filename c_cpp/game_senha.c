#include<stdio.h>
#include<time.h>

void recebe(int *val);//recebe a tentativa
int result(int *val, int *pass);//exibe e verifica

int main(){
	int check, tentar=1, in[4], pass[4];
	
	srand((unsigned)time(NULL));//melhora a aleatoriedade usando a hora
	for(int i=0; i<=3; i++){ //gera senha aleatoria
		pass[i]=rand()%10;//gera decimal(0-9)
	}
	
	while(tentar<=10){
		recebe(in);
		check=result(in,pass);
		if(check==4){
		  printf("\nAcertou mizeravi!\n");
		  return 0;//finaliza o programa
		}
		tentar++;//proxima tentativa
    }
    printf("\nYou lose!\nSenha: ");
    printf("%d %d %d %d\n",pass[0], pass[1], pass[2], pass[3]);
	return 0;
}

void recebe(int *val){
	__label__ REPETE;// declaracao de uma label, algo bem util
	//obs: letras tudo maiuscula nao e obrigatorio, mas e um bom habito.
	
	for(int i=0; i<=3; i++){
		REPETE:  //usando a label, love this.
		scanf("%d",&val[i]);
		if(val[i] >=10||val[i] <0){ 
			printf("entre 0 e 9\n"); 
			goto REPETE;//repete o bloco ate nao entrar nesse if
		}
	}	
}

int result(int *val,int *pass){
	int flag, cont=0;
	printf("Sua tentativa:  ");
	printf(" %d  %d  %d  %d\n", val[0], val[1], val[2], val[3]);
	printf("Resultado:      ");
	for(int i=0; i<=3; i++){
		if(val[i]==pass[i]){
			printf(" 1 ");
			cont++;  //conta quantos digitos estao corretos
		}
		else{
			for(int j=0; j<=3; j++){   //val[i] existe no vetor pass?
				if(i==j){ continue; } //pula a iteracao, ja verificado no if acima
				else{
					flag = (val[i]==pass[j]) ? 0 : -1;// se TRUE vai 0, senao -1
					if(flag==0){break;}//se existe termina a busca
				}
			}
			flag==0 ? printf(" 0 ") : printf("-1 ");
		}
	}
	printf("\n");
    return cont;
}