#include<iostream>

using namespace std;
  /*Uma empresa precisa de um programa para calcular o valor do débito 
  de seus clientes e lhe contratou para desenvolvê-lo. O usuário informará 
  o valor real do débito do cliente, a porcentagem de multa, o valor da 
  porcentagem dos juros ao mês (considerando o mês com 30 dias) e o número 
  de dias em atraso. Por fim, o programa deve mostrar o valor que o cliente 
  deve pagar. Por exemplo, o cliente com uma conta de 20 reais, que está 
  atrasada há 15 dias, deverá pagar 20+0.40+0.12, considerando 2% de multa 
  e 1.2% de juros ao mês. Considere que o número de 
  dias de atraso é sempre maior que zero.
  */
int main(){
    float vrd, m, j, da, pg;
    cout<<" Calcule o valor do debito de seus clientes"<<"\n"<<"\n";
    cout<<" Digite o valor real do debito: ";
    cin>>vrd;
    cout<<" Digite a porcentagem de multa: ";
    cin>>m;
    m/=100;
    
    cout<<" Digite a porcentagem dos juros ao mes: ";
    cin>>j;
    j/=100;
    
    cout<<" Digite quantos dias de atraso: ";
    cin>>da;
    
    pg = vrd+(vrd*m)+(vrd*((j*da)/30));
    
    cout<<" O debito total e de "<<pg<<" Reais"<<"\n"<<"\n"<<"\n";
    
 
    
    system("pause");
}
