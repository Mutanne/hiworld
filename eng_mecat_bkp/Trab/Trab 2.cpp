/*Programa para calcular a saida de um ADC em decimal
usando Estruturas de repeticao,vetor,fstream,...
*/
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    float valores[2]; //conta os valores
    double resol,nvH;

    char sai;

    do{
        system("color f0");
        system("cls");

        //--Leitura e conversao dos valores de string -> float----------
        ifstream arqu;
        arqui.open("cache.txt");
        string  valor;
        int i=0; //auxiliar
        while(getline(arqui, valor)){
            OutDec[i] = (int)atoi(valor.c_str()); //converte string para float
            i++;                                   //ex.:string='123' -> float=123
        }
        arqui.close();

        //--Leitura e conversao dos valores de string -> float----------
        ifstream arqui;
        arqui.open("vals.txt");
        string  val;
        resol = (float)atof(val.c_str()); //converte string para float
        arqui.close();

        for(int i=0; OutDec[i]!='\0'; i++){
            OutDec[i]/=resol;
        }
        for(int i=0; OutDec[i]!='\0'; i++){
            cout<<OutDec[i]<<" "<<endl;
        }
        //---------------------------

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
