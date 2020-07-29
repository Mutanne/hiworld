#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
#define pi 3.1415926535
int main(){
    float lados[3],hipo,angulos[2];
    char sai;
    do{
        system("color f0");
        system("cls");
		cout<<"Digite os lados do triangulo.\n"
			<<"Lado 1: ";
		cin>>lados[0];
		cout<<"Lado 2: ";
		cin>>lados[1];
		cout<<"Lado 3: ";
		cin>>lados[2];

		if(lados[0]==lados[1]==lados[2] ){
			cout<<"Nao formam um triangulo retangulo.\n";
		}
		else if( lados[0]==lados[1]||lados[0]==lados[2]||lados[1]==lados[2] ){
			cout<<"Nao formam um triangulo retangulo.\n";
		}
		//----------------------------------------------------------------------
		else{
            hipo=0;
			for(int i=0; i<3; i++){
				if(lados[i]>hipo){
					hipo=i;	//acha a possivel hipotenusa(maior dos lados)
				}
			}
			if(hipo==0){
				angulos[0]=atan(lados[1]/lados[2]);
				angulos[1]=atan(lados[2]/lados[1]);
				if((angulos[0]+angulos[1])>=(pi/2)-0.3 && (angulos[0]+angulos[1])<=(pi/2)+0.3){
                    cout<<"E um triagulo retango.\n\n";
				}
				else{
                    cout<<"Nao e um triagulo retango.\n\n";
				}
			}
			else if(hipo==1){
				angulos[0]=1/(tan(lados[0]/lados[2]));
				angulos[1]=1/(tan(lados[2]/lados[0]));
				if((angulos[0]+angulos[1])>=(pi/2)-0.3 && (angulos[0]+angulos[1])<=(pi/2)+0.3){
                    cout<<"E um triagulo retango.\n\n";
				}
				else{
                    cout<<"Nao e um triagulo retango.\n\n";
				}
			}
			else if(hipo==2){
				angulos[0]=1/(tan(lados[1]/lados[0]));
				angulos[1]=1/(tan(lados[0]/lados[1]));
				if((angulos[0]+angulos[1])>=(pi/2)-0.3 && (angulos[0]+angulos[1])<=(pi/2)+0.3){
                    cout<<"E um triagulo retango.\n\n";
				}
				else{
                    cout<<"Nao e um triagulo retango.\n\n";
				}
			}
		}

        cout<<"Digite \"C\" p continuar,outra letra para sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
