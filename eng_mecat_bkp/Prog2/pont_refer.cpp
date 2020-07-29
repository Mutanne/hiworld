#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	// var int, poteiro aponta p "a","q" aponta p ender de "a"
	int a, *p=&a, *q;
	q=&a;
	cout<<"Digite um numero: ";
	cin>>a;
	*q+=100;
	cout<<"a = "<<a<<endl
		<<"ender. de a = "<<&a<<endl
		<<"valor de p = "<<p<<endl
		<<"valor de *p = "<<*p<<endl;
}
