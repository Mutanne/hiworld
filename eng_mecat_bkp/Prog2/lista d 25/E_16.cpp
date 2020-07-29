#include<iostream>
#include<stdlib.h>
using namespace std;
int fibonacci(int posic){
    int anter=0,elem=1,aux;
    if(posic==1){ return 0; }
    else{
        for(int i=2; i<posic; i++){
            aux=elem;
            elem+=anter;
            anter=aux;
        }
        return elem;
    }
}
int main(){
    int posic;
    char sai;
    do{
        system("color f0");
        system("cls");

        cout<<"Digite a posicao do elemento: ";
        cin>>posic;
        cout<<"O elemento \""<<posic<<"\" e: "<<fibonacci(posic)<<endl;

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
