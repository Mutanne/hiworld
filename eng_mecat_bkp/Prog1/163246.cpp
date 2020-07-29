#include<iostream>

using namespace std;

int main(){
   //int x, y, z para números inteiros
   float x, y, z;
   //escreve uma mensagem na tela
   cout<<"Digite um numero:";
   //solicita que o usuario digite um numero
   //e armazena na variável x
   cin>>x;
   cout<<"Digite um numero: ";
   cin>>y;
   z = x - y;
   cout<<"Subtracao="<<z<<"\n\n";
   system("pause");
}
