/*
Calcule a vari�ncia de um conjunto de n�meros inteiros
informados pelo usu�rio. A vari�ncia dos n�meros 
corresponde � m�dia do quadrado das diferen�as entre
os n�meros informados e a m�dia.
Exemplo: vari�ncia de 6, 8, 10
M�dia: 8
Vari�ncia: ((6-8)�+(8-8)�+(10-8)�) / 3
            (2�+0�+2�)/3=2,6667
*/
#include<iostream>

using namespace std;

int main(){
    int qtd;
    float media = 0, diferenca, variancia = 0;
    cin>>qtd;
    int numeros[qtd];
    int i = 0;
    while(i < qtd){
        cin>>numeros[i];
        media += numeros[i];
        i++;
    }
    media /= qtd;
    i = 0;
    while(i < qtd){
        diferenca = numeros[i] - media;
        diferenca *= diferenca;
        variancia += diferenca;
        i++;
    }
    variancia /= qtd;
    cout<<"Variancia: "<<variancia<<"\n";
    system("pause");
}
