#include<iostream>
using namespace std;
int main(){
    int n, a;
    cin>>n;
    a=0;
    
    if(n<0 || n>1000000){
           cout<<"erro"<<"\n";
           }
            
    else {
           if(n%2==0){
                   do{
                          a+=2;
                          cout<<a<<"\n";                    
            
                      }while(a!=n);
                   }
           else{
               n-=1;
                   do{
                      a+=2;
                      cout<<a<<"\n";                     
            
                      }while(a!=n);
              }
         }          
    
    //system("pause");
}
