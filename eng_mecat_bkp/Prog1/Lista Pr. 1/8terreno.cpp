#include<iostream>
using namespace std;
  /*Uma imobili�ria precisa de um programa que calcule a �rea de 
  terrenos retangulares. A �rea de um ret�ngulo corresponde � 
  multiplica��o da base e a altura desse ret�ngulo. 
  Crie esse programa considerando que o usu�rio informar� os 
  valores da largura (base) e a altura de um terreno.
  */
int main(){
    float base, altura, area;
    cout<<" Calcule a �rea de terrenos retangulares."<<"\n"<<"\n";
    cout<<"Digite a largura do terreno: ";
    cin>>base;
    cout<<"Digite o comprimento do terreno: ";
    cin>>altura;
    
    area = base*altura;
    cout<<" A area do terreno e "<<area<<" m2"<<"\n";
    
    system("pause");
}
