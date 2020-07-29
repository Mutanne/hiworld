#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//floxo de saida para arquivo
	ofstream arq;
	arq.open("texto.txt");
	arq<<"Eae, d boas?\n";
	arq.close();
	
}
