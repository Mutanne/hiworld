#include<iostream>
using namespace std;
  /*Crie um programa para calcular o n�mero de segundos em determinado hor�rio. 
  O usu�rio informar� o hor�rio em horas, minutos e segundos. Exemplo: o 
  hor�rio 13:53:20 tem 50000 segundos.
  */
int main(){
    int h, min, sec;
    cout<<"Programa para calcular o numero de segundos em determinado horario";
    cout<<"\n";
    cout<<"\n";
    
    cout<<"Digite somente as horas: "<<"\n";
    cin>>h;
    h*=3600;
    
    cout<<"Digite somente os minutos: "<<"\n";
    cin>>min;
    min*=60;
    
    cout<<"Digite somente os segundos: "<<"\n";
    cin>>sec;
    
    sec = h+min+sec;
    cout<<"Total de segundos: "<<sec<<"\n";
    
    system("pause");
}
