#include<iostream>
#include<stdlib.h>
using namespace std;
void media(float notas[65535],int qtdade);
void maior_menor(float notas[65535],int qtdade);

int main(){
    float notas[65535];
    int qtd;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Quantas notas ira digitar?: ";
        cin>>qtd;
        for(int i=0; i<qtd; i++){
            cout<<"Digite a nota: ";
            cin>>notas[i];
        }
        media(notas,qtd);
        maior_menor(notas,qtd);
        cout<<"Digite \"C\" p continuar,outra letra para sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
void media(float notas[65535],int qtdade){
    float soma=0,media=0;
    for(int i=0; i<qtdade; i++){
        soma+=notas[i];
    }
    media=soma/qtdade;
    cout<<endl<<"Quantidade de notas da sequencia: "<<qtdade<<endl
        <<"Media aritmetica de todas as notas da sequencia: "<<media<<endl;
}
void maior_menor(float notas[65535],int qtdade){
    int maiores=0,menores=0;
    float maior=0,pctmaior,menor=notas[0],pctmenor;

    for(int i=0; i<qtdade; i++){
        if(notas[i]>=5){ maiores++; }       //conta as maiores ou iguais a 5.0
        else{ menores++; }                  //conta as menores q 5.0
        if(notas[i]>maior){ maior=notas[i]; }   //acha a maior
        if(notas[i]<menor){ menor=notas[i]; }   //acha a menor
    }
    pctmaior=(maiores*100)/qtdade;          //percentual das maiores ou iguais a 5.0
    pctmenor=(menores*100)/qtdade;          //percentual das menores a 5.0
    cout<<"Maior nota da sequencia: "<<maior<<endl
        <<"Menor nota da sequencia: "<<menor<<endl
        <<"Percentual de notas maiores ou iguais a 5: "<<pctmaior<<"%"<<endl
        <<"Percentual de notas inferiores a 5: "<<pctmenor<<"%"<<endl<<endl;
}
