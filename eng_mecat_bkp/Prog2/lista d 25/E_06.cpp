#include<iostream>
#include<stdlib.h>
using namespace std;
float F(float X){
    return -(X*X*X)+8.0;
}
int main(){
    float X,n;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Digite quantos valores: ";
        cin>>n;
        cout<<"Xi="<<0<<", Xf="<<n-1<<endl<<endl;
        for(int i=0; i<n; i++){
            cout<<"F("<<i<<")=-("<<i<<")^3 +8 = "<<F(i)<<endl;
        }
        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
