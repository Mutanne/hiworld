#include<iostream>
using namespace std;
int main(){
    int n, a, l, p;
    cin>>n;
    cin>>a;
    cin>>l;
    cin>>p;
    n*=2;
    if(n<=a && n<=l && n<=p){
             cout<<"YES";
             }
   else if(n<=a && n<=l && n>p || n<=a && n>l && n<=p || n>a && n<=l && n<=p){
             cout<<"1";
             }
   else if(n<=a && n>l && n>p || n>a && n>l && n<=p || n>a && n<=l && n>p){
             cout<<"2";
             }
   else if(n>a && n>l && n>p){
             cout<<"3";
             }
             
                       
    //system("pause");
}
