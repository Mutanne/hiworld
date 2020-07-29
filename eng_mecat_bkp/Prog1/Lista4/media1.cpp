#include<iostream>
using namespace std;
int main(){
    int n, a, b, c;
    cin>>n;
    a=0;
    b=0;
    c=0;
    if(n<2 || n>10000){
           cout<<"erro\n";
           }
    else{
         do{
                          a++;
                          cin>>b;
                          c+=b;
            }while(a!=n);
         c/=n;
         cout<<c<<"\n";
         }                     

    system("pause");
}
