#include<iostream>

using namespace std;
  /*Crie um programa para converter um valor em d�lares para reais. 
  O usu�rio ir� fornecer o valor do d�lar em reais e o valor em d�lares 
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
