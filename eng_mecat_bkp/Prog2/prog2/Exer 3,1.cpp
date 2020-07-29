#include<iostream>
#include <stdlib.h>
using namespace std;
//Programa para ler uma matriz e exibir com um layout
int main(){
    system("MODE con cols=146 lines=59");
    system("TITLE Exer 3,1");
    int mat[10][10], b[10][10], maior[10],s=0; //declaraçao variaveis

    while(s!=1){                            //repete o programa ate s=1
        for(int i=0 ; i<10 ; i++){          //zera o vetor que tera o maior n de caracteres por coluna
            maior[i]=0;
        }
        for(int i=0 ; i<10 ; i++){          //colhe os dados da matriz e copia em b
            for(int j=0 ; j<10 ; j++){
                cout<<"Digite o numero da posicao M["<<i+1<<"]"<<"["<<j+1<<"] : ";
                cin>>mat[i][j];
                b[i][j]=mat[i][j];
            }
        }
        for(int j=0,i=0,k=0 ; j<10 ; j++){ //conta os caracteres
            for(int i=0 ; i<10 ; i++){
                for(k=0 ; b[i][j]>0 ; k++){
                    b[i][j]=(b[i][j]/10);
                }
                b[i][j]=k;                  //salva o numero de caracteres da posiçao i,j
                if(k>maior[j]){
                    maior[j]=k;             //pega o maior de cada coluna
                }
            }
        }
        cout<<endl<<endl;
        int qtd=1;
        for(int i=0; i<10 ; i++){           //soma total dos caracteres incluindo as barras |
            qtd=(qtd+(maior[i]+1));
        }
        for(int t=qtd; t>0 ; t--){           //mostra a linha superior de hifens
            cout<<"-";
        }
        cout<<endl;
        for(int i=0,j=0,k=0 ; i<10 ; i++){
            for(int j=0 ; j<10 ; j++){      //mostra os numeros como |x|x....
                cout<<"|"<<mat[i][j];
                if(maior[j]>b[i][j]){
                    k=maior[j]-b[i][j];
                    for(k=k; k>0 ; k--){
                        cout<<" ";
                    }
                }
            }
            cout<<"|"<<endl;
            for(int t=qtd; t>0 ; t--){      //mostra a linha inferior de hifens
                cout<<"-";
            }
            cout<<endl;                     //pula para proxima linha da matriz
        }
        cout<<endl;                              //
        cout<<"de novo ->0 | sair ->1 "<<endl;;  //
        cin>>s;                                  //apenas para relembrar
        system("cls");                           //
    }
    cout<<"Ate a proxima!"<<endl;       //fim da execução
    system("pause");
}
