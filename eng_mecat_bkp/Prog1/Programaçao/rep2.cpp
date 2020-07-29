#include<iostream>
using namespace std;
//do-while
int main(){
    int qtd, aux = 0;
    float nota, media = 0;
    cout<<"Digite quantos alunos";
    cin>>qtd;
    
    do{
             cout<<"Digite a nota: ";
             cin>>nota;
             media+=nota;
             aux++;
    }while(aux<qtd);
    media/=qtd;
    cout<<"Media da turma: "<<media<<"\n";
  
    system("pause");    
}
