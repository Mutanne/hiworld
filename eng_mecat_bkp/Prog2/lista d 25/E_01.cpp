#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int num;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Digite um numero de 1 a 10: ";
        cin>>num;
        if(num>=1&&num<=10){
            for(int i=0; i<num; i++){
                cout<<num<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"\nFora do intervalo especificado!\n";
        }
        cout<<"Digite C p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
}
