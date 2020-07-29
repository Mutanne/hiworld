#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int opcao;
    do{
        system("color f0");
        system("cls");

        cout<<"|---------------MENU----------------|\n"
            <<"1-Alterar valores no arquivo\n"
            <<"2-Ler e converter valores no arquivo\n"
            <<"3-Sair\n";
        cin>>opcao;
        switch(opcao){
        case 1:
            system("call Trab1.exe");
            break;
        case 2:
            system("call Trab2.exe");
            break;
        case 3:
            break;
        default:
            cout<<"Opcao invalida!";
            system("pause");
            break;
        }

    }while(opcao!=3);
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
