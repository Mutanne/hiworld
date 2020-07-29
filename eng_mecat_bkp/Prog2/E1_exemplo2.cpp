#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int soma=0,contl,contc,m[2][3];
	char sair;
    system("color 0a");
    do{
        cout<<"Digite os 6 valores: \n";
        for(contl=0;contl<2;contl++){
            for(contc=0;contc<3;contc++){
                cin>>m[contl][contc];
            }
        }
        for(contl=0;contl<2;contl++){
            for(contc=0;contc<3;contc++){
                soma+=m[contl][contc];
            }
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
