#include<iostream>
using namespace std;
  /*José tem 1,50m e cresce 2 centímetros por ano. Pedro tem 1,10m e 
  cresce 3 centímetros por ano. Construa um programa que exiba a altura 
  (em centímetros) de José e de Pedro após determinada quantidade de anos. 
  Por exemplo, daqui a 3 anos, José vai medir 156cm e Pedro vai medir 119cm.
  */
int main(){
    float altura, cresce, anos;
    cout<<" Calcule sua altura (em cm) apos determinada quantidade de anos";
    cout<<"\n"<<"\n";
    cout<<"Digite a altura em centimetros: ";
    cin>>altura;
    
    cout<<"Digite quantos cm cresce por ano: ";
    cin>>cresce;
    
    cout<<"Quantos anos se passaram: ";
    cin>>anos;
    
    altura += (cresce*anos);
    cout<<"A altura sera: "<<altura<<"cm"<<"\n"; 
        
    system("pause");
}
