#include<iostream>

using namespace std;

/*
Criar um programa para somar sucessivamente dois 
n�meros inteiros informados pelo usu�rio. Ap�s
a soma de dois n�meros, o programa perguntar�
ao usu�rio se ele deseja realizar outra soma.
Caso o usu�rio digite SIM, o programa realiza
mais uma soma. Do contr�rio, o programa � encerrado.
*/
int main(){
    int n1, n2, r, i;
    char resp[100];
    do{
       system("cls");
       cin>>n1;
       cin>>n2;
       r = n1 + n2;
       cout<<r<<"\n";
       cout<<"Digite S para realizar outra soma: ";
       cin>>resp;
       for(i = 0; resp[i] != '\0'; i++){
           resp[i] = toupper(resp[i]);
       }
    }while(resp[0] == 'S' && resp[1] == 'I' && resp[2] == 'M' && resp[3] == '\0');
}
