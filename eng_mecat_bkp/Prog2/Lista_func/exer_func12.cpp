/*162. Escreva um programa composto de uma fun��o Max e o programa principal
como segue:
a) A fun��o Max recebe como par�metros de entrada dois n�meros inteiros e
retorna o maior. Se forem iguais retorna qualquer um deles;
b) O programa principal l� 4 s�ries de 4 n�meros a,b,c e d. Para cada s�rie lida
imprime o maior dos quatro n�meros usando a fun��o Max.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int Max(int n1,int n2){
    if(n1>=n2){
        return n1;
    }
    else if(n2>n1){
        return n2;
    }
}

int main(){
    int a,b,c,d,m,m1,n;
    do{
        cout<<"Digite a: ";
        cin>>a;
        cout<<"Digite b: ";
        cin>>b;
        m=Max(a,b);
        cout<<"Digite c: ";
        cin>>c;
        cout<<"Digite d: ";
        cin>>d;
        m1=Max(c,d);
        m=Max(m,m1);
        cout<<"Omaior dessa serie � "<<m<<endl;
        n++;
    }while(n<4);

}


