#include<iostream>

using namespace std;
  /*Uma empresa precisa de um programa para calcular o valor do d�bito 
  de seus clientes e lhe contratou para desenvolv�-lo. O usu�rio informar� 
  o valor real do d�bito do cliente, a porcentagem de multa, o valor da 
  porcentagem dos juros ao m�s (considerando o m�s com 30 dias) e o n�mero 
  de dias em atraso. Por fim, o programa deve mostrar o valor que o cliente 
  deve pagar. Por exemplo, o cliente com uma conta de 20 reais, que est� 
  atrasada h� 15 dias, dever� pagar 20+0.40+0.12, considerando 2% de multa 
  e 1.2% de juros ao m�s. Considere que o n�mero de 
  dias de atraso � sempre maior que zero.
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
