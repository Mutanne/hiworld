#include <iostream>
using namespace std;

// estrutura de dados
struct Elemento{
    // dados 
    string nome;
    int idade;
    float salario;

    // ponteiro para o próximo elemento
    Elemento *abaixo;
};

int opcao();
void listar(Elemento *p);
Elemento *empilhar(Elemento *p);
Elemento *desempilhar(Elemento *p);

int main(){

    Elemento *topo = NULL;
    int opc;

    do {

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
            break;
        case 4:
            cout << "Ate logo...\n";
            break;
        default:
            cout << "Opcao invalida.\n";
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

    int i;
    cin >> i;

    return i;
}


void listar(Elemento *p){
    cout << "\nListando dados empilhados:\n";

    
    while(p != NULL)
    {
      
        cout << p->nome << "\t"
             << p->idade << "\t"
             << p->salario << "\n";

        
        p = p->abaixo;
    }
}



Elemento *empilhar(Elemento *p){
    Elemento *novo = new Elemento;
    cout << "Nome: ";
    cin >> novo->nome;

    cout << "Idade: ";
    cin >> novo->idade;

    cout << "Salario: ";
    cin >> novo->salario;
    novo->abaixo = p;
    return novo;
}


Elemento *desempilhar(Elemento *p){

    if (p != NULL)
    {
        Elemento *temp = p;
        p = p->abaixo;
        delete temp;
    }

    return p;
}
