#include<iostream>

using namespace std;
int main(){
    int x, y=0, z=0, a=1; 
    cin>>x;
    
    do{
           x-=a;
           a=a+2;
           z++;
       }while(a<=x);    
    cout<<z<<"\n";
    //system("pause");
}
