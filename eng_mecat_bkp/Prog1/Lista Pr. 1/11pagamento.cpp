#include<iostream>
using namespace std;
  /*O valor a pagar para um funcion�rio de uma determinada empresa 
  corresponde ao valor bruto subtraindo os impostos (20% do valor bruto) 
  e o valor de adiantamento. Crie um programa que calcule o valor a 
  ser pago a um funcion�rio considerando que o usu�rio informar� o 
  valor bruto do sal�rio e o valor de adiantamento.
  */
int main(){
    float valor, adianta, total;
    cout<<" Calcule o valor a ser pago a um funcion�rio"<<"\n"<<"\n";
    cout<<" Digite o valor bruto: ";
    cin>>valor;    
    cout<<" Digite o valor de adiantamento: ";
    cin>>adianta;
    cout<<"\n";
    
    total = valor-(valor*0.2)-adianta;
    cout<<" O valor a ser pago sera "<<total<<" Reais"<<"\n"<<"\n"<<"\n";
    
    
    system("pause");
}
