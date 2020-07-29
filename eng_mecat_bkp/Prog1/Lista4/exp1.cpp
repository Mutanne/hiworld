#include<iostream>
using namespace std;
int main(){
    int b, p, a;
    cin>>b;
    cin>>p;
    a=b;
    if(b<-10000 || b>10000 || p>1000){
           cout<<"erro"<<"\n";
           }
    else{     
         do{                          
            b*=a; 
            p-=1;            
            }while(1!=p);            
         cout<<b<<"\n";                      
         }    
    //system("pause");
}
