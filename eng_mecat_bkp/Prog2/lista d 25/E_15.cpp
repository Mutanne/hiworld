#include<iostream>
#include<stdlib.h>
using namespace std;
//fatorial com recursividade
int fat(int n){
    if(n>0){
        return(n*fat(n-1));
    }
    else{ return 1; }
}

int main(){
    int n,n2;
    char sai;
    do{
        system("color f0");
        system("cls");

        cout<<"Digite o numero inteiro: ";
        cin>>n;
        n2=2*n-1;
        cout<<"(2*"<<n<<"-1) = "<<n2<<"\n"<<n2<<"! = "<<fat(n2)<<endl;

        cout<<"Digite \"C\" p continuar,outra letra para sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
