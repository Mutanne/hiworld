/*Programa para mostrar a media de 2 notas informadas pelo usuario.
A media sera exibida somente se o user informar 2 notas validas.
*/
#include<iostream>
using namespace std;
 
int main(){
    float n1, n2, med;
    cout<<"Digite a primeira nota: ";
    cin>>n1;
    cout<<"Digite a segunda nota: ";
    cin>>n2;
    cout<<"\n";
    if(n1>10 || n1<0){
           cout<<"Nota 1 invalida.Digite entre 0 e 10."<<"\n"<<"\n";
           }
    
    if(n2>10 || n2<0){
           cout<<"Nota 2 invalida.Digite entre 0 e 10."<<"\n"<<"\n";
           }
            
    if(n1<=10 & n1>=0 & n2 <= 10 & n2>=0){
           med = (n1+n2)/2;
           cout<<"A sua media e "<<med<<"\n"<<"\n";
           }
   
           system("pause");
    
}
