#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    float distancia,litros,tempo,velocidade;
    char sai;
    const int Kmpl=12;
    do{
        system("color f0");
        system("cls");
        cout<<"Digite o tempo gasto da viagem (horas): ";
        cin>>tempo;
        cout<<"Digite a velocidade media durante a viagem(Km/h) : ";
        cin>>velocidade;
        distancia=velocidade*tempo;
        litros=distancia/Kmpl;
        cout<<"\nVelocidade media = "<<velocidade<<" Km/h"<<endl
            <<"Tempo gasto na viagem = "<<tempo<<" horas"<<endl
            <<"Distancia percorrida = "<<distancia<<" Km"<<endl
            <<"Litros de combustivel gasto = "<<litros<<" litros"<<endl<<endl;

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
