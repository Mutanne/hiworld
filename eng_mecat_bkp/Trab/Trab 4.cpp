/*
* Criar um acendedor de leds pela porta paralela do microcontrolador

*/
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
   int opcao;
 
   do
    {
      	cout << ("\n=====Acendedor de Leds=====\n");
      	cout << (" 1.Acender Leds\n");
     	cout << (" 2.Apagar Leds\n");
       	cout << (" 3.Sair\n\n");
      	cout << (" Selecione uma opcao: ");
      cin >>opcao;
       if (opcao == 1)
       {
                  system("color 60");
       	cout << ("=====LEDS ACESOS=======\n");
      //caso a opcao seja 1, acende todos os leds 
       }
       if (opcao == 2)
        {
                   system("color 07");
        cout << ("\n=====LEDS APAGADOS=====\n");	
       //caso a opcao seja 2, apaga todos os leds
        }
   }while (opcao != 3);
   // 
   return 0;
  system("pause");
}
