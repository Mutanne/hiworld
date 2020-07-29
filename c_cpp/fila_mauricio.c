#include <stdio.h>
#include <stdlib.h>

typedef struct queueElem{      
    int data;                  
    struct queueElem*next;      
}queueELEM;                     
typedef struct queue{
    struct queueElem*begin;
    struct queueElem*end;
}queue;
int opt;

queue*create(){
    queue*q = (queue*)malloc(sizeof(queue));
    if(!q)
        exit(1);
    else{
     q->begin = NULL;
     q->end = NULL;
    }
    return q;
}

int emptyQUEUE(queue*q){
    if(q==NULL) return 1;
    if(q->begin==NULL) return 1;
    else return 0;
}
//------------------adicionado-----------------
int lengthQUEUE (queue*que){
    queueELEM*aux = que->begin;
    int count=0;
    while(aux!=NULL){
        aux = aux->next;
        count++;
    }
    return count;
}
//-----------------------------------
int readVALUE(){
    int value;
    printf (" Numero da Solicitacao: ");
    scanf("%i", &value);
    return value;
}
queueELEM* allocate(int value){
    queueELEM* node = (queueELEM*)malloc(sizeof(queueELEM));
    if(!node)
        exit(1);
    else{
        node->data = value;
        node->next = NULL;
        return node;
    }
}
void enqueue(queue*q){
    queueELEM*node = allocate(readVALUE());
    if(!node)
        exit(1);
    if(q->end == NULL)
        q->begin = node;
    else
        q->end->next = node;
    q->end = node;
}
int dequeue(queue*q){
    if(emptyQUEUE(q)) return 0;

    queueELEM*node = q->begin;
    q->begin = q->begin->next;
    if(q->begin!=NULL)
        q->end = NULL;
    free(node);
    return 1;
}
void display(queue*q){
    if(emptyQUEUE(q)){
        printf (" Fila Vazia;\n");
        return ;
    }
    queueELEM*aux = q->begin;
    printf ("\n  Fila Atual: ");
    while(aux!=NULL){
        printf ("%i ", aux->data);
        aux = aux->next;
    }
    printf ("\n");
}
void cases(int opt, queue*q){
    switch(opt){
        case 1:
            if(lengthQUEUE(q)<20){    //chama a funcão nova que conta quantos tem
                enqueue(q);
                display(q);
            }
            else{
                printf("Atingiu o limite de 20 solicitações\n");
            }
            break;
        case 2:
            dequeue(q);
            display(q);
            break;
        default:
            if (opt!=0) printf (" Opção Invalida;\n");
    }
}
int menu(){
    printf ("\n Opcoes da Fila;\n");
    printf ("  0 Sair;\n");
    printf ("  1 Inserir ;\n");
    printf ("  2 Remover ;\n");
    printf (" Opcao: ");
    scanf("%i", &opt);
    return opt;
}
int main (void){
    queue*q = create();
    do{
        opt = menu();
        cases(opt,q);
    }while(opt);
    return 0;
}