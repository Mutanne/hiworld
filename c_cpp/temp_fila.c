// template fila Mutanne
//podem copiar, mas nao facam igual pra nao tomar 0 XD

// bibliotecas 
#include<stdio.h>

// variaveis globais
typedef struct {
	int id;
	struct item *next;
}item;
typedef item *itemPtr;

typedef struct{
	itemPtr head;
	itemPtr tail;
}queue;

// protótipos de funções
queue criar(); // ta faltando essa
void inserir(itemPtr *inicio, itemPtr *fim, int val);
int remover(itemPtr *inicio, itemPtr *fim);
int vazia(itemPtr inicio);
int tamanho(itemPtr inicio);
void imprime(itemPtr inicio);
void menu(void);

//   início da execução
int main(int argc, char *argv[]){
	queue fila=criar();
	int opcao, num; //opcao menu,id denuncia
	menu(); //exibe o menu
	
    do{
    	printf("%d items.\n",tamanho(fila.head));
    	imprime(fila.head);
    	printf("Opcao: ");
 	   scanf("%d", &opcao);
 	   fflush(stdin);
 	   switch (opcao){
 	   	case 1: //insere novas denuncias.
 	   		if(tamanho(fila.head)<20){
 	   			printf("Inteiro a ser guardado: ");
 		   		scanf("%d", &num);
 		   		fflush(stdin);
 	   			inserir(&fila.head, &fila.tail, num);
 	   			printf("%d inserido.\n\n",num); 
 	   		}
 	   		else{
 	   			printf("[!] Limite atingido.\n\n");
 	   		}
 	   		break;
 	   	case 2: //remove uma, se existir.
 	   		if(vazia(fila.head)!=1){
 			   	num=remover(&fila.head, &fila.tail);
 	   			printf("%d removido.\n\n",num);
 	   		}
 	   		else{
 	   			printf("Esta vazia.\n\n");
 	   		}
 	   		break;
 	   	case 3: //sai do programa
 	   		return 0;
 	   		exit(0);
 	   		break;
 	   	default:
 	   		printf("Opcao invalida! \n\n");
 	   		menu();
 	   };
 	   
    }while(1);
    
	return 0;
}

// funções 

// cria uma fila vazia
queue criar(){
	queue temp;
	temp.head=NULL;
	temp.tail=NULL;
	return temp;
}

// funcao que exibe o menu
void menu(void){
	printf("     Fila     \n");
	printf("  1 - Inserir\n");
    printf("  2 - Remover\n");
    printf("  3 - Fechar\n\n");
}

// funcao que insere nova denuncia
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
}

// funcao q remove e retorna o 1° item
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
}

// funcao que retorna 1 se fila vazia
int vazia(itemPtr inicio){
	return inicio==NULL;
}

//funcao q retorna o tamanho da fila
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
}

// funcao que imprime toda a fila
void imprime(itemPtr inicio){
	if(vazia(inicio)!=1){
		while(inicio!=NULL){
			printf("%d - ", inicio->id);
			inicio=inicio->next;
		}
		printf("\n\n");
	}
	else{
		printf("NULL\n\n");
	}
}
