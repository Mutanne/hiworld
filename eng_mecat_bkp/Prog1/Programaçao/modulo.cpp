#include<iostream>
using namespace std;
  /*Programa para calcular o modulo da subtração de 2 inteiros informados
  pelo usuario.
  */
int main(){
    float x, y, xy;
    cout<<"Digite o primeiro valor: ";
    cin>>x;
    cout<<"Digite o segundo valor: ";
    cin>>y;
    cout<<"\n";
    xy = x-y;    
    if(xy >= 0){
           cout<<"O resultado em modulo e: "<<xy<<"\n"<<"\n";
           }
    if(xy < 0){
          xy = xy*-1;
           cout<<"A subtracao em modulo e: "<<xy<<"\n"<<"\n";
           }
           system("pause");
    
}
