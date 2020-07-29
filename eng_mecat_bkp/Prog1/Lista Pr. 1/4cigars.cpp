#include<iostream>
using namespace std;
   /*Crie um programa que calcule a quantidade de dinheiro gasta 
   por um fumante. O usuário informará o número de anos que a pessoa 
   fuma, o número de cigarros fumados por dia e o valor da carteira 
   de cigarro. Considere que cada ano tem 365 dias e que cada carteira 
   de cigarro possui 20 cigarros.
   */
int main(){
    float dias, cigars, preco;
    cout<<" Calcule a quantidade de dinheiro gasta por um fumante."<<"\n"<<"\n";
    
    cout<<"Qantos anos voce fuma: ";
    cin>>dias;
    dias*=365;
    
    cout<<"Quantos cigarros por dia: ";
    cin>>cigars;
    cigars/=20;
    
    cout<<"Quanto custa uma carteira de cigarros: ";
    cin>>preco;
    
    preco = dias*cigars*preco;
    cout<<" Foram gastos "<<preco<<" Reais com cigarros."<<"\n"<<"\n";
    system("pause");
}
