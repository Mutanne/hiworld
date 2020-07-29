#include<iostream>

using namespace std;
  /*Crie um programa para converter graus Celsius para graus Farenheit. 
  O usuário informará a quantidade de graus Celsius e o programa deve 
  exibir a quantidade de graus Farenheit. F = C × 1,8 + 32.
  */
int main(){
    float temp, f, c;
    cout<<"Conversor de graus Celsius para graus Farenheit"<<"\n"<<"\n";
    cout<<"Digite a temperatura em graus Celcius (n.nn)";
    cin>>c;
    cout<<"\n";
    
    f = c*1.8+32;
    cout<<"A temperatura em graus Farenheit e "<<f<<"."<<"\n"<<"\n";
    system("pause");
}
