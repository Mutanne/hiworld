#include<iostream>
using namespace std;
int main(){
    int n, b=1, a=1, r=1, R=0;    
    cin>>n;
        
    while(n>=0){            
                while(a<=n){                  
                        r=r*a;
                        a++;          
                        }
                R+=r;        
                n--;
                a=1;
                r=1;                           
                }  
    cout<<R<<"\n";       
    //system("pause");
}
