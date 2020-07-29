#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//fazer para qualquer numero, alinhando as barras verticais
int main(){
    int mat[10][10], b[10][10], maior[10], qt=1,s=0; //zera vetor
    system("COLOR 2A");
    while(s!=1){
        for(int i=0 ; i<10 ; i++){ //zera o vetor
            maior[i]=0;
        }
        for(int i=0 ; i<10 ; i++){ //colhe os dados
            for(int j=0 ; j<10 ; j++){
                cout<<"Digite o numero da posicao M["<<i+1<<"]"<<"["<<j+1<<"] : ";
                cin>>mat[i][j];
            }
        }
        for(int i=0 ; i<10 ; i++){ //copia mat em b
            for(int j=0 ; j<10 ; j++){
                b[i][j]=mat[i][j];
            }
        }
        for(int j=0,i=0,k=0 ; j<10 ; j++){ //conta os caracteres
            for(int i=0 ; i<10 ; i++){
                for(k=0 ; b[i][j]>0 ; k++){
                    b[i][j]=(b[i][j]/10);
                }
                b[i][j]=k; //salva o numero de caracteres da posiçao
                if(k>maior[j]){
                    maior[j]=k; //pega o maior da coluna
                }

            }
        }
        cout<<endl<<endl;
        int qtd=1;
        for(int i=0; i<10 ; i++){ //soma total dos caracteres incluindo as |
            qtd=(qtd+(maior[i]+1));
        }
        for(int t=qtd; t>0 ; t--){ //mostra a linha superior
            cout<<"-";
        }
        cout<<endl;
        for(int i=0,j=0,k=0 ; i<10 ; i++){
            for(int j=0 ; j<10 ; j++){ //mostra os numeros como |x|x....
                cout<<"|"<<mat[i][j];
                if(maior[j]>b[i][j]){
                    k=maior[j]-b[i][j];
                    for(k=k; k>0 ; k--){
                        cout<<" ";
                    }
                }
            }
            cout<<"|"<<endl;
            for(int t=qtd; t>0 ; t--){ //mostra a linha inferior
                cout<<"-";
            }
            cout<<endl; //pula para proxima linha da matriz
        }
        cout<<endl;                              //
        cout<<"de novo ->0 | sair ->1 "<<endl;;  //
        cin>>s;                                  //apenas para relembrar
        system("cls");                           //
    }
    system("COLOR 2E");
    cout<<"Ate mais!"<<endl;
    system("pause");                     //
}
