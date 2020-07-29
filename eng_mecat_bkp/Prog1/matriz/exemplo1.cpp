#include<iostream>

using namespace std;

int main(){
    int quantidade, i, contador = 0;
    float media = 0;
    cout<<"Digite a quantidade de alunos: ";
    cin>>quantidade;
    float pesos[quantidade];
    for(i = 0; i < quantidade; i++){
        cout<<"Digite o peso do aluno "<<(i + 1)<<": ";
        cin>>pesos[i];
        media += peso;
    }
    media /= quantidade;
    cout<<"Media: "<<media<<"\n";
    for(i = 0; i < quantidade; i++){
        if (pesos[i] > media){
            contador++;
        }
    }
    cout<<"Alunos acima da media: "<<contador<<"\n";
    system("pause");
}
