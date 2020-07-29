#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n;
    
    if(n<2 || n>10000){
           cout<<"erro\n";
           }
    
    else{
         int a, b, c;
         a=1;
         c=0;
         do{
            cin>>m;
                        
            if(m>a){
                    a=m;                                       
                    }
            
            else{            
                    b=m;
                    }
            c+=1;                                
         }while(c!=n);
         cout<<a<<"\n";
         cout<<b<<"\n";
         
         }  
    
    system("pause");
}
