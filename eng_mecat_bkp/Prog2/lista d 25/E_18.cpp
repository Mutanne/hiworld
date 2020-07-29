#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    char sai;
    do{
        system("color f0");
        system("cls");

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
