#include<iostream>
using namespace std;
//verifica se o numero � par ou impar e retorna bool
bool verifica(int param){
    if(param%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(void){
    int numero;
    bool result;
    cout<<"Digite o valor: ";
    cin>>numero;
    result=verifica(numero);
    if(result){  // a variavel ja � verdadeira ou falsa
        cout<<"PAR."<<endl;
    }
    else{
        cout<<"IMPAR."<<endl;
    }
}
