#include<iostream>
using namespace std;
int main(){
    int x=1, n, p=2, a=0, c=0;
    cin>>n;
    for(;p<n; p++, x=1, a=0){
            while(x<=p){
                    if(p%x==0){
                               a++;}
                    x++;
                    }
            if(a==2){ 
                     c++;}           
            }
    cout<<c;
    //system("pause");
}
