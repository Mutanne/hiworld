#include<iostream>

using namespace std;

/*
Criar um programa para verificar se um texto
digitado pelo usuário é um número inteiro positivo par.
*/
int main(){
    int i, eNumero = 0, numero = 0;
    char texto[100];
    gets(texto); 123
    '1', '2', '3', '\0'
    for(i = 0; texto[i] != '\0' && eNumero == 0; i++){
        if (texto[i] < '0' || texto[i] > '9'){
           eNumero = 1;
        }else{
           numero *= 10;
           numero += texto[i] - '0';
        }
    }
    
    if (eNumero == 0){
        cout<<"E o numero "<<numero<<"\n";
        if (numero % 2 == 0){
            cout<<numero<<" e par!\n";
        }else{
            cout<<numero<<" e impar!\n";
        }
    }else{
        cout<<"Nao e um numero!\n";
    }
    system("pause");


}
