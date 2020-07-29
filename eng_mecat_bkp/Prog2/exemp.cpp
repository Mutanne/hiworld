#include<iostream>
#include<stdlib.h>
using namespace std;
void preencher(int v[8]){
	for( int i=0; i<8;i++ ){
		cout<<"Informe um numero:";
		cin>>v[i];
    }
}
void listar(int v[8]){
	for( int i=0; i<8;i++ )
		cout<<v[i]<<endl;
}
void listar_invertido(int v[8]){
	for( int i=7; i>=0;i-- )
		cout<<v[i]<<endl;
}
void listar_pares(int v[8]){
	for( int i=0; i<8;i++ )
		if(v[i]%2==0)
			cout<<v[i]<<endl;
		else
			cout<<"\t"<<endl;
}

int main(){
	int v[8];
	preencher(v);
	cout<<"\n Listando valores... \n";
	listar(v);
	cout<<"\n Listando valores invertido... \n";
	listar_invertido(v);
	cout<<"\n Listando valores pares... \n";
	listar_pares(v);
	system("pause");
}





