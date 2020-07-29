/*162. Escreva um programa composto de uma função Max e o programa principal
como segue:
a) A função Max recebe como parâmetros de entrada dois números inteiros e
retorna o maior. Se forem iguais retorna qualquer um deles;
b) O programa principal lê 4 séries de 4 números a,b,c e d. Para cada série lida
imprime o maior dos quatro números usando a função Max.
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
        cout<<"Omaior dessa serie é "<<m<<endl;
        n++;
    }while(n<4);

}


