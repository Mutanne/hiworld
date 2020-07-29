#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    string word;
    char sai;

    do{
        system("color f0");
        system("cls");

        cout<<"Hello!\b\b\n";

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
