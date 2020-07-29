#include<iostream>
using namespace std;
  /*Crie um programa para calcular o valor de venda de um veículo. 
  O valor de venda é o valor de custo do veículo somado com o valor 
  dos impostos e com o valor de lucro desejado. O valor do imposto 
  corresponde a uma determinada porcentagem sobre o custo do veículo e 
  o lucro corresponde a outra porcentagem aplicada à soma do custo do 
  veículo com o respectivo imposto. Desse modo, o usuário informará ao 
  programa o custo do veículo e as porcentagens de imposto e lucro. 
  Por exemplo, o valor de venda de um veículo com custo de 20.000, com 
  percentual de imposto de 25% e com porcentagem de lucro de 
  10% é 20.000+5.000+2.500=27.500.
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
