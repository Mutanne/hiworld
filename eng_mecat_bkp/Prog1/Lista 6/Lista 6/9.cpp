#include<iostream>
using namespace std;
int main(){
    int x, y, n;    
    cin>>x;
    cin>>y;
    n=x;
        
    while(n>=x && n<=y){
               if(n%7==0){
                          cout<<n<<"-";}
                          
               n++;
            }              
    //system("pause");
}
