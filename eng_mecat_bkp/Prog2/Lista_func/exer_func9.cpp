#include<iostream>
#include<stdlib.h>
using namespace std;
int somaint(int n1,int n2){
    int soma;
    if(n1>=n2){
        soma=n1;
        for(int i=n2; i<n1 ; i++){
            soma+=i;
        }
        return soma;
    }
    else{
        soma=n2;
        for(int i=n1; i<n2 ; i++){
            soma+=i;
        }
        return soma;
    }
}
int main(){
    int s,num1,num2;
    cout<<"Digite o numero 1: ";
    cin>>num1;
    cout<<"Digite o numero 2: ";
    cin>>num2;
    cout<<"soma de todos no intervalo = "<<somaint(num1,num2)<<endl;
}
