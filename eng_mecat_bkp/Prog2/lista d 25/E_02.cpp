#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
    float A,B,C;
    float delta,x1,x2;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Calcular raizes dum polinomio de grau 2.\n";
        cout<<"Digite A: ";
        cin>>A;
        cout<<"Digite B: ";
        cin>>B;
        cout<<"Digite C: ";
        cin>>C;
        //--Calculos--------------------------------------
        delta=((B*B)+(-4.0*A*C));
        x1=((-B)+sqrt(delta))/(2.0*A);
        x2=((-B)-sqrt(delta))/(2.0*A);
        cout<<"\nX'= "<<x1<<" ; X\"= "<<x2<<endl;
        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");

}
