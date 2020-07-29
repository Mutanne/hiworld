#include<iostream>

using namespace std;
  /*Crie um programa para converter graus Farenheit para graus Celsius. 
  O usuário informará a quantidade de graus Farenheit e o programa deve 
  exibir a quantidade de graus Celsius. C = (F 32) / 1,8.
  */
int main(){
    float temp, f, c;
    cout<<"Conversor de graus Farenheit para graus Celsius"<<"\n"<<"\n";
    cout<<"Digite a temperatura em graus Farenheit (n.nn)";
    cin>>f;
    cout<<"\n";
    
    c = (f-32)/1.8;
    cout<<"A temperatura em graus Celcius e "<<c<<"."<<"\n"<<"\n"<<"\n"<<"\n";
    system("pause");
}
