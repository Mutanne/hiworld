#include<iostream>
using namespace std;
int main(){
    int n, x, a=0, i1=0, i2=0;
    cin>>n;
        
    while(a<n){
                cin>>x;
                if(x%2!=0){
                        if(x>i1){
                                 i1=x;}
                        if(i2==0 || x<i2){
                                 i2=x;}                              
                        }
                a++;
                }
    cout<<i1<<" "<<i2<<"\n";
       
    system("pause");
}
