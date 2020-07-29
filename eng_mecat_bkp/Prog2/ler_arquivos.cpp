#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream arq;
	arq.open("texto.txt");
	string  linha;
	while(getline(arq,linha)){
		cout<<linha<<endl;
	}
	arq.close();
	
}
