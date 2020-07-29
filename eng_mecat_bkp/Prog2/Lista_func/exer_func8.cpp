#include<iostream>
#include<stdlib.h>
using namespace std;
char letra(){
    char letra;
    cout<<"Deseja continuar?(S-sim,N-nao): ";
    cin>>letra;
    letra=toupper(letra);
    switch(letra){
    case 'S':
        return 'S';
        break;
    case 'N':
        return 'N';
        break;
    default:
        cout<<"Caractere inválido. Digite novamente"<<endl;
        break;
    }
}
int main(){
    int num;
    char sn;
    do{
        sn=letra();
        if(sn=='S'){
            cout<<"Digite o numero: ";
            cin>>num;
            cout<<num<<"^3 = "<<(num*num*num)<<endl;
        }
        else if(sn=='N'){
            system("cls");
            cout<<"flw!"<<endl;
        }
        system("pause");
        system("cls");
    }while(sn!='N');
}
