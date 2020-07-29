#include<iostream>
using namespace std;
void poligono(int n,float cm){
    switch(n){
        case 3:
            cout<<endl<<"TRIANGULO com perimetro = "<<(3*cm)<<" cm."<<endl;
            break;
        case 4:
            cout<<endl<<"QUADRADO com area = "<<(cm*cm)<<" cm^2."<<endl;
            break;
        default:
            cout<<endl<<"PENTAGONO."<<endl;
            break;
    }
}
int main(){
    int faces;
    float lado;
    cout<<"Digite o numero de lados: ";
    cin>>faces;
    if(faces!=5){
        cout<<"Digite a medida do lado (cm): ";
        cin>>lado;
    }
    poligono(faces,lado);
}
