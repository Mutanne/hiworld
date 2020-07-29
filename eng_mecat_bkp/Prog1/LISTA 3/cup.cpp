#include<iostream>
using namespace std;
int main(){
    int j1, j2, j3, j4, j5, j6, j7;
    cin>>j1;
    cin>>j2;
    cin>>j3;
    cin>>j4;
    cin>>j5;
    cin>>j6;
    cin>>j7;
    if(j1==1 && j5==1 && j7==1){
             cout<<"1";
             }
    else if(j1==2 && j5==1 && j7==1){
             cout<<"2";
             }
    else if(j2==1 && j5==2 && j7==1){
             cout<<"3";
             }          
    else if(j2==2 && j5==2 && j7==1){
             cout<<"4";
             }
    
    else if(j3==1 && j6==1 && j7==2){
             cout<<"5";
             }
    else if(j3==2 && j6==1 && j7==2){
             cout<<"6";
             }
    else if(j4==1 && j6==2 && j7==2){
             cout<<"7";
             }
    else if(j4==2 && j6==2 && j7==2){
             cout<<"8";
             }
    //system("pause");
}
