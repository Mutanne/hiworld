#include<iostream>
#include<stdlib.h>
#define pi 3.1415926535
using namespace std;
float volume(float r,float h){
    return((pi*(r*r))*h);
}
int main(){
    float raio,alt,vol;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Calcular volume de um cilindro."<<endl
            <<"Digite o raio da base: ";
        cin>>raio;
        cout<<"Digite a altura: ";
        cin>>alt;
        vol=volume(raio,alt);
        cout<<"Volume= "<<vol<<endl;
        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
