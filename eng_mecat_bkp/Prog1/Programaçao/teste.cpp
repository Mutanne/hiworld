#include<iostream>
using namespace std;
 
int main(){
    float v1, v2, v3, vs;
    cout<<"Digite um valor";
    cin>>v1;
    cout<<"Digite outro valor";
    cin>>v2;
    cout<<"Digite mais um valor";
    cin>>v3;
    cout<<"\n";
    
    if(v1>v3 & v2>v3){
             vs = v1+v2;
             cout<<"A soma do 1 e 2 e "<<vs<<"\n"<<"\n";
             }
    else if(v1>v2 & v3>v2){
             vs = v1+v3;
             cout<<"A soma do 1 e 3 e "<<vs<<"\n"<<"\n";
             }
    else if(v2>v1 & v3>v1){
             vs = v2+v3;
             cout<<"A soma do 3 e 2 e "<<vs<<"\n"<<"\n";
             }
    system("pause");
}
