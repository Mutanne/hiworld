#include<iostream>
using namespace std;
//calcula a area e o perimetro de uma circunferencia em 2 funçoes diferentes
float area(float raio){
    return 3.14*raio*raio;    //retorna o valor da area
}
float perimetro(float raio){
    return 2*3.14*raio;        //retorna o valor do perimetro
}
int main(void){
    float raio;
    cout<<"Digite o raio: ";
    cin>>raio;
    cout<<endl<<"Area = "<<area(raio)<<endl;
    cout<<"Perimetro = "<<perimetro(raio)<<endl;
}
