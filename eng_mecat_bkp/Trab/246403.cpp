#include <iostream>
using namespace std;

#include "16-pilha-final.hpp"

void menu(int &opc)
{
    cout << "\n\nEscolha uma das opções:\n"
         << "1. Empilhar\n"
         << "2. Desempilhar\n"
         << "3. Listar\n"
         << "4. Sair\n\n"
         << "Opção: ";

    cin >> opc;
}

int main()
{
    int opc;
    elemento *topo = NULL;

    do
    {
        menu(opc);

        switch(opc)
        {
            case 1:
                empilhar(&topo);
                break;
            case 2:
                desempilhar(&topo);
                break;
            case 3:
                listar(topo);
                break;
            case 4:
                break;
            default:
                cout << "Opção inválida.\n";
        }
        
    } while (opc != 4);

    return 0;
}
