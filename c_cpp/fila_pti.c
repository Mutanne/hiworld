/******************************************
*  NOME        :  fila_pti.c
*
*  DEV.        :  Murillo SD
*
*  DATA        :  12 05 2020
*
*  DESCRIÇÃO   :  ordena entrada e saida    
*                             de denuncias do cliente.
*
*  VERSÃO      :  v1.1.0
******************************************/

/*--------------------- bibliotecas ----------------------*/
#include<stdio.h>

/*---------------- variaveis globais -----------------*/
typedef struct{
	int id;
	struct item *next;
}item;
typedef item *itemPtr;

typedef struct{
	itemPtr first;
	itemPtr last;
}queue;

/*------------ protótipos de funções -------------*/
void menu(void);
queue criar();
void inserir(itemPtr *inicio, itemPtr *fim, int val);
int remover(itemPtr *inicio, itemPtr *fim);
int vazia(itemPtr inicio);
int tamanho(itemPtr inicio);
void imprime(itemPtr inicio);

/* _ fila_pti _____________________________
*  ________início da execução___________*/
int main(int argc, char *argv[]){
	queue fila=criar(); //cria fila vazia
	int opcao, id; //opcao menu,id denuncia
	char entrada[19];
	menu(); //exibe o menu
	
    do{
    	printf("%d denuncias.\n",tamanho(fila.first));
    	imprime(fila.first);
    	printf("Operacao: ");
 	   scanf("%s",entrada);
 	   fflush(stdin);
 	   opcao=atoi(entrada);
 	   switch (opcao){
 	   	case 1:     //insere novas denuncias.
 	   		if(tamanho(fila.first)<20){
 	   			printf("O id da solicitacao: ");
 		   		scanf("%s", entrada);
 		   		fflush(stdin); 		   		
 		   		id=atoi(entrada);
 		   		if(id!=0){
 	   				inserir(&fila.first, &fila.last, id);
 	   				printf("%d inserido.\n\n",id); 
 		   		}
 		   		else{
 		   			printf("Deve ser um inteiro diferente de 0\n\n");
 		   		}
 	   		} 	   	
 	   		else{
 	   			printf("[!] Limite atingido.\n\n");
 	   		}
 	   		break;
 	   	case 2:     //remove uma, se existir.
 	   		if(!vazia(fila.first)){
 			   	id=remover(&fila.first, &fila.last);
 	   			printf("%d removido.\n\n",id);
 	   		}
 	   		else{
 	   			printf("Nada para retirar.\n\n");
 	   		}
 	   		break;
 	   	case 3:     //sai do programa
 	   		return 0;
 	   		printf("ERRO: encerramento nao realizado");
 	   		break;
 	   	default:
 	   		printf("Opcao invalida! \n\n");
 	   		menu();
 	   }; //fim switch	   
    }while(1);
}//fim da main

/*----------------------- funções -------------------------*/

/*_funcao que exibe o menu_*/
void menu(void){
	printf("--------Zer@Dengue--------\n");
	printf("  1 - Nova solicitacao\n");
    printf("  2 - Fechar solicitacao\n");
    printf("  3 - Finaliza execucao\n\n");
}//fim menu

/*_funcao que cria fila vazia_*/
queue criar(){
	queue temp;
	temp.first=NULL;
	temp.last=NULL;
	return temp;
}//fim criar

/*_funcao que insere nova denuncia_*/
void inserir (itemPtr *inicio, itemPtr *fim, int val){
	itemPtr novoPtr;
	novoPtr=(queue*)malloc(sizeof(item));
	
	if(novoPtr!=NULL){
		novoPtr->id=val;
		novoPtr->next=NULL;
		
		if(vazia(*inicio)){
			*inicio=novoPtr;
		}
		else{
		    ( *fim )->next = novoPtr;
		}
		*fim=novoPtr;
	}
	else{
		printf( "%c não inserido. Sem memória disponível.\n", val);
	}
}//fim inserir

/*_funcao q remove e retorna o 1° item_*/
int remover(itemPtr *inicio, itemPtr *fim){
	itemPtr auxPtr;
	int valor;
	
	valor=(*inicio)->id;	
	auxPtr=*inicio;
	*inicio=(*inicio)->next;
	
	if(*inicio==NULL){
		*fim=NULL;
	}
	free(auxPtr);
	return valor;
}//fim remover

/*_funcao que retorna 1 se fila vazia_*/
int vazia(itemPtr inicio){
	return inicio==NULL;
}

/*_funcao q retorna o tamanho da fila_*/
int tamanho(itemPtr inicio){
	int cont=0;					//contador
	if(vazia(inicio)){
		return 0;
	}
	else{
		while(inicio!=NULL){
			cont++;
			inicio = inicio->next;
		}
	return cont;
	}
}//fim tamanho

/*_funcao que imprime toda a fila_*/
void imprime(itemPtr inicio){
	itemPtr aux=inicio;
	int temp=0, cont=0, n=2, lim=3;
	if(!vazia(inicio)){
		printf("   ");
		lim=3;
		while(inicio!=NULL){
			lim+=3+snprintf( NULL, 0, "%d", inicio->id );
			printf("%d | ", inicio->id);
			inicio=inicio->next;			
		}//exibe os ids das denuncias		
		printf("\n");
		while(aux!=NULL){//exibe a ordem
			temp=0;
			cont++;
			temp+=snprintf( NULL, 0, "%d", aux->id );		
			if(cont>=10){ 
				n=1; 
			}
			for(int i=0; i<temp+n; i++){
				printf(" ");				
			}
			printf("%d",cont);
			aux=aux->next;	
		}
		printf("\n\n");
	}
	else{
		printf("NULL\n\n");
	}
}//fim imprime
/*__fim do codigo__*/