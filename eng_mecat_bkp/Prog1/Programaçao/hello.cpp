#include<iostream>
using namespace std;

int main(){
    int ucdb1;
    int ucdb2;
    int ucdb3;
    int ucdb4;
    
    cout<<"Digite um numero e aperte enter";
    cin>>ucdb1;
    cout<<"Digite mais um numero e aperte enter";
    cin>>ucdb2;
    ucdb3 = ucdb1+ucdb2;
    cout<<"Resultado da soma e=";
    cout<<ucdb3;
    cout<<"\n";
    ucdb3 = ucdb1 - ucdb2;
    cout<<"Resultado da subtracao e=";
    cout<<ucdb3;
    cout<<"\n";
    ucdb3 = ucdb1 * ucdb2;
    cout<<"Resultado da multiplicacao e=";
    cout<<ucdb3;
    cout<<"\n";
    ucdb3 = ucdb1 / ucdb2;
    cout<<"Resultado da divisao e=";
    cout<<ucdb3;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    system("pause");
}    
