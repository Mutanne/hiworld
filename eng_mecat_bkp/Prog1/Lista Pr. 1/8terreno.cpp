#include<iostream>
using namespace std;
  /*Uma imobiliária precisa de um programa que calcule a área de 
  terrenos retangulares. A área de um retângulo corresponde à 
  multiplicação da base e a altura desse retângulo. 
  Crie esse programa considerando que o usuário informará os 
  valores da largura (base) e a altura de um terreno.
  */
int main(){
    float base, altura, area;
    cout<<" Calcule a área de terrenos retangulares."<<"\n"<<"\n";
    cout<<"Digite a largura do terreno: ";
    cin>>base;
    cout<<"Digite o comprimento do terreno: ";
    cin>>altura;
    
    area = base*altura;
    cout<<" A area do terreno e "<<area<<" m2"<<"\n";
    
    system("pause");
}
