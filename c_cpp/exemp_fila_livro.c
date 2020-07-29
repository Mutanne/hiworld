#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* Declaração das funções de horas */

#define N 10
struct filacirc {
	int tam, ini, fim;
	int vet[N];
};
typedef struct filacirc FilaCirc;

void inicia_fila (FilaCirc *f){
	f -> tam = 0;
	f -> ini = 1;
	f -> fim = 0;
}

void insere_fila (FilaCirc* f, char elem){
	if (f -> tam == N - 1){ 
		printf("A fila esta cheia\n");
	} 
	else {
		f -> fim = (f -> fim % (N - 1)) + 1;
		f -> vet[f -> fim] = elem;
		f -> tam++;
	}
}

int fila_vazia (FilaCirc* f){
	return (f -> tam == 0);
}

int remove_fila (FilaCirc* f){
	if (fila_vazia(f)){
		printf("Fila vazia\n");
	} 
	else {
		f -> ini = (f -> ini % (N-1)) + 1;
		f -> tam--;
	}
}

int main ( ){
	FilaCirc* f;
	char processo[20];
	int tempo, tmpGasto;
	clock_t tInicio, tFim; /* Declaração de variável do tipo hora */
	printf("\n Informe o tempo do processo em execução: \n");
	scanf("%d", &tempo);
	tInicio = clock(); /* Inicia o relógio */
	inicia_fila(f);
	while (f->tam < N - 1){
		insere_fila(f, processo);
	}
	
	while (f -> tam <= N - 1){
		tFim = clock(); /* Finaliza o relógio */
		tmpGasto = ((int) (tFim - tInicio)); /* Calcula o tempo gasto */
		if (tempo <= tmpGasto){ /* Se o tempo 
for menor ou igual ao tempo gasto, remove da fila */
			remove_fila(f);
 		} 
 		else {
			printf("Processando...");
		}
		//system("Pause");
	}
}