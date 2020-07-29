#include<iostream>
#include<stdlib.h>
using namespace std;
int matrics[61], ac[60],fpI[80];

void recebe(int ac[60],int fpI[80]);
void compara(int ac[60],int fpI[80]);

int main(){
	char sair;
	system("color f0");
    do{
    	system("cls");
	    recebe(ac,fpI);
	    compara(ac,fpI);
	    cout<<"\nExistem "<<matrics[0]<<" alunos cursando ambos os cursos.\n\n";
		system("pause");
	    system("cls");
	    cout<<"Digite \"S\" para continuar,qualquer outra letra para sair: ";
	    cin>>sair;
    }while(sair=='s'||sair=='S');
    cout<<"Ate mais...\n\n";
    system("pause");
}
void recebe(int ac[60],int fpI[80]){
    cout<<"Entre com as matriculas dos alunos de Arquiretura d Computadores:\nDigite 9999 apos digita-las.\n";
    for(int i=0; i<60; i++){
        cout<<"Aluno "<<i+1<<": ";
        cin>>ac[i];
        if(ac[i]==9999){
            i=60;
        }
    }
    cout<<"Entre com as matriculas dos alunos de Fundamentos de Programacao I:\nDigite 9999 apos digita-las.\n";
    for(int i=0;i<80;i++){
        cout<<"Aluno "<<i+1<<": ";
        cin>>fpI[i];
        if(fpI[i]==9999){
            i=80;
        }
    }
}
void compara(int ac[60],int fpI[80]){
    matrics[0]=0;
    for(int i=0; i<60&&ac[i]!=9999; i++){
        for(int j=0; j<80&&fpI[j]!=9999; j++){
            if(ac[i]==fpI[j]){
                matrics[0]++;
                matrics[i+1]=ac[i];
            }
        }
    }
}


