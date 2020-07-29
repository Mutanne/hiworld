#include<iostream>
using namespace std;
int main(){
    int n, p=0, q=0;
    while(n!=0){
                cin>>n;            
                if(n%7==0 && n!=0 && n>p){
                                             p=n;}
                if(n%4==0 && n!=0 || n%4==0&&q==0&&n!=0){
                                             q=n;}
                }
    cout<<p<<":"<<q<<"\n";
    //system("pause");
    
}
