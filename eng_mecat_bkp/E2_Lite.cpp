#include<iostream>
#include<stdlib.h>
using namespace std;

//----Declaração das variaveis globais:---
float _nota[5],_media=0;

//----prototipos dos metodos:---
void media();
void sup_med();

int main(){
	for(int i=0; i<5 ; i++){
		cout<<" Digite a nota do aluno "<<i+1<<" : \n";
        cin>>_nota[i];
	}
	media();
	sup_med();
	system("pause");
}
void media(){
    float snota=0;
    for(int i=0; i<5; i++){
        snota+=_nota[i];
    }
    _media= snota/5;
}
void sup_med(){
    int acima_m=0;
    for(int i=0; i<5 ; i++){
        if( _nota[i]>_media ){
            acima_m++;
        }
 	}
    cout<<"\n"<<acima_m<<" alunos tiveram nota acima da media(="<<_media<<") \n";
}
