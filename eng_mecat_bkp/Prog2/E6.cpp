#include<iostream>
#include<stdlib.h>
using namespace std;

void recebem(float mat[4][5]){
    for(int i=0; i<4; i++){
        cout<<"Linha "<<i+1<<":\n";
        for(int j=0; j<5; j++){
            cout<<" Digite o elemento ["<<i<<","<<j<<"]: ";
            cin>>mat[i][j];
        }
    }
}
void exibe_soma(float mat[4][5]){
    float vet[5]={0,0,0,0,0};
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            vet[i]+=mat[i][j];
        }
        vet[4]+=vet[i];
        cout<<"\n Soma dos elementos da linha "<<i+1<<" = "<<vet[i];
    }
    cout<<"\n Soma de todos elementos da matriz = "<<vet[4]<<"\n\n";
}
int main(){
    float mat[4][5];
    char sair;
    system("color f0");
    do{
        system("cls");
        cout<<"Recebendo a matriz...\n\n";
        recebem(mat);
        cout<<"\nExibindo resultados...\n";
        exibe_soma(mat);
        system("pause");
        system("cls");
        cout<<"Digite \"S\" para continuar,qualquer outra letra para sair: ";
        cin>>sair;
    }while(sair=='s'||sair=='S');
    cout<<"Ate mais...\n\n";
    system("pause");
}
