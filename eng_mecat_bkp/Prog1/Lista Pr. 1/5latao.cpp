#include<iostream>
using namespace std;
  /*Dado que um lat�o � composto por 70% de cobre e 30% de zinco, 
  crie um programa que exiba a quantidade necess�ria de cada um desses 
  dois componentes para se obter uma certa quantidade de lat�o, que ser� 
  informada pelo usu�rio em quilos (podendo ser fracionada).
  */
int main(){
    float latao, cobre, zinco;
    cout<<" Calcule a quantidade necessaria de Zn e Cu"<<"\n"; 
    cout<<" para produzir certa quantidade de latao"<<"\n"<<"\n"; 
    cout<<"Quantos kilos de latao quer produzir: ";
    cin>>latao;
    
    cobre = latao*0.7;
    cout<<" Massa de cobre necessaria: "<<cobre<<"kg"<<"\n";
    
    zinco = latao*0.3;
    cout<<" Massa de zinco necessaria: "<<zinco<<"kg"<<"\n"<<"\n";  
    
    system("pause");
}
