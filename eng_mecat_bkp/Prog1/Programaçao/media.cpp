#include<iostream>
using namespace std;

//calcula a media da idade de 3 alunos e mostra
int main(){
    int idade;
    float media;
    
    cout<<"Digite a idade do 1o aluno";
    cin>>idade;
    media=idade;
    cout<<"Digite a idade do 2o aluno";
    cin>>idade;
    media=media+idade;//soma o ultimo valor de media com a outra idade
    cout<<"Digite a idade do 3o aluno";
    cin>>idade;
    media += idade;
    
    //a=a+b equivale a a+=b para todos operadores
    
    media /=3;
    cout<<"Media ="<<media<<"\n";
    
    system("pause");                
}
