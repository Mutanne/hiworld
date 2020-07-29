#include<iostream>
using namespace std;
  /*Uma loja de roupas está vendendo camisetas, bermudas e calças. 
  Cada camiseta é vendida a 5 reais; cada bermuda a 10 reais; e cada 
  calça a 15 reais. Crie um programa que calcule o valor de uma venda, 
  dado que o usuário informará a quantidade de 
  camisetas, bermudas e calças compradas.
  */
int main(){
    int camiseta, bermuda, calca, total;
    cout<<" Este programa calcula o valor de uma venda de roupas. "<<"\n"<<"\n";
    cout<<"Quantas camisetas: ";
    cin>>camiseta;
    cout<<"Quantas bermudas: ";
    cin>>bermuda;
    cout<<"Quantas calcas: ";
    cin>>calca;
    
    camiseta*=5; 
    bermuda*=10; 
    calca*=15;
    
    total=camiseta+bermuda+calca;
    cout<<"Valor total da compra: "<<total<<" Reais"<<"\n";
    system("pause");
}
