#include<iostream>
using namespace std;

int main(){
    float deta, a11, a12, a13, a21, a22, a23, a31, a32, a33;
    cout<<"De acordo com a matriz M=|m11  m12  m13"<<"|"<<"\n";  
    cout<<"                         |m21  m22  m23"<<"|"<<"\n";
    cout<<"                         |m31  m32  m33"<<"|"<<"\n"<<"\n";
    
    cout<<"Digite os valores na ordem m11,m12,m13,m21,m22..."<<"\n";
    cin>>a11;
    cin>>a12;
    cin>>a13;
      cin>>a21;
      cin>>a22;
      cin>>a23;
    cin>>a31;
    cin>>a32;
    cin>>a33;
    
    
    deta = ((a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32));
    deta -= ((a31*a22*a13)+(a32*a23*a11)+(a33*a21*a12));
    
    cout<<"detA= "<<deta<<"\n";
    system("pause");
    
}
