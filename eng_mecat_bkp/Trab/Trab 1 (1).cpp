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
        cout<<dois_eN<<" "<<resol<<"\nDigite \"-0\" para finalizar a entrada dos dados\n";
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
        int OutDec[qtdLi];

        //--Leitura e conversao dos valores de string -> float----------
        ifstream arqui;
        arqui.open("cache.txt");
        string  valor;
        int i=0; //auxiliar
        while(getline(arqui, valor)){
            OutDec[i] = (float)atoi(valor.c_str()); //converte string para float
            i++;                                   //ex.:string='123' -> float=123
        }
        arqui.close();

        for(int i=0; OutDec[i]!='\0'; i++){
            cout<<OutDec[i]<<endl;
        }

        //---------------------------

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
