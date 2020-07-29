/*
Criar um programa para controlar os assentos de um teatro. 
Esse teatro possui 10 fileiras com 10 cadeiras. Para 
reservar uma cadeira, o usu�rio informa o n�mero da fileira 
e da cadeira (de 1 a 10) . Se a cadeira j� estiver reservada, 
deve ser exibida uma mensagem. Se n�o, a cadeira deve ser 
reservada. Ao digitar um n�mero de fileira ou cadeira 
menor que 1, o programa deve ser encerrado. N�o � necess�rio 
verificar se os n�meros digitados pelo usu�rio s�o v�lidos.
*/
#include<iostream>

using namespace std;

int main(){
    int operacao, fileira, cadeira, i, j, indice;
    int assentos[10][10];
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            assentos[i][j] = 0;
        }
    }
    do{
        system("cls");
        cout<<"Operacoes\n";
        cout<<"1- Reservar\n";
        cout<<"0- Sair\n";
        cout<<"Digite a opcao: ";
        cin>>operacao;
        if (operacao == 1){
            cout<<"Digite a fileira (1 a 10): ";
            cin>>fileira;
            cout<<"Digite a cadeira (1 a 10): ";
            cin>>cadeira;
            if(assentos[fileira-1][cadeira-1] == 1){
                cout<<"Assento ocupado! Escolha outro!\n";
            }else{
                assentos[fileira-1][cadeira-1] = 1;
                cout<<"Assento ocupado com sucesso!\n";
            }
        }else if (operacao != 0){
            cout<<"Operacao invalida!\n";
        }
        system("pause");
    }while(operacao != 0);
}
