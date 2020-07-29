#include<iostream>

using namespace std;

/*
Criar um programa para somar sucessivamente dois 
números inteiros informados pelo usuário. Após
a soma de dois números, o programa perguntará
ao usuário se ele deseja realizar outra soma.
Caso o usuário digite S, o programa realiza
mais uma soma. Do contrário, o programa é encerrado.
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
