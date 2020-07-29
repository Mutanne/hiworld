#include<iostream>
using namespace std;
int main(){
    int a, a1, a2, b, b1, b2, c, c1, c2;
    cin>>a;
    cin>>a1;
    cin>>a2;
    cin>>b;
    cin>>b1;
    cin>>b2;
    cin>>c;
    cin>>c1;
    cin>>c2;
    
    if(a==1){
             //john escolheu par
             if(((a1+a2)%2)==0){
                                a = 1;
                                } 
             else{
                  a = 2;
                  }
             }
    else if(a==2){
             //john escolheu impar
             if(((a1+a2)%2)!=0){
                                a = 1;
                                }
             else{
                  a = 2;
                  }
             }
    if(b==1){
             //john escolheu par
             if(((b1+b2)%2)==0){
                                b=1;
                                }
             else{
                  b=2;
                  }
             }
    else if(b==2){
             //john escolheu impar
             if(((b1+b2)%2)!=0){
                                b=1;
                                }
             else{
                  b=2;
                  }
             }
    if(c==1){
             //john escolheu par
             if(((c1+c2)%2)==0){
                                c=1;
                                }
             else{
                  c=2;
                  }
             }
    else if(c==2){
             //john escolheu impar
             if(((c1+c2)%2)!=0){
                                c=1;
                                }
             else{
                  c=2;
                  }
             }
    if((a+b+c)==3 || (a+b+c)==4){
            cout<<"JOHN";
            }
    else{
         cout<<"PETER";
         }
            
    //system("pause");
}
