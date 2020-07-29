#include<iostream>
#include<stdlib.h>
using namespace std;
int LeNumero(int n1,int n2);
void Tabuada(int n);

int main(){
    Tabuada(LeNumero(1,10));
}
int LeNumero(int n1,int n2){
    int num;
    cout<<"Digite o numero: ";
    cin>>num;
    while(num<1||num>10){
        cout<<"Numero invalido.Digite novamente! ";
        cin>>num;
    }
    return num;
}
void Tabuada(int n){
    cout<<n<<" x 1 = "<<n<<endl;
    cout<<n<<" x 2 = "<<(n*2)<<endl;
    cout<<n<<" x 3 = "<<(n*3)<<endl;
    cout<<n<<" x 4 = "<<(n*4)<<endl;
    cout<<n<<" x 5 = "<<(n*5)<<endl;
    cout<<n<<" x 6 = "<<(n*6)<<endl;
    cout<<n<<" x 7 = "<<(n*7)<<endl;
    cout<<n<<" x 8 = "<<(n*8)<<endl;
    cout<<n<<" x 9 = "<<(n*9)<<endl;
    cout<<n<<" x 10 = "<<(n*10)<<endl;
}

