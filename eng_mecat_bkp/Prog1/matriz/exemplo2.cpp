/*
Calcule a variância de um conjunto de números inteiros
informados pelo usuário. A variância dos números 
corresponde à média do quadrado das diferenças entre
os números informados e a média.
Exemplo: variância de 6, 8, 10
Média: 8
Variância: ((6-8)²+(8-8)²+(10-8)²) / 3
            (2²+0²+2²)/3=2,6667
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
