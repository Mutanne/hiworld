#include<iostream>
using namespace std;
   /*Uma padaria deseja saber o valor do lucro obtido ao final do dia. 
    Essa padaria vende p�es, leite e bolos. Cada p�o � vendido a 15 centavos; 
    cada leite � vendido a 1 real; e cada bolo � vendido a 5 reais. 
    O custo para produzir cada p�o � de 9 centavos, o leite � comprado 
    por 70 centavos e o bolo custa 3 reais para ser produzido. 
    Crie um programa para calcular o lucro da padaria ao fim do dia, 
    considerando que o usu�rio informar� as 
    quantidades vendidas de p�es, leites e bolos.
    */
int main(){
    float pao, leite, bolo, lucro;
    cout<<" Este programa calcula o lucro da padaria ao fim do dia"<<"\n"<<"\n";
    cout<<"Digite a quantidade de paes vendidos: ";
    cin>>pao;
    pao*=0.06;
    
    cout<<"Digite a quantidade de leite vendidos: ";
    cin>>leite;
    leite*=0.3;
    
    cout<<"Digite a quantidade de bolos vendidos: ";
    cin>>bolo;
    bolo*=2.0;
    
    lucro = pao+leite+bolo;
    cout<<" O lucro obtido foi de R$ "<<lucro<<"\n";
    
    system("pause");
}
