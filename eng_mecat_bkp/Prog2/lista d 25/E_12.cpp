#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    float A,B;
    char sai,opera;
    do{
        system("color f0");
        system("cls");
        cout<<"Digite um numero: ";
        cin>>A;
        cout<<"Digite a operacao: ";
        cin>>opera;
        cout<<"Digite outro numero: ";
        cin>>B;
        switch(opera){
        case '+':
            cout<<"\nResultado: "<<A<<" + "<<B<<" = "<<A+B<<endl;
            break;
        case '-':
            cout<<"\nResultado: "<<A<<" - "<<B<<" = "<<A-B<<endl;
            break;
        case '*':
            cout<<"\nResultado: "<<A<<" * "<<B<<" = "<<A*B<<endl;
            break;
        case '/':
            if(B!=0){
                cout<<"\nResultado: "<<A<<" / "<<B<<" = "<<A/B<<endl;
            }
            else{
                cout<<"\nERRO:Divisao por 0\n"<<endl;
            }
                break;
        default:
            cout<<"Operacao invalida!\n"<<endl;
        }

        cout<<"Digite \"C\" p continuar,outra letra para sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
