#include<iostream>
#include<stdlib.h>
using namespace std;

int menu();
void exemplo1();
void exemplo2();

int main(){
	int opcao,ret;
	char sair;
    system("color f0");
    system("cls");
    do{
		cout<<"Opcoes:\n"
			<<" 1 - Ir para Exemplo 1\n"
			<<" 2 - Ir para Exemplo 2\n"
			<<" 3 - Sair\n"
			<<"Digite a escolhida: ";
		cin>>opcao;
		switch(opcao){
			case 1:
				exemplo1();
				break;
			case 2:
				exemplo2();
				break;
			case 3:
				system("cls");
				cout<<"Ate mais...\n";
				system("pause");
				break;
			default:
				cout<<"\nOpcao inexistente.";
		}
		system("cls");
	}while(opcao!=3);
	return 0;
}

void exemplo1(){
	int soma=0,cont,v[5];
	char sair;
    system("cls");
    do{
    	soma=0;
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
        cout<<"Digite \"S\" para continuar\nqualquer outra letra para retornar ao menu: ";
        cin>>sair;
    }while(sair=='s'||sair=='S');
}
void exemplo2(){
	int soma=0,contl,contc,m[2][3];
	char sair;
    system("cls");
    do{
    	soma=0;
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
        cout<<"Digite \"S\" para continuar\nqualquer outra letra para retornar ao menu: ";
        cin>>sair;
    }while(sair=='s'||sair=='S');
}
