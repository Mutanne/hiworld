#include<iostream>
#include<stdlib.h>
using namespace std;
struct Boletim{
	float matematica,portugues,ingles;
};
struct Aluno{
	int rm;
	string nome;
	Boletim notas;
};

int main(){
	Aluno a;
	a.rm=15325;
	a.nome="Chapolin Wayne";
	Boletim b;
	b.matematica=9.5;
	b.portugues=7.8;
	b.ingles=6.5;
	//atribuir o boletim ao aluno
	a.notas=b;
	cout<<"Notas do aluno \""<<a.nome<<"\":\n"
		<<a.notas.portugues<<endl
		<<a.notas.matematica<<endl
		<<a.notas.ingles<<endl;
}
