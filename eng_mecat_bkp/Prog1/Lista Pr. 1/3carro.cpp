#include<iostream>
using namespace std;
  /*Crie um programa para calcular o valor de venda de um ve�culo. 
  O valor de venda � o valor de custo do ve�culo somado com o valor 
  dos impostos e com o valor de lucro desejado. O valor do imposto 
  corresponde a uma determinada porcentagem sobre o custo do ve�culo e 
  o lucro corresponde a outra porcentagem aplicada � soma do custo do 
  ve�culo com o respectivo imposto. Desse modo, o usu�rio informar� ao 
  programa o custo do ve�culo e as porcentagens de imposto e lucro. 
  Por exemplo, o valor de venda de um ve�culo com custo de 20.000, com 
  percentual de imposto de 25% e com porcentagem de lucro de 
  10% � 20.000+5.000+2.500=27.500.
  */
int main(){
    float custo, juros, lucro; 
    cout<<" Programa feito para calcular o valor de venda de veiculos."<<"\n";
   
    cout<<"Digite o custo do carro: ";
    cin>>custo;
    
    cout<<"Digite a taxa de juros: ";
    cin>>juros;
    
    cout<<"Digite a taxa de lucro: ";
    cin>>lucro;
    
    custo += custo*(juros/100);
    custo += custo*(lucro/100);
    cout<<"O valor do carro devera ser: "<<custo<<"\n";
    
    system("pause");
}
