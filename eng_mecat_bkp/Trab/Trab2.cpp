/*Programa para calcular a saida de um ADC em decimal
usando Estruturas de repeticao,vetor,fstream,...
*/
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    int qtdLi;
    float valores[2]; //conta os valores
    float resol,nvH;

    char sai;

    do{
        system("color f0");
        system("cls");

        fstream ar;
        ar.open("vals2.txt");
        string  val;
        while(getline(ar, val)){
       		qtdLi = atoi(val.c_str()); //converte string para float
       	}
        ar.close();

        int OutDec[qtdLi];

        //--Leitura e conversao dos valores de string -> float----------
        ifstream arqui;
        arqui.open("vals.txt");
        while(getline(arqui, val)){
        	resol = atof(val.c_str()); //converte string para float
    	}
        arqui.close();

        //--Leitura e conversao dos valores de string -> float----------
        ifstream arqu;
        arqu.open("cache.txt");
        string  valor;
        int i=0; //auxiliar
        while(getline(arqu, valor)){
            OutDec[i] = (atof(valor.c_str()))/resol; //converte string para float e ja divide por resol
            i++;                                            //ex.:string='123' -> float=123
        }                                                   //elimina o for comentado abaixo
        arqu.close();                                       //usado na versao anterior

        //for(int i=0; OutDec[i]!='\0'; i++){
        //    OutDec[i]/=resol;
        //}
        cout<<"Resolucao = "<<resol<<"mV\n";
        for(int i=0; OutDec[i]!='\0'; i++){
            cout<<OutDec[i]<<" "<<endl;
        }
        //---------------------------

        cout<<"Digite \"C\" p atualizar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
