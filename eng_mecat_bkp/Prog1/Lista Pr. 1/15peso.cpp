#include<iostream>

using namespace std;
  /*O IMC (índice de massa corporal) de uma pessoa corresponde ao peso 
  da pessoa (em quilos) dividido pela sua altura ao quadrado (em metros). 
  O peso de uma pessoa é considerado normal caso seu IMC seja maior ou 
  igual a 18.5 e menor que 25. Crie um programa que calcule o peso 
  mínimo e máximo de uma pessoa, dada sua altura (em centímetros). 
  Por exemplo, uma pessoa que mede 1.70 deve pesar no 
  mínimo 53,465 quilos e no máximo 72,25 quilos.
  */
int main(){
    float h, peso;
    cout<<" calcule o peso minimo e maximo de uma pessoa"<<"\n"<<"\n";
    cout<<" Digite a sua altura em metros: ";
    cin>>h;
    
    peso = 18.5*(h*h);
    cout<<" O seu peso minimo deve ser "<<peso<<" kg"<<"\n";
    
    peso = 25*(h*h);
    cout<<" O seu peso maximo deve ser "<<peso<<" kg"<<"\n"<<"\n";
    
    system("pause");
}
