#include<stdio.h>

#define N 10
struct filacirc { /* Criação da es trutura da Fila 
Circular */
	int tam, ini, fim;
	char vet[N];
};
typedef struct filacirc FilaCirc;

void inicia_fila (FilaCirc *f);
void insere_fila (FilaCirc* f, char elem);
int fila_vazia (FilaCirc* f);
char remove_fila (FilaCirc* f);

int main(){
	return 0;
}

/* Função para inicializar a Fila */ 
void inicia_fila (FilaCirc *f){
	f -> tam = 0;
	f -> ini = 1;
	f -> fim = 0;
}

/* Função para inserir na Fila */ 
void insere_fila (FilaCirc* f, char elem){
	if (f -> tam == N - 1){ /* Verifica se a Fila 
es tá completa */
 		printf(“A fila es ta cheia\n”);
	}
	else { /* Caso a Fila não es teja completa, 
inserimos o elemento */
 		f -> fim = (f -> fim % (N - 1)) + 1;
 		f -> vet[f -> fim] = elem;
 		f -> tam++;
	}
}

int fila_vazia (FilaCirc* f){
	return (f -> tam == 0); /* Retorna verdadeiro 
se a Fila es tiver vazia */
}

char remove_fila (FilaCirc* f){
	if (fila_vazia(f)){ /* Verifica se a Fila es 
tá vazia */
 		printf(“Fila vazia\n”);
	} 
	else { /* Caso a Fila contenha elemento, é 
removido o primeiro */
 		f -> ini = (f -> ini % (N-1)) + 1;
 		f -> tam--;
	}
}
