#include<iostream>

using namespace std;
  /*Crie um programa que calcule o valor bruto do sal�rio de um funcion�rio, 
  considerando que o usu�rio informar� a quantidade de horas trabalhadas 
  no m�s, a quantidade de horas da jornada de trabalho e o valor da hora. 
  Cada hora excedente trabalhada corresponde a 20% a mais da hora normal 
  de trabalho. As horas excedentes correspondem � quantidade de horas 
  trabalhadas al�m da quantidade de horas da jornada de trabalho. 
  Por exemplo, um funcion�rio que tenha trabalhado 150 horas e cuja 
  jornada seja de 120 horas receber� 2340 reais (1800+540), caso a hora 
  de trabalho corresponda a 15 reais. Considere que a quantidade de horas 
  da jornada nunca � maior que a quantidade de horas trabalhadas.
  */
int main(){
    float htm, hjt, vh, pg;
    cout<<"Calcule o valor bruto do sal�rio de um funcion�rio"<<"\n"<<"\n";
    cout<<"Digite as horas trabalhadas no mes: ";
    cin>>htm;
    
    cout<<"Digite quamtas horas da jornada de trabalho: ";
    cin>>hjt;
    
    cout<<"Digite o valor da hora de trabalho normal: ";
    cin>>vh;
    cout<<"\n";
    
    
    pg = (hjt*vh)+(htm-hjt)*(vh+(vh*0.2));
    cout<<" O salario do funcionario sera "<<pg<<" Reais."<<"\n"<<"\n";
    system("pause");
}
