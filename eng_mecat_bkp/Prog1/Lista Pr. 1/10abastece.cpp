#include<iostream>
using namespace std;
  /*O carro de Jo�o pode ser abastecido com �lcool e com gasolina. 
  Esse ve�culo percorre 8 quil�metros com cada litro de �lcool e 
  11 quil�metros com cada litro de gasolina. Crie um programa que 
  identifique a quantidade de quil�metros que ser� percorrida pelo 
  ve�culo caso seja utilizado �lcool e caso seja utilizada gasolina, 
  dado o valor que ser� abastecido e o valor do litro de cada combust�vel. 
  Por exemplo, considerando que o valor do litro do �lcool � de R$ 1.60 e 
  o valor do litro da gasolina � de R$ 2.50, com 50 reais, o ve�culo 
  percorrer� 220 quil�metros com gasolina ou 250 quil�metros com �lcool.
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
