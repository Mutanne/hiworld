#include<iostream>
using namespace std;
int main(){
    int n, a1, a2;
    cin>>n;
    a1=0;
    a2=0;
    if(n<0 || n>1000000){
           cout<<"erro\n";
           }           
    
    
    else{    
         do{
             a1+=1;
             if(n%a1==0){
                          a2++;
                         }                         
         }while(a1!=n);
          if(a2==2 || a2==1){
                    cout<<"YES\n";
                    }
          else{
               cout<<"NO\n";
               }              
         }
    system("pause");
}
