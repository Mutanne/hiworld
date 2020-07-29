#include<iostream>
using namespace std;

int main(){
	int ano,mes,dia;
	cout<<"ano,mes e dia: \n";
	cin>>ano>>mes>>dia;
	
	if(ano>0){
		if(ano%4==0 && ano%100!=0 || ano%400==0){
			if(mes==2){
				if(dia>=1 && dia<=29){
					cout<<"Data valida \n";					
				}
				else{ cout<<"Dia invalido \n" ;}
			}			
		}
		else{
			if(mes==2){
				if(dia>=1 && dia<=28){
					cout<<"Data valida \n";
				}
				else{ cout<<"Dia invalido \n"; }
			}
		}
		else if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
				if(dia>=1 && dia<=31){
					cout<<"Data valida \n";					
				}
				else{ cout<<"Dia invalido \n"; }
		}
		else if(mes==4||mes==6||mes==9||mes==11){
				if(dia>=1 && dia<=30){
					cout<<"Data valida \n";					
				}
				else{ cout<<"Dia invalido \n"; }
		}
		else{
			cout<<"Mes invalido \n";
		}
	}
	else{
			cout<<"Ano invalido \n";
		}
}
