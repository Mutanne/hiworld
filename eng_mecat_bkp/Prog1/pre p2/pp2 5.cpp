#include<iostream>
using namespace std;
int main(){
    int n, x=1, r=1;
    cin>>n;
    while(x<n){
               r*=x;
               x+=2;
               }
    cout<<r<<"\n";
    //system("pause");
}
