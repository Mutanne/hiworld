#include<iostream>
using namespace std;
int main(){
    int n, a=0;        
    cin>>n;
    
    int b=n;
      
    for(0<b<1000 ; b>0 ; a++){
                           b/=2;                                                                                     
                           }
    int a1=a, vetor[a];
    for(0<n<1000 ; n>0 ; ){
                              if(n%2==0){
                                         vetor[a]=0;}
                              else{
                                   vetor[a]=1;}
                              n/=2;
                              a--;                                                                                                                     
                           }
    a=1;
    while(a<=a1){
                 cout<<vetor[a];
                 a++;
                 }                           
              
    //system("pause");
}
