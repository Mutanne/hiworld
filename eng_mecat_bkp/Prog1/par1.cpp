//nome do programa:par1
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    int x, y, z;    
    cin>>x;   
    y=2;
    
    z = x%y;
    
    if(z == 0){
           //cout<<"PAR";
           MessageBox(NULL, "PAR", "Resultado", MB_OK);
           return 0;
           }
    else if(z != 0){
           //cout<<"IMPAR";
           MessageBox(NULL, "IMPAR", "Resultado", MB_OK);
           return 0;
           }
    //system("pause");
}
