
#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main ()
{
  double n2, n, r;
  cout<<"Digite um valor: ";
  cin>>n;
  cout<<"\n";
  r = log(n);
  cout<<"O ln de "<<n<<" e= "<<r<<"\n";
  
  r = log10(n);
  cout<<"O log na base 10 de "<<n<<" e= "<<r<<"\n";
  
  r = exp(n);
  cout<<"O exponencial de "<<n<<" e= "<<r<<"\n";
  
  r = pow(n,2);
  cout<<"O resultado de "<<n<<"^2 e= "<<r<<"\n";
  
  r = ldexp(n,2);
  cout<<"O resultado de "<<n<<"x2^2 e= "<<r<<"\n";
  
  r = sqrt(n);
  cout<<"A raiz quad. de "<<n<<" e= "<<r<<"\n";
  system("pause");
}
