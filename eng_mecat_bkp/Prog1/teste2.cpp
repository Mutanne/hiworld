#include<iostream>
using namespace std;

int main(){
    float a11, a12, a21, a22, b11, b12, b21, b22, c11, c12, c21, c22 ;
    cout<<"De acordo com a matriz M=|m11  m12"<<"|"<<"\n";  
    cout<<"                         |m21  m22"<<"|"<<"\n";
    
    cout<<"Digite A11, A12, A21, A22, respectivamente"<<"\n";
    cin>>a11;
    cin>>a12;
    cin>>a21;
    cin>>a22;
    
    cout<<"Digite B11, B12, B21, B22, respectivamente"<<"\n";
    cin>>b11;
    cin>>b12;
    cin>>b21;
    cin>>b22;
    cout<<"\n";
    
    c11=(a11*b11)+(a12*b21);
    c12=(a11*b12)+(a12*b22);
    c21=(a21*b11)+(a22*b21);
    c22=(a21*b12)+(a22*b22);
    
    cout<<"Matriz C=|"<<c11<<"  "<<c12<<"|"<<"\n";
    cout<<"         |"<<c21<<"  "<<c22<<"|"<<"\n";
    system("pause");
    
}
