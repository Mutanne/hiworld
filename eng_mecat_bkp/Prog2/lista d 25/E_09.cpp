#include<iostream>
#include<stdlib.h>
using namespace std;
void media(float notas[65535]);
void maior_menor(float notas[65535]);

int main(){
    float notas[65535];
    char sai;
    do{
        system("color f0");
        system("cls");
        int i=-1;
        cout<<"Digite uma nota negativa ou maior a 10"<<endl<<"apos digitar todas as notas"<<endl;
        do{
            i++;
            cout<<"Digite a nota: ";
            cin>>notas[i];
        }while(notas[i]>=0 && notas[i]<=10);
        media(notas);
        maior_menor(notas);
        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
void media(float notas[65535]){
    int qtdade=0;
    float soma=0,media=0;
    for(int i=0; notas[i]>=0&&notas[i]<=10; i++){
        qtdade++;
        soma+=notas[i];
    }
    media=soma/qtdade;
    cout<<endl<<"Quantidade de notas da sequencia: "<<qtdade<<endl
        <<"Media aritmetica de todas as notas da sequencia: "<<media<<endl;
}
void maior_menor(float notas[65535]){
    int qtdade=0,maiores=0,menores=0;
    float maior=0,pctmaior,menor=notas[0],pctmenor;

    for(int i=0; notas[i]>=0&&notas[i]<=10; i++){
        qtdade++;                           //quantidade total de notas
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
