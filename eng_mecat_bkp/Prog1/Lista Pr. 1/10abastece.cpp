#include<iostream>
using namespace std;
  /*O carro de João pode ser abastecido com álcool e com gasolina. 
  Esse veículo percorre 8 quilômetros com cada litro de álcool e 
  11 quilômetros com cada litro de gasolina. Crie um programa que 
  identifique a quantidade de quilômetros que será percorrida pelo 
  veículo caso seja utilizado álcool e caso seja utilizada gasolina, 
  dado o valor que será abastecido e o valor do litro de cada combustível. 
  Por exemplo, considerando que o valor do litro do álcool é de R$ 1.60 e 
  o valor do litro da gasolina é de R$ 2.50, com 50 reais, o veículo 
  percorrerá 220 quilômetros com gasolina ou 250 quilômetros com álcool.
  */
int main(){
    float alcool, gasosa, abast, km;
    cout<<" Veja a quantos quilometros que sera percorrida pelo seu veiculo";
    cout<<"\n";
    cout<<" caso seja utilizado alcool e caso seja utilizada gasolina";
    cout<<"\n"<<"\n";
    
    cout<<" Digite quanto pretende abastecer: ";
    cin>>abast;    
    cout<<" Digite o preco do litro do alcool: ";
    cin>>alcool;
    cout<<" Digite o preco do litro da gasolina: ";
    cin>>gasosa;
    cout<<"\n";
    
    km = (abast*8)/alcool;
    cout<<" Seu carro percorrera "<<km<<" km com alcool"<<"\n";
    
    km = (abast*11)/gasosa;
    cout<<" Seu carro percorrera "<<km<<" km com gasolina"<<"\n"<<"\n"<<"\n";
    
    system("pause");
}
