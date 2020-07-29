#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int *p =new int; //ou int *p; p=new int;
	cout<<"Endereco alocado: "<<p<<endl
		<<"Digite um numero: ";
	cin>>*p;
	cout<<"Valor informado: "<<*p<<endl<<endl;
	delete p;
	return 0;
}
