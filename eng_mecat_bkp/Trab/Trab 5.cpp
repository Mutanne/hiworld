//Criar um programa que organize a quantidade de componentes eletrônicos
#include <iostream>
#include <stdlib.h>

using namespace std;

// estrutura de dados
struct eletronicos{
    // dados 
    int capacitor;
    int indutor;
    int resistor;

    // ponteiro para o próximo elemento
    eletronicos *abaixo;
};

int opcao();
void listar(eletronicos *p);
eletronicos *empilhar(eletronicos *p);
eletronicos *desempilhar(eletronicos *p);

int main(){

    eletronicos *topo = NULL;
    int opc;

    do {
        system("color 80");
        system("cls");
        opc = opcao();

        switch(opc)
        {
        case 1:
            topo = empilhar(topo);
            break;
        case 2:
            topo = desempilhar(topo);
            break;
        case 3:
            listar(topo);
            system("pause");
            break;
        case 4:
            cout << "Ate xD...\n";
            system("pause");
            break;
        default:
            cout << "Opcao invalida.\n";
            system("pause");
        }
        
    } while (opc != 4);

    return 0;
}


int opcao(){
    cout << "\n\nMENU DE OPCOES:\n\n"
         << "1. Empilhar\n"
         << "2. Desempilhar\n"
         << "3. Listar\n"
         << "4. Sair\n\n"
         << "Sua opcao: ";

    int j;
    cin >> j;

    return j;
}


void listar(eletronicos *n){
    cout << "\nListando dados empilhados:\n";

    
    while(n != NULL)
    {
      
        cout << n->capacitor << "\t"
             << n->indutor << "\t"
             << n->resistor << "\n";

        
        n = n->abaixo;
    }
}



eletronicos *empilhar(eletronicos *n){
    eletronicos *novo = new eletronicos;
    cout << "Capacitor: ";
    cin >> novo->capacitor;

    cout << "Indutor: ";
    cin >> novo->indutor;

    cout << "Resistor: ";
    cin >> novo->resistor;
    novo->abaixo = n;
    return novo;
}


eletronicos *desempilhar(eletronicos *n){

    if (n != NULL)
    {
        eletronicos *temp = n;
        n = n->abaixo;
        delete temp;
    }

    return n;
}
