//baskara
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,b,c;
float delta;
double x1,x2;
cout<<"Informe o valor de a:\t";
cin>>a;
cout<<"Informe o valor de b:\t";
cin>>b;
cout<<"Informe o valor de c:\t";
cin>>c;
delta=pow(b,2)-(4*a*c);

if(delta<0){
            cout<<"Nao existe raizes reais para esta equacao!";
            }
if(delta==0){
             x1=((b*-1)+sqrt(delta))/2*a;
             cout<<"x1=x2= "<<x1<<"\n"<<"\n";
             }
if(delta>0){
            x1=((b*-1)+sqrt(delta))/2*a;
            x2=((b*-1)-sqrt(delta))/2*a;
            cout<<"x1= "<<x1<<" e x2= "<<x2<<"\n"<<"\n";
            }
system("pause");
}
