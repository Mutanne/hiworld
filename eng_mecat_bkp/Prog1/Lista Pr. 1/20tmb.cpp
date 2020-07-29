#include<iostream>

using namespace std;

int main(){
    float p, h, id, sexo, tmb;
    cout<<" Calcule a quantidade de calorias que uma pessoa deve"<<"\n"; 
    cout<<" ingerir durante um dia para se manter viva"<<"\n";
    cout<<" (Taxa Metabolica Basal)"<<"\n"<<"\n";
    
    cout<<" Digite seu peso: ";
    cin>>p;
    
    cout<<" Digite sua altura: ";
    cin>>h;
    
    cout<<" Digite sua idade: ";
    cin>>id;
    
    cout<<" Sexo masculino(1) ou feminino(2): ";
    cin>>sexo;
    cout<<"\n";
        
    if(sexo == 1){
             tmb = 1.3*(66.4+((13.7*p)+(5*h*100)-(6.7*id)));
             cout<<" A sua taxa metabolica basal e "<<tmb<<"\n"<<"\n";
        }
    if(sexo == 2){
             tmb = 1.3*(655.1+((9.5*p)+(1.8*h*100)-(4.6*id)));
             cout<<" A sua taxa metabolica basal e "<<tmb<<"\n"<<"\n";
             }
    
    system("pause");
}

