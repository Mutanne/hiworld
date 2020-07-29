#include<iostream>
using namespace std;
int main(){
    int a=0, i, t=0,M[26],b=0,r=0;
 
    char valor[4];
    
    for(t=0 ; a!=1 ;r=0){
       cout<<"Digite a expressao ou SAIR para fechar: ";
       gets(valor);
           
                               
       for(a=0,i=0; valor[0]>='a' || valor[i] != '\0'; i++){
                                          valor[i] = toupper(valor[i]);}              
       if(valor[0]==83&& valor[1]==65&& valor[2]==73&& valor[3]==82){ a++;}   
  
      
             
             if(valor[4]=='+'){
                    if(valor[0]<=57&&valor[2]<=57){
                                                   r=(valor[2]-48)+(valor[0]-48);}
                    else if(valor[0]>='A'||valor[2]>='A'){
                         if(valor[0]>='A'){ 
                                              b=valor[0]-64;
                                              valor[0]=M[b];
                                              }
                         b=0;
                         if(valor[2]-'A'>=0){ b=valor[2]-65;
                                              valor[0]=M[b];
                                              }
                         r=valor[2]+valor[0];}                        
                                             
                    } 
                    
       t++;M[t]=r;      
       cout<<"Resultado: "<<r<<" M[";if(t<=9){cout<<"0";}cout<<t<<"]"<<"\n";}
       if(t=='Z'){ t='A';}

  }
