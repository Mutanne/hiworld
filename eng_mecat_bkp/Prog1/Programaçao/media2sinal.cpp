/*Programa para mostrar a media de 2 notas informadas pelo usuario.
A media sera exibida somente se o user informar 2 notas validas.
*/
#include<iostream>
using namespace std;
 
int main(){
    float n1, n2, med;
    int sinal;
    sinal = 0;
    cout<<"Digite a primeira nota: ";
    cin>>n1;
    cout<<"Digite a segunda nota: ";
    cin>>n2;
    cout<<"\n";
    if(n1<0 || n1>10 || n2<0 || n2>10 ){
            sinal = 100;
           }        
    if(sinal==0){
           med = (n1+n2)/2;
           cout<<"A sua media e "<<med<<"\n"<<"\n";
           }
     if(sinal==100){
           cout<<"Alguma das notas ou ambas esta invalida"<<"\n"<<"\n";
           }
     system("pause");
    
}
