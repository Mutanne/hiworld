#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int menu();
void soma(void);
void subt(void);
void mult(void);
void divid(void);
void comp(void);

int main(){
    int op;
    do{
        op=menu();
        if(op!=1 && op!=2 && op!=3 && op!=4 && op!=5 && op!=6){
            do{
                cout<<"Opcao invalida, informe uma opcao valida.: ";
                cin>>op;
                cout<<endl;
            }while(op!=1 && op!=2 && op!=3 && op!=4 && op!=5 && op!=6);
        }
        switch(op){
        case 1:
            soma();
            break;
        case 2:
            subt();
            break;
        case 3:
            mult();
            break;
        case 4:
            divid();
            break;
        case 5:
            comp();
            break;
        case 6:
            cout<<"Saindo..."<<endl;
            break;
        }
        system("pause");
        system("cls");
    }while(op!=6);
}

int menu(){
    int ret;
    cout<<"********************************************************************************"<<endl
        <<"* Calculadora. Opcoes possiveis:"<<endl
        <<"* 1. Adicao"<<endl
        <<"* 2. Subtração"<<endl
        <<"* 3. Multiplicacao"<<endl
        <<"* 4. Divisao"<<endl
        <<"* 5. Operacao composta"<<endl
        <<"* 6. Sair do programa"<<endl
        <<"********************************************************************************"<<endl
        <<"Digite a opcao: ";
    cin>>ret;
    return ret;
}
void soma(){
    system("cls");
    float a,b;
    cout<<"SOMA."<<endl<<"Digite A: ";
    cin>>a;
    cout<<"Digite B: ";
    cin>>b;
    cout<<"A+B="<<(a+b)<<endl;
}
void subt(){
    system("cls");
    float a,b;
    cout<<"SUBTRACAO.(A-B)"<<endl<<"Digite A: ";
    cin>>a;
    cout<<"Digite B: ";
    cin>>b;
    cout<<"A-B="<<(a-b)<<endl;
}
void mult(){
    system("cls");
    float a,b;
    cout<<"MULTIPLICACAO."<<endl<<"Digite A: ";
    cin>>a;
    cout<<"Digite B: ";
    cin>>b;
    cout<<"A*B="<<(a*b)<<endl;
}
void divid(){
    system("cls");
    float a,b;
    cout<<"DIVISAO.(A/B)"<<endl<<"Digite A: ";
    cin>>a;
    cout<<"Digite B: ";
    cin>>b;
    cout<<"A/B="<<(a/b)<<endl;
}
void comp(){
    system("cls");
    string func;

    cout<<"Digite a operação sem espacos :"<<endl;
    cin.ignore();
    getline(cin,func);
    cout<<endl<<func;

}
