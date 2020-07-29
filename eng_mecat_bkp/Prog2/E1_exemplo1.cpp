#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int soma=0,cont,v[5];
	char sair;
    system("color 0a");
    do{
        cout<<"Digite os 5 valores"<<"\n";
        for(cont=0; cont<5 ; cont++){
            cin>>v[cont];
        }
        for(cont=0; cont<5 ; cont++){
            soma+=v[cont];
        }
        cout<<"Soma= "<<soma<<"\n";
        system("pause");
        system("cls");
        cout<<"Digite \"S\" para continuar,qualquer outra letra para sair: ";
        cin>>sair;
    }while(sair=='s'||sair=='S');
    cout<<"Ate mais...\n\n";
    system("pause");
}
