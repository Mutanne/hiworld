#include<iostream>
using namespace std;
int main(){
    int n, a, l, p;
    int lados = 0;
    cin>>n;
    cin>>a;
    cin>>l;
    cin>>p;
    n*=2;
    
    if(l<n){
             lados++;
             }
    if(a<n){
             lados++;
             }
    if(p<n){
             lados++;
             }
    if(lados == 0){
             cout<<"YES";
             }
    else{
         cout<<lados;
         }         
                       
    //system("pause");
}
