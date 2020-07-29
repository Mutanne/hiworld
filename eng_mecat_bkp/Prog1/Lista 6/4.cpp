#include<iostream>
using namespace std;
int main(){
    int n, a=2, a1=0, a2=0;    
    cin>>n;
        
    while(a<=n){
                a++;
                
                while(a1<a){
                        a1+=1;
                        if(a%a1==0){
                                    a2+=1;}
                        }
                                                        
                if(a2==2){
                          cout<<a<<"-";}                                           
                 }
                 
        
    system("pause");
}
