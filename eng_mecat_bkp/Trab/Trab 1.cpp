/*Programa para calcular a saida de um ADC em decimal
usando Estruturas de repeticao,vetor,fstream,...
*/
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    int n,dois_eN=2,y;
    int qtdLi=0; //conta os valores
    double resol,nvH;
    char sai;

    do{
        system("color f0");
        system("cls");

        cout<<"Digite a resolucao do adc(x bit): ";
        cin>>n;
        cout<<"Digite a Vref(nivel high) em Volts: ";
        cin>>nvH;
        for(int i=1; i<n; i++){
                dois_eN*=2;
        }
        resol=nvH/(dois_eN-1);

        //--Escrita e contagem dos valores(linhas)---------------------
        ofstream arq;
        arq.open("cache.txt");
        cout<<dois_eN<<" "<<resol<<"\nDigite \"0\" para finalizar a entrada dos dados\n";
        while(y!=-0){
            cout<<"Digite a entrada do ADC em volts: ";
            cin>>y;
            if(y<=nvH){
                arq<<y<<endl;
                qtdLi++;
            }
        }
        qtdLi-=1;
        arq.close();

        //--Escrita e contagem dos valores(linhas)---------------------
        ofstream arq;
        arq.open("vals.txt");
        arq<<resol<<endl;
        qtdLi-=1;
        arq.close();

        //---------------------------

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
