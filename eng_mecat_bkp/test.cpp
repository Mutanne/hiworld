#include<iostream>
using namespace std;
int notas(int n);
int main(){
    int x;
    cout<<"Digite o valor: ";
    cin>>x;
    cout<<"Return "<<notas(x)<<"\n";
}
int notas(int n){
    int i;
    i=n/50;
    n=(n%50);
    cout<<i<<" notas de R$50,00."<<"\n";
    i=n/20;
    n=(n%20);
    cout<<i<<" notas de R$20,00."<<"\n";
    i=n/10;
    n=(n%10);
    cout<<i<<" notas de R$10,00."<<"\n";
    i=n/5;
    n=(n%5);
    cout<<i<<" notas de R$5,00."<<"\n";
    i=n/2;
    n=(n%2);
    cout<<i<<" notas de R$2,00."<<"\n";
    i=n/1;
    n=(n%1);
    cout<<i<<" notas de R$1,00."<<"\n";
    return(1);
}
