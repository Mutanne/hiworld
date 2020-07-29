#include<iostream>

using namespace std;
  /*Crie um programa para converter um valor em dólares para reais. 
  O usuário irá fornecer o valor do dólar em reais e o valor em dólares 
  a converter. Seu programa deve mostrar o valor correspondente em reais.
  */
int main(){
    float dolr, dac, r;
     cout<<" Converte um valor em dolares para reais"<<"\n"<<"\n";
    cout<<" Digite o valor do dolar em reais: ";
    cin>>dolr;
    cout<<" Digite o valor em dolares a converter: ";
    cin>>dac;
      
    r = dolr*dac;
    
    cout<<" A quantia equivale a "<<r<<" Reais"<<"\n"<<"\n"<<"\n";
        
    system("pause");
}
