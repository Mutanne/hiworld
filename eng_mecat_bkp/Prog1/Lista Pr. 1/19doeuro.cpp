#include<iostream>

using namespace std;
  /*Crie um programa para converter um valor em d�lares para euro 
  usando as cota��es do d�lar e do euro para reais. O usu�rio ir� 
  fornecer o valor do d�lar em reais, o valor do euro em reais e o 
  valor em d�lares a converter. Seu programa deve mostrar o valor 
  correspondente ao digitado em euros.
  */
int main(){
    float dr, er, dac, dpe;
    cout<<" Converta um valor em dolares para euro usando"<<"\n";
    cout<<" as cota��es do dolar e do euro para reais"<<"\n"<<"\n";
    
    cout<<" Digite o valor do dolar em reais: ";
    cin>>dr;
    
    cout<<" Digite o valor do euro em reais: ";
    cin>>er;
    
    cout<<" Digite o valor em dolares a converter: ";
    cin>>dac;
    cout<<"\n";
        
    dpe = dac*dr;
    dpe /= er; 
    
    cout<<" O valor em dolar equivale a "<<dpe<<" Euros."<<"\n"<<"\n";
    system("pause");
}

