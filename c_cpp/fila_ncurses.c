/******************************************
*  NOME        :  fila_ncurses.c
*
*  DEV.        :  Murillo SD
*
*  DATA        :  26 05 2020
*
*  DESCRIÇÃO   :  ordena entrada e saida    
*                             de denuncias do cliente.
*
*  VERSÃO      :  v1.2.0
******************************************/

/*---------------------constantes-----------------------*/
#define DELAY 1000000

/*--------------------- bibliotecas ----------------------*/
#include<ncurses.h>

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
	
	initscr();	//inicia janela
	echo();	  //mostrar oq for digitado
	curs_set(FALSE);  //nao mostra cursor

	
    do{
    	clear();
    	menu(); //exibe o menu
    	printw("%d denuncias.\n",tamanho(fila.first));
    	imprime(fila.first);
    	printw("Operacao: ");
    	refresh();
 	   getstr(entrada);
 	   opcao=atoi(entrada);
 	   switch (opcao){
 	   	case 1:     //insere novas denuncias.
 	   		if(tamanho(fila.first)<20){
 	   			printw("ID da solicitacao: ");
 	   			refresh();
 		   		getstr(entrada);		   		
 		   		id=atoi(entrada);
 		   		if(id!=0){
 	   				inserir(&fila.first, &fila.last, id);
 	   				printw("\n%d inserido.\n\n",id); 
 		   		}
 		   		else{
 		   			printw("\nDeve ser um inteiro diferente de 0\n\n");
 		   		}
 	   		} 	   	
 	   		else{
 	   			printw("\n[!] Limite atingido.\n\n");
 	   		}
 	   		refresh();
 	   		usleep(DELAY);
 	   		break;
 	   	case 2:     //remove uma, se existir.
 	   		if(!vazia(fila.first)){
 			   	id=remover(&fila.first, &fila.last);
 	   			printw("\n%d removido.\n\n",id);
 	   		}
 	   		else{
 	   			printw("\nNada para retirar.\n\n");
 	   		}
 	   		refresh();
 	   		usleep(DELAY);
 	   		break;
 	   	case 3:     //sai do programa
 	   		endwin();
 	   		return 0;
 	   		printw("\nERRO: encerramento nao realizado");
 	   		refresh();
 	   		usleep(DELAY);
 	   		break;
 	   	default:
 	   		printw("\nOpcao invalida! \n\n");
 	   		refresh();
 	   		usleep(DELAY);
 	   }; //fim switch	   
    }while(1);
}//fim da main

/*----------------------- funções -------------------------*/

/*_funcao que exibe o menu_*/
void menu(void){
	printw("--------Zer@Dengue--------\n");
	printw("  1 - Nova solicitacao\n");
    printw("  2 - Fechar solicitacao\n");
    printw("  3 - Finaliza execucao\n\n");
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
		printw( "%c não inserido. Sem memória disponível.\n", val);
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
		printw("   ");
		lim=3;
		while(inicio!=NULL){
			lim+=3+snprintf( NULL, 0, "%d", inicio->id );
			printw("%d | ", inicio->id);
			inicio=inicio->next;			
		}//exibe os ids das denuncias		
		printw("\n");
		while(aux!=NULL){//exibe a ordem
			temp=0;
			cont++;
			temp+=snprintf( NULL, 0, "%d", aux->id );		
			if(cont>=10){ 
				n=1; 
			}
			for(int i=0; i<temp+n; i++){
				printw(" ");				
			}
			printw("%d",cont);
			aux=aux->next;	
		}
		printw("\n\n");
	}
	else{
		printw("NULL\n\n");
	}
	refresh();
}//fim imprime
/*__fim do codigo__*/