#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    while(n!=0){
            c*=10;
            c+=(n%8);
            n/=8;
            }
    c*=2;
    cout<<c;
    system("pause");
}
