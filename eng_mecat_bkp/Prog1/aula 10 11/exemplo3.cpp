#include<iostream>

using namespace std;

/*
Criar um programa para contar quantas letras há em um 
nome digitado pelo usuário. Por exemplo, se o usuário
digitar Julio Cezar, seu programa deve dizer que há
10 letras no nome.
*/
int main(){
    int contador = 0, i;
    char nome[100];
    gets(nome);
    for(i = 0; nome[i] != '\0'; i++){
        nome[i] = tolower(nome[i]);
        if (nome[i] >= 'a' && nome[i] <= 'z'){
            contador++;
        }
    }
    cout<<contador<<"\n";
    system("pause");
}
