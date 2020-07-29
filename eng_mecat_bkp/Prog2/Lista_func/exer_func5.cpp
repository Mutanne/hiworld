#include<iostream>
using namespace std;

float pesoideal(float h,int sexo){
    switch(sexo){
        case 1:
            return (62.1*h)- 44.7;
            break;
        case 2:
            return (72.7*h)- 58;
            break;
        default:
            return 0;
            break;
    }
}
int main(){
    int sexo;
    float altura;
    cout<<"Descubra o seu peso ideal"<<endl
        <<"Digite o seu sexo.(1-Feminino,2-Masculino.): ";
    cin>>sexo;
    cout<<"Digite a sua altura(metros): ";
    cin>>altura;
    cout<<endl<<"O seu peso ideal e "<<pesoideal(altura,sexo)<<" Kg."<<endl;
}
