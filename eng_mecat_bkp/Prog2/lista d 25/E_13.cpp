/* IMC
At� 14,5 Desnutri��o
Acima de 14,5 at� 20 Abaixo do peso
Acima de 20 at� 25 Peso Normal
Acima de 25 at� 30 Sobrepeso
Acima de 30 at� 40 Obeso
Acima de 40 Obeso M�rbido
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    float P,E,imc;
    char sai;
    do{
        system("color f0");
        system("cls");
		cout<<"Calcule o IMC.\n"<<"Digite seu peso em Kg: ";
		cin>>P;
		cout<<"Digite a altura em metros: ";
		cin>>E;
		imc=P/(E*E);
		cout<<"IMC = "<<imc<<endl; 
		if( imc<=14.5  ){ 
			cout<<"Esta com Desnutricao\n"; 
		}
		else if( imc<=20  ){ 
			cout<<"Esta Abaixo do peso\n"; 
		}
		else if( imc<=25  ){ 
			cout<<"Esta no Peso Normal\n"; 
		}
		else if( imc<=30  ){ 
			cout<<"Esta com Sobrepeso\n"; 
		}
		else if( imc<=40  ){ 
			cout<<"Esta Obeso\n"; 
		}
		else{
			cout<<"Esta Obeso M�rbido\n";
		}
		
        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}


