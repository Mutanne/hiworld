#include<iostream>

using namespace std;

/*
Criar um programa para verificar se um texto
digitado pelo usuário é um número inteiro positivo.
*/
int main(){
    int i, eNumero = 0;
    char texto[100];
    gets(texto);
    for(i = 0; texto[i] != '\0' && eNumero == 0; i++){
        if (texto[i] < '0' || texto[i] > '9'){
           eNumero = 1;
        }
    }
    if (eNumero == 0){
        cout<<"E um numero!\n";
    }else{
        cout<<"Nao e um numero!\n";
    }
    system("pause");
}
