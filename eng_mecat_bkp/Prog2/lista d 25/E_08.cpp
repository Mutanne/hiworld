#include<iostream>
#include<stdlib.h>
using namespace std;
float maior(float a,float b,float c){
    if(a>=b){
        if(a>c){ return a; }
        else{ return c;}
    }
    else{
        if(b>c){ return b; }
        else{ return c;}
    }
}
int main(){
    float a,b,c;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Digite um numero:";
        cin>>a;
        cout<<"Digite outro numero:";
        cin>>b;
        cout<<"Digite mais um numero:";
        cin>>c;
        cout<<"O maior: "<<maior(a,b,c)<<endl;
        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
