/******************************************
*  NOME        :  fila_pti.c
*
*  DEV.        :  Murillo SD
*
*  DATA        :  12 05 2020
*
*  DESCRIÇÃO   :  ordena entrada e saida    *                             de denuncias do cliente.
*
*  VERSÃO      :  v1.0.0
******************************************/

/*--------------------- bibliotecas ----------------------*/
#include<stdio.h>
//#include<stdlib.h>

/*---------------- variaveis globais -----------------*/
struct Item{
	int id;
	struct item *next;
};
typedef struct Item item;
typedef item *itemPtr;

/*------------ protótipos de funções -------------*/
//item *criar(int val);
void inserir(itemPtr *inicio, itemPtr *fim, int val);
int remover(itemPtr *inicio, itemPtr *fim);
int vazia(itemPtr inicio);
int tamanho(itemPtr inicio);
void imprime(itemPtr inicio);
void menu(void);

/* _ fila_pti _____________________________
*  ________início da execução___________*/
int main(int argc, char *argv[]){
	itemPtr inicio=NULL; //1° que entrou
	itemPtr fim=NULL; //fim da fila
	int opcao, id; //opcao menu,id denuncia
	char entrada[19];//cobre ate int64
	menu(); //exibe o menu
	
    do{
    	printf("%d denuncias.\n",tamanho(inicio));
    	imprime(inicio);
    	printf("Operacao: ");
 	   scanf("%s", entrada);
 	   fflush(stdin);
 	   opcao=atoi(entrada);
 	   switch (opcao){
 	   	case 1: //insere novas denuncias.
 	   		if(tamanho(inicio)<20){
 	   			printf("O id da solicitacao: ");
 		   		scanf("%s", entrada);
 		   		fflush(stdin);
 		   		id=atoi(entrada);
 	   			inserir(&inicio, &fim, id);
 	   			printf("%d inserido.\n\n",id); 
 	   		}
 	   		else{
 	   			printf("[!] Limite atingido.\n\n");
 	   		}
 	   		break;
 	   	case 2: //remove uma, se existir.
 	   		if(vazia(inicio)!=1){
 			   	id=remover(&inicio, &fim);
 	   			printf("%d removido.\n\n",id);
 	   		}
 	   		else{
 	   			printf("Nada para retirar.\n\n");
 	   		}
 	   		break;
 	   	case 3: //sai do programa
 	   		return 0;
 	   		printf("ERRO: encerramento nao realizado");
 	   		break;
 	   	default:
 	   		printf("Opcao invalida! \n\n");
 	   		menu();
 	   };//fim switch
 	   
    }while(1);
    
	return 0;
}//fim da main

/*----------------------- funções -------------------------*/

/*_funcao que exibe o menu_*/
void menu(void){
	printf("--------Zer@Dengue--------\n");
	printf("  1 - Nova solicitacao\n");
    printf("  2 - Fechar solicitacao\n");
    printf("  3 - Finaliza execucao\n\n");
}

/*_funcao que insere nova denuncia_*/
void inserir (itemPtr *inicio, itemPtr *fim, int val){
	itemPtr novoPtr;
	novoPtr=malloc(sizeof(item));
	
	if(novoPtr!=NULL){
		novoPtr->id=val;
		novoPtr->next=NULL;
		
		if(vazia(*inicio)==1){
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
	if(vazia(inicio)==1){
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
	if(vazia(inicio)!=1){
		while(inicio!=NULL){
			printf("%d | ", inicio->id);
			inicio=inicio->next;
		}
		printf("\n\n");
	}
	else{
		printf("NULL\n\n");
	}
}//fim imprime
/*__fim do codigo__*/