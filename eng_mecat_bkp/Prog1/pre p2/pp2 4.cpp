#include<iostream>
using namespace std;
int main(){
    int n, r=0, x=0;
    cin>>n;
    while(n!=0){
                x=n%10;
                n/=10;
                r+=x;
                }
    if(r%2==0){ 
                cout<<"Y"<<"\n"<<r<<"\n";}
    else{ 
                cout<<"N"<<"\n"<<r<<"\n";}  
    //system("pause");   
}
