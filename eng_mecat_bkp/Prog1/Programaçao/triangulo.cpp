#include<iostream>

using namespace std;
int main(){
    int lado1, lado2, lado3;
    
    cout<<"Digite a medida do primeiro lado   "<<"\n";
    cin>>lado1;
    cout<<"Digite a medida do segundo lado   "<<"\n";
    cin>>lado2;
    cout<<"Digite a medida do terceiro lado   "<<"\n";
    cin>>lado3;
    
    if (lado1 == lado2 & lado2 == lado3){
                           cout<<"E um triangulo Equilatero"<<"\n";
                           }
    if (lado1 != lado2 & lado1!= lado3 & lado2 != lado3){
                           cout<<"E um triangulo Escaleno"<<"\n";
                           }                                                  
    if (lado1 != lado2 & lado1 == lado3){
                           cout<<"E um triangulo Isosceles"<<"\n";
                           }                           
    if (lado1 == lado2 & lado1 != lado3){
                           cout<<"E um triangulo Isosceles"<<"\n";
                           }                            
    if (lado2 == lado3 & lado2 != lado1){
                           cout<<"E um triangulo Isosceles"<<"\n";
                           }                                               
    system("pause");                         
}


