#include<iostream>
#include<stdlib.h>
using namespace std;

char menu(){
    char ler;
    system ("cls");
    cout<<"P - Pequeno"<<endl
        <<"M - Medio"  <<endl
        <<"G - Grande" <<endl
        <<"0 - Sair"   <<endl
        <<"Digite o Tamanho: ";
    cin>>ler;
    return ler;
}

void compara(char in){
    if(in=='P'){
        cout<<"Pequeno"<<endl;
    }
    else if(in=='M'){
        cout<<"Medio"<<endl;
    }
    else if(in=='G'){
        cout<<"Grande"<<endl;
    }
    else if(in=='0'){
        cout<<"Ate mais!"<<endl;
    }
    else {
        cout<<"Tamanho inexistente !"<<endl;
    }
    system("pause");
}

int main(){
    system("COLOR 02");
    char tm='x';
    do{
        tm = menu();
        compara(toupper(tm) );
    }while(tm!='0');
}
