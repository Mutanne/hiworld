#include<iostream>
#include<stdlib.h>
using namespace std;

//----Declaração das variaveis globais:---
float _nota[42][5],_media=0;
int _qtd;
//----prototipos dos metodos:---
void recebe(int al);
void media();
void sup_med();

int main(){
    char sair;
    system("color 0a");
    do{
        system("cls");
        cout<<"Quantidade de notas de cada aluno: ";
        cin>>_qtd;
        for(int i=0; i<5 ; i++){
            cout<<"\n Digite as notas do aluno "<<i+1<<"\n";
            recebe(i);
        }
        media();
        sup_med();
        system("pause");
        system("cls");
        cout<<"Digite \"S\" para continuar,qualquer outra letra para sair: ";
        cin>>sair;
    }while(sair=='s'||sair=='S');
    cout<<"Ate mais...\n\n";
    system("pause");
}
void recebe(int al){
    for(int i=0; i<_qtd; i++){
        cout<<" Digite a nota "<<i+1<<": ";
        cin>>_nota[i][al];
    }
}
void media(){
    float snota=0;
    for(int al=0; al<5 ; al++){
        for(int i=0; i<_qtd; i++){
            snota+=_nota[i][al];
        }
        _media= snota/(_qtd*5);
    }
}
void sup_med(){
    int acima_m=0;
 	for(int al=0; al<5 ; al++){
        for(int i=0; i<5 ; i++){
            if( _nota[i][al]>_media ){
                acima_m++;
                i=5;
            }
        }
 	}
    cout<<"\n"<<acima_m<<" alunos tiveram nota acima da media(="<<_media<<") \n";
}
