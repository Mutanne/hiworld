/*
Criar um programa para controlar os assentos de um teatro. 
Esse teatro possui 10 fileiras com 10 cadeiras. Para 
reservar uma cadeira, o usuário informa o número da fileira 
e da cadeira (de 1 a 10) . Se a cadeira já estiver reservada, 
deve ser exibida uma mensagem. Se não, a cadeira deve ser 
reservada. Ao digitar um número de fileira ou cadeira 
menor que 1, o programa deve ser encerrado. Não é necessário 
verificar se os números digitados pelo usuário são válidos.
*/
#include<iostream>

using namespace std;

int main(){
    int operacao, fileira, cadeira, i, indice;
    int assentos[100];
    for(i = 0; i < 100; i++){
        assentos[i] = 0;
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
            indice = (fileira - 1)*10 + (cadeira - 1);
            if(assentos[indice] == 1){
                cout<<"Assento ocupado! Escolha outro!\n";
            }else{
                assentos[indice] = 1;
                cout<<"Assento ocupado com sucesso!\n";
            }
        }else if (operacao != 0){
            cout<<"Operacao invalida!\n";
        }
        system("pause");
    }while(operacao != 0);
}
