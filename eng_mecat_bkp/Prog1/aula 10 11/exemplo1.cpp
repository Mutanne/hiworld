#include<iostream>

using namespace std;

/*
Criar um programa para somar sucessivamente dois 
n�meros inteiros informados pelo usu�rio. Ap�s
a soma de dois n�meros, o programa perguntar�
ao usu�rio se ele deseja realizar outra soma.
Caso o usu�rio digite S, o programa realiza
mais uma soma. Do contr�rio, o programa � encerrado.
*/
int main(){
    int n1, n2, r;
    char resp;
    do{
       system("cls");
       cin>>n1;
       cin>>n2;
       r = n1 + n2;
       cout<<r<<"\n";
       cout<<"Digite S para realizar outra soma: ";
       cin>>resp;
    }while(resp == 'S' || resp == 's');
}
