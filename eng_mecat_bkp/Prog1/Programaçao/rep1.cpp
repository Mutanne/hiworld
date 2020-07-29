#include<iostream>
using namespace std;
//do-while
int main(){
    int n, aux;
    cin>>n;
    aux = 1;
    if(n<=0){
             cout<<"Apenas numeros positivos sao validos";
             }
    else{
         do{
            cout<<aux;
            if(aux!=n){
                       cout<<"-";}                       
            aux++;
         }while(n>=aux);
    cout<<"\n";
    }
    
    system("pause");    
}
