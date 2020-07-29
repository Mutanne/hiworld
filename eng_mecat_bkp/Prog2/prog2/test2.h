#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#endif // TEST_H_INCLUDED
#include<iostream>
using namespace std;
int a[15],b[15],qtd=0,j=0;
/*  Função para contar cracteres num vetor com 10 ou + posiçoes*/
namespace qtd_n{

    int op(int a[9]){   //faz uma copia do vetor de entrada
        for(int i=0;i<15;i++){
            b[i]=a[i];
        }
//Retire as barras no 'cout' para conferir a execução da função passo-a-passo.

//bloco para contar os caracteres.
//substitui valor d cada posiçao pela quantidade
//e soma tudo no 'qtd'
        for(int i=0;i<15;i++){
            //cout<<i<<endl;
            if(b[i]>=10){
                //cout<<b[i]<<endl;
                for(j=0;b[i]>0;j++){
                    b[i]=(b[i]/10);
                    //cout<<i<<" "<<j<<endl;
                }
                //cout<<j<<endl;
                b[i]=j;
                qtd+=j;
                //cout<<qtd<<endl<<endl;
            }
            else{ //if(b[i]>=0 && b[i]<=9){
                b[i]=1;
                qtd+=2;
            }
        }
        return qtd;
    }
}
