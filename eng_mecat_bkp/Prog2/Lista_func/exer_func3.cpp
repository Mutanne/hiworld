#include<iostream>
using namespace std;
//calcula a area e o perimetro de uma circunferencia em 2 funçoes diferentes
float celsius(float temp){
    return ((temp-32)/9)*5;    //retorna o valor da area
}

int main(void){
    float temp;
    cout<<"Digite a temperatura em F: ";
    cin>>temp;
    cout<<endl<<temp<<" Graus Farenheit equivale a "<<celsius(temp)<<" Graus Celsius."<<endl;
}
