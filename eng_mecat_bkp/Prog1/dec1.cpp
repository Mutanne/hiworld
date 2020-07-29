//nome do programa: decrescente1
#include<iostream>
using namespace std;
int main(){
    int x, y, w;    
    cin>>x;   
    cin>>y;  
    cin>>w; 
    
    if(x>y && x>w && y>w){
           cout<<x<<";"<<y<<";"<<w<<"\n";
           }
    if(x>y && x>w && y<w){
           cout<<x<<";"<<w<<";"<<y<<"\n";
           }
    if(y>x && y>w && x>w){
           cout<<y<<";"<<x<<";"<<w<<"\n";
           }
    if(y>x && y>w && x<w){
           cout<<y<<";"<<w<<";"<<x<<"\n";
           }
    if(w>y && w>x && y>x){
           cout<<w<<";"<<y<<";"<<x<<"\n";
           }   
    if(w>y && w>x && y<x){
           cout<<w<<";"<<x<<";"<<y<<"\n";
           }
    
    
    if(x>y && x>w && w==y){
           cout<<x<<";"<<y<<";"<<w<<"\n";
           }
    if(y>x && y>w && x==w){
           cout<<y<<";"<<x<<";"<<w<<"\n";
           }
    if(w>y && w>x && x==y){
           cout<<w<<";"<<y<<";"<<x<<"\n";
           }   
    
    system("pause");
}
