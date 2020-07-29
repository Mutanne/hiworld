#include<iostream>
#include<stdlib.h>
using namespace std;
void recebev(int vet[10],int p){
    if(p<10){
        cout<<"Digite a posicao "<<p<<" do vetor: ";
        cin>>vet[p];
        recebev(vet,p+1);
    }
}
int Mm(int vet[10],int i,int M[2],int m[2] ){
    if(i<10){
        if(vet[i]>M[0]) { M[0]=vet[i]; M[1]=i; }
        if(vet[i]<m[0]) { m[0]=vet[i]; m[1]=i; }
        return Mm(vet,i+1,M,m);
    }
    cout<<"\n"<<"O Maior e "<<M[0]<<" na posicao "<<M[1]<<"\n";
    cout<<"O menor e "<<m[0]<<" na posicao "<<m[1]<<"\n\n";
    system("pause");
}
int main(){
    int vet[10],i=0,M[2],m[2];
    char sair;
    system("color f0");
    do{
        recebev(vet,i);
        M[0]=vet[0];
        m[0]=vet[0];
        M[1]=0;
        m[1]=0;
        Mm(vet,i,M,m);
        system("cls");
        cout<<"digite \"n\" para continuar, ou qualquer outra coisa para sair: ";
        cin>>sair;
        system("cls");
    }while(sair=='n' || sair=='N');
    cout<<"Ate mais... \n\n";
    system("pause");
}
