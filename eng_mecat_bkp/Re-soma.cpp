#include<iostream>    //versao do Dev, 5.5.3 
using namespace std;  //vide exp caixa elet

int main(){
	int n,i;
	cout<<"Digite o valor: "<<"\n";
	cin>>n;
	cout<<"\n"<<"Quantidade gerada das respectivas notas."<<"\n";
	i=n/50;
	cout<<"R$ 50,00 : "<<i<<"\n";
	n-=(i*50);
	
	i=n/20;
	cout<<"R$ 20,00 : "<<i<<"\n";
	n-=(i*20);
	
	i=n/10;
	cout<<"R$ 10,00 : "<<i<<"\n";
	n-=(i*10);
	
	i=n/5;
	cout<<"R$ 05,00 : "<<i<<"\n";
	n-=(i*5);
	
	i=n/2;
	cout<<"R$ 02,00 : "<<i<<"\n";
	n-=(i*2);
	
	i=n/1;
	cout<<"R$ 01,00 : "<<i<<"\n";
}
