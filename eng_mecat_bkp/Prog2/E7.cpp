#include<iostream>
#include<stdlib.h>
using namespace std;

void recebemat(float a[50][50],float b[50][50]){
    cout<<"Recebendo matriz A...";
    for(int i=0; i<50; i++){
        cout<<"Linha "<<i+1<<":\n";
        for(int j=0; j<50; j++){
            cout<<" Digite o elemento ["<<i<<","<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    cout<<"\nRecebendo matriz B...";
    for(int i=0; i<50; i++){
        cout<<"Linha "<<i+1<<":\n";
        for(int j=0; j<50; j++){
            cout<<" Digite o elemento ["<<i<<","<<j<<"]: ";
            cin>>b[i][j];
        }
    }
}
void calculac(float a[50][50],float b[50][50],float c[50][50]){
    for(int i=0; i<50; i++){  //zera matriz C para as somas abaixo
        for(int j=0; j<50; j++){
            c[i][j]=0;
        }
    }
    for(int jc=0; jc<50; jc++){
        for(int i=0; i<50; i++){
            for(int j=0; j<50; j++){
                c[i][jc]+=(a[i][j]*b[j][i]);
            }
        }
    }

}
void mostrac(float c[50][50]){
    cout<<"Matriz C:\n\n";
    for(int i=0; i<50; i++){
        for(int j=0; j<50; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    float a[50][50],b[50][50],c[50][50];
    char sair;
    system("color f0");
    do{
        system("cls");
        recebemat(a,b);
        calculac(a,b,c);
        mostrac(c);
        system("pause");
        system("cls");
        cout<<"Digite \"S\" para continuar,qualquer outra letra para sair: ";
        cin>>sair;
    }while(sair=='s'||sair=='S');
    cout<<"Ate mais...\n\n";
    system("pause");
}
