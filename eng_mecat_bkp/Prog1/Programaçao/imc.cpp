#include<iostream>
using namespace std;

int main(){
    float metros, h2, kg, imc;
    
    cout<<"Digite a sua altura exemplo(n.nn) e aperte enter";
    cin>>metros;
       
    cout<<"Digite a seu peso exemplo(n.nn) e aperte enter";
    cin>>kg;
       
    imc = kg/(metros*metros);
    cout<<"seu imc e ="<<imc<<"\n";
    
    system("pause");
}
