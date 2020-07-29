#include<iostream>
using namespace std;
  /*O valor a pagar para um funcionário de uma determinada empresa 
  corresponde ao valor bruto subtraindo os impostos (20% do valor bruto) 
  e o valor de adiantamento. Crie um programa que calcule o valor a 
  ser pago a um funcionário considerando que o usuário informará o 
  valor bruto do salário e o valor de adiantamento.
  */
int main(){
    float valor, adianta, total;
    cout<<" Calcule o valor a ser pago a um funcionário"<<"\n"<<"\n";
    cout<<" Digite o valor bruto: ";
    cin>>valor;    
    cout<<" Digite o valor de adiantamento: ";
    cin>>adianta;
    cout<<"\n";
    
    total = valor-(valor*0.2)-adianta;
    cout<<" O valor a ser pago sera "<<total<<" Reais"<<"\n"<<"\n"<<"\n";
    
    
    system("pause");
}
