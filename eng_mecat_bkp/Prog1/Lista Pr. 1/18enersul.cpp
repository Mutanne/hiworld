#include<iostream>

using namespace std;
  /*O valor da conta de energia el�trica � calculado de acordo com o 
  consumo de cada usu�rio somado com eventuais taxas. Crie um programa 
  que calcule o valor da conta de um usu�rio, considerando que o 
  usu�rio informar� a quantidade de kW consumidos, o valor cobrado 
  por kW e o valor da taxa. Por exemplo, um usu�rio que consumiu 50 kw 
  pagar� 24.5+5=29.5, caso o valor do kW seja de 0.49 e a taxa de 5.
  */
int main(){
    float kwc, vkw, vt, pg;
    cout<<" Calcule o valor da conta de um consumidor."<<"\n"<<"\n";
    cout<<" Digite os kW consumidos: ";
    cin>>kwc;
    
    cout<<" Digite o valor de cada kW: ";
    cin>>vkw;
    
    cout<<" Digite o valor da taxa: ";
    cin>>vt;
    cout<<"\n";
    
    
    pg = (kwc*vkw)+vt;
    cout<<" O valor a ser pago e de "<<pg<<" Reais."<<"\n"<<"\n";
    system("pause");
}
