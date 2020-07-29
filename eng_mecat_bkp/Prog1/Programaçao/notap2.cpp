#include<iostream>
using namespace std;

int main(){
    float peso1, peso2, nota1, nota2;
    
    cout<<"Digite a nota da P1: ";
    cin>>nota1;
    cout<<"Digite o peso da P1: ";
    cin>>peso1;
    cout<<"Digite o peso da P2: ";
    cin>>peso2;
    cout<<"\n";
    nota2= (7*(peso1+peso2)-peso1*nota1)/peso2;
    
    if(nota2 <= 10) {
    cout<<"Voce precisa de "<<nota2<<" pontos na P2"<<"\n"<<"\n";
    }
    if(nota2 > 10) {
    cout<<" Meus pesames! "<<"\n"<<"\n";
    }
    
    system("pause");
}
