#include<iostream>
using namespace std;

int main(){
  
    float metros, h2, kg, imc;
    
    cout<<"Digite a sua altura e aperte enter";
    cin>>metros;
       
    cout<<"Digite a seu peso e aperte enter";
    cin>>kg;
       
    imc = kg/(metros*metros);
    cout<<"seu imc e ="<<imc<<"\n";
    
    if (imc < 18.5) cout << "Voce esta abaixo do peso normal" <<"\n";
    else if (imc >= 18.5 & imc < 25) cout << "Voce esta no peso normal" <<"\n";
    else if (imc >= 25 & imc < 30) cout<<"Voce esta acima do peso normal(sobrepeso)"<<"\n";
    else if (imc >= 30 & imc < 35) cout<<"Obesidade grau 1"<<"\n";
    else if (imc >= 35 & imc < 40) cout<<"Obesidade grau 2"<<"\n";
    else if (imc >= 40) cout<<"Obesidade grau 3, e melhor se cuidar."<<"\n";     
    
    system("pause");   
}
