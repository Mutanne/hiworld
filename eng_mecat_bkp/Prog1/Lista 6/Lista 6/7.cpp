#include<iostream>
using namespace std;
int main(){
    int n, b=0, a=2, a1=1, a2=0, c;    
    cin>>n;
        
    while(a<=n){  
                
                for( ; a1<=a ; a1++){
                                     if(a%a1==0){
                                                 a2++;}
                                     }                                                
                if(a2==2){
                          cout<<a<<"\n";
                          b++;
                          }
                a++;
                a1=1;
                a2=0;                                           
                 }              
    //system("pause");
}
