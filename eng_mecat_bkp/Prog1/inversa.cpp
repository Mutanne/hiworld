#include<iostream>
using namespace std;
//Matriz  Inversa

int main(){
    float a, al, a11, a12, a13, a21, a22, a23, a31, a32, a33;
    float c11, c12, c13, c21, c22, c23, c31, c32, c33; 
    cout<<"Qual a ordem da matriz (somente matriz quadrada)de 2 a 4: ";
    cin>>a;
    if(a==2){
             cout<<"Digite os valores na ordem m11,m12,m21 e m22."<<"\n";
             cin>>a11;
             cin>>a12;
             cin>>a21;
             cin>>a22;          
                                  
             
             system("pause");
             }
    else if(a==3){
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
                      
             c11= (a22*a33)-(a32*a23);
                      
             cout<<""<<c11<<"\n";
             system("pause");
             }
    /*else if(a==4){
             cout<<"Digite os valores na ordem m11,m12,m13,m21,m22..."<<"\n";
             cin>>a11;
             cin>>a12;
             cin>>a13;
             cin>>a14;
               cin>>a21;
               cin>>a22;
               cin>>a23;
               cin>>a24;
             cin>>a31;
             cin>>a32;
             cin>>a33;
             cin>>a34;
               cin>>a41;
               cin>>a42;
               cin>>a43;
               cin>>a44;
                        
             deta = ((a11*a22*a33)+(a12*a23*a31)+(a13*a21*a32));
             deta -= ((a31*a22*a13)+(a32*a23*a11)+(a33*a21*a12));
             cout<<"detA= "<<deta<<"\n";
             system("pause");
             }*/
    
}
