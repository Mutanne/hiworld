#include<iostream>
using namespace std;
int main(){
    int c=200, a=0, i, vint[c], b=0, d=50, v[d], e=50, op[e], t=50;
    float r=0, M[t];
    char valor[c];
    for(c=0,t=0 ; a!=1 ;r=0){
       b=0;
       while(b!=200){ vint[b]=0; b++;}
       d=0;
       while(d!=50){ v[d]=0; d++;}
       d=01;
       cout<<"Digite a expressao ou SAIR para fechar: ";
       gets(valor);
       b=0;c=0;e=0;r=0;
       if(valor[c]=='m'){valor[c]=toupper(valor[c]);} 
       
       if(valor[c]>=48&&valor[c]<=57||valor[c]=='M'){
       while(valor[c]!='\0'&&(valor[c]>='+'||valor[c]=='M')){
                            if(valor[c]=='m'){valor[c]=toupper(valor[c]);}
                            while(valor[c]!=32&&(valor[c]>='+'||valor[c]=='M')){
                                  if(valor[c]>='0' && valor[c]<='9'){
                                       vint[b]+=valor[c]-48;
                                       vint[b]*=10;}
                                  if(valor[c]=='+'||valor[c]=='-'){
                                       op[e]=valor[c];e++;}
                                  if(valor[c]=='M'){
                                       if(valor[c+2]=='0'){ a+=valor[c+3]-48;}
                                       
                                       else if(valor[c+2]>='1'&&valor[c+2]<='9'&&valor[c+3]==']'){ a+=valor[c+2]-48;}
                                       
                                       else{a+=valor[c+2]-48;a*=10;
                                              a+=valor[c+3]-48;}
                                  }
                                  c++;}
                           vint[b]/=10;if(a!=0){ v[d]=M[a];}else{ v[d]=vint[b];}
                           vint[b]=0;d++;c++;a=0;        
       }{
       e=0; d=1; c=0;
       for(; op[e]=='+'||op[e]=='-' ;){
               if(e==0 && op[e]=='+'){
                    r=v[d]+v[d+1]; d=3; e++;}
               if(e==0 && op[e]=='-'){
                    r=v[d]-v[d+1]; d=3; e++;}
               if(e!=0 && op[e]=='+'){
                    r+=v[d]; d++; e++;}
               if(e!=0 && op[e]=='-'){
                    r-=v[d]; d++; e++;}        
       }
       t++;M[t]=r;      
       cout<<"Resultado: "<<r<<" M[";if(t<=9){cout<<"0";}cout<<t<<"]"<<"\n";}
       if(t==50){ t=0;}    
       }                        
       for(a=0,i=0; valor[0]>='a' || valor[i] != '\0'; i++){
                                          valor[i] = toupper(valor[i]);}              
       if(valor[0]==83&& valor[1]==65&& valor[2]==73&& valor[3]==82){ a++;}   
    }}

