#include<iostream>
using namespace std;

int main(){
    //int comporta valores inteiros
    //float comporta valores reais
    float ucdb1, ucdb2, ucdb3;
    
    cout<<"Digite o primeiro numero e aperte enter";
    cin>>ucdb1; //espera usuario digitar um numero
    cout<<"Digite o segundo numero e aperte enter";
    cin>>ucdb2; 
    
    ucdb3 = ucdb1+ucdb2;
    cout<<"Resultado da soma ="<<ucdb3;
    cout<<"\n"; //pula 1 linha
    
    ucdb3 = ucdb1-ucdb2;
    cout<<"Resultado da subtracao ="<<ucdb3<<"\n";
    
    ucdb3 = ucdb1*ucdb2;
    cout<<"Resultado da multiplicacao ="<<ucdb3<<"\n";
    
    ucdb3 = ucdb1/ucdb2;
    cout<<"Resultado da divisao ="<<ucdb3<<"\n";
    
    ucdb3 = ucdb1%ucdb2;
    cout<<"Resultado da divisao ="<<ucdb3<<"\n";
    
    // 7/2 retorna 3
    // 7%2 retorna 1 o resto da divisao
    
    //espera usuario pressionar uma tecla qualquer
    system("pause");
}
    
