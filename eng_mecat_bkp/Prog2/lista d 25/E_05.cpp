#include<iostream>
#include<stdlib.h>
using namespace std;
float F(float X){
    return -(X*X*X)+8.0;
}
int main(){
    float X;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Digite o valor: ";
        cin>>X;
        cout<<"F("<<X<<")=-("<<X<<")^3 +8 = "<<F(X)<<endl;

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
