#include<iostream>
#include<stdlib.h>
using namespace std;

int fat(int n){
    int a=1;
    if(n==0){
        cout<<"Pela definicao, o fatorial de 0 vale 1."<<endl;
        return 1;
    }
    else{
        for(int i=(n-1); i>0; i--){
            n*=i;
        }
        return n;
    }
}
int main(){
    int num,fato;
    char sai;
    do{
        system("color f0");
        system("cls");

        cout<<"Digite o numero inteiro: ";
        cin>>num;
        cout<<num<<"! = "<<fat(num)<<endl;

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
