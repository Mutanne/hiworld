#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#endif // TEST_H_INCLUDED
#include<iostream>
using namespace std;
int a[10],b[10],qtd=21,j=0;
/*  Fun��o para contar cracteres num vetor com 10 posi�oes ou +.
    Altere o tamanho dos vetores a e b se necessario.*/
namespace qtd_n{

    int op(int a[9]){   //faz uma copia do vetor de entrada
        for(int i=0;i<10;i++){
            b[i]=a[i];
        }
//Retire as barras no 'cout' para conferir a execu��o da fun��o passo-a-passo.

//bloco para contar os caracteres.
//substitui valor d cada posi�ao pela quantidade
        for(int i=0;i<10;i++){
            //cout<<i<<endl;
            if(b[i]>=10){
                //cout<<b[i]<<endl;
                for(j=0;b[i]>0;j++){
                    b[i]=(b[i]/10);
                    //cout<<i<<" "<<j<<endl;
                }
                //cout<<j<<endl;
                b[i]=j;
                qtd+=(j-1);
                //cout<<qtd<<endl<<endl;
            }
        }
        return qtd;
    }
}
