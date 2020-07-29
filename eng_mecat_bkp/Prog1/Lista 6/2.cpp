#include<iostream>
using namespace std;
int main(){
    int n, a=0, p=0, i=0;
        
    while(a>=0){
               cin>>n;
               a=n;
               if(n%2==0 && n>=0){
                          p++;}
               else if(n%2!=0 && n>=0){
                    i++;}
               }
 cout<<p<<"."<<i<<"\n";       
    //system("pause");
}
