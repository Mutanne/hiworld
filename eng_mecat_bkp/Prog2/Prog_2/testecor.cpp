/*Color Codes:
0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White  */
// como mudar cor de fundo e do texto. system("COLOR <fundo><texto> ");
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    system("COLOR 1c ");
    system("TITLE Teste 0 ");
    cout<<"Hello!"<<endl;
    system("pause");
    system ("color 17");
    system ("title EXEMPLO DE COMANDOS");
    printf ("Programa executado em:\n");
    system ("cd");
    printf ("\nRodando em sistema:");
    system ("ver");
    printf ("\nNo volume:\n");
    system ("vol");
    printf ("\n");
    printf ("Verificando memoria...");
    system ("mem");
    printf ("\n");
    system ("pause");
    system ("cls");
    system ("color 80");
    printf ("programa completamente executado em\n");
    system ("date/t");
    printf ("as ");
    system ("time/t");
    printf ("\n\n");
    system ("pause");
}
