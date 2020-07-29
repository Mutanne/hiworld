#include<stdio.h>

#define N 100
struct fila {
	int n;
	int ini;
	char vet[N];
};
typedef struct fila Fila;


Fila* inicia_fila (void);
void insere_fila (Fila* f, char elem);
float remove_fila (Fila* f);
int fila_vazia (Fila* f);
void libera_fila(Fila* f);

int main(){
	return 0;
}

Fila* inicia_fila (void){
	Fila* f =(Fila *) malloc(sizeof(Fila));
	f -> n = 0; 
	f -> ini = 0;
	return f;
}

void insere_fila (Fila* f, char elem){
	int fim;
	if (f -> n == N){ 
 		printf("A fila es tá cheia.\n");
		 exit(1); 
	}
	fim = (f -> ini + f -> n) % N;
	f -> vet[fim] = elem;
	f -> n++;
}

float remove_fila (Fila* f){
	char elem;
	if (fila_vazia(f)){
		 printf("A Fila es ta vazia\n");
		 exit(1); 
	}
	elem = f -> vet[f -> ini];
	f -> ini = (f -> ini + 1) % N;
	f -> n--;
	return elem;
}

int fila_vazia (Fila* f){
	return (f -> n == 0);
}

void libera_fila(Fila* f){
	free(f);
}
