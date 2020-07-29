#include<iostream>
#include<stdlib.h>
using namespace std;
float F(float X){
    return -(X*X*X)+8.0;
}
int main(){
    float X,passo,n,Xi,Xf;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Recebendo intervalo."<<endl;
        cout<<"Digite o valor inicial: ";
        cin>>Xi;
        cout<<"Digite o valor final: ";
        cin>>Xf;
        cout<<"Digite quantas iteracoes nesse intervalo: ";
        cin>>n;
        passo=(Xf-Xi)/n;//espaço entre cada iteração
        for(float i=Xi; i<=Xf; i+=passo){
            cout<<"F("<<i<<")=-("<<i<<")^3 +8 = "<<F(i)<<endl;
        }
        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
