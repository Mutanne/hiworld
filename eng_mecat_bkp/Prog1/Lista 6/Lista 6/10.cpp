#include<iostream>
using namespace std;
int main(){
    int x, y, p=0, v=0;    
    cin>>x;
    cin>>y;
    if(x<y){       
    for(x<y ; x<=y ; x++){
             if(x>p && (x%400==0 || x%4==0 && x%100!=0)){
                               p=x;}
             if((x<v || v==0) && (x%400==0 || x%4==0 && x%100!=0)){
                               v=x;}               
                           }
             }
    else if(y<x){
    for(y<x ; y<=x ; y++){
             if(y>p && (y%400==0 || y%4==0 && y%100!=0)){
                               p=y;}
             if((y<v || v==0) && (y%400==0 || y%4==0 && y%100!=0)){
                               v=y;}               
                           }
             }
    cout<<p<<" "<<v<<"\n";              
    //system("pause");
}
