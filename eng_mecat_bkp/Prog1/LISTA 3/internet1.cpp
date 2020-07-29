#include<iostream>
using namespace std;
int main(){
    int n; 
    float v;
    cin>>n;
    
    if(n>=0 && n<=15){
            v=15;
            cout<<v;
                     }
    else if(n>=16 && n<=35){
             v = ((n-15)*0.85)+15;
             cout<<v;
             }
    else if(n>=36 && n<=60){
             v= ((n-35)*0.55)+32;
             cout<<v;
             }
    else if(n>=61 && n<=100){
             v= ((n-60)*0.25)+45.75;
             cout<<v;
             }
    else if(n>=101){
             v= ((n-100)*0.1)+55.75;
             cout<<v;
             }
             
//system("pause");    
}
