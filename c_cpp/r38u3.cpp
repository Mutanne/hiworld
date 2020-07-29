#include <iostream>
using namespace std;

//funcoes.


// entrada principal
int main(void){
void logar(void);
    logar();
    return 0;
}


//comandos .
//entrada sistema.
void logar(void){
    int op;
    
    while(1){
        
        cout<<"\n## Login do sistema.\n";
        cout<< "Escolha uma opção:\n\n";
        
        cout<<" 0-Configuracoes.\n\n";
        
        cout<<"Opcao: ";
        cin>>op;
        switch(op){
        
            case 0:
                void configuracoes(void);
                configuracoes();
                break;
            
            default:
                cout<<"\n## Opcao invalida.##\n"; 
        }
    }
}

void configuracoes(void){
    int op;
    
    cout<<"\n ## Configuracoes.\n";
    cout<< "Escolha uma opcao:\n\n";
    
    cout<<" 0-Nome.\n\n";
    
    cout<< "Opção: ";
    cin>> op;
    
    switch(op){
        case 0:
            void nomemoeda(void);
            nomemoeda();
            break;
        default:
            cout<<"\n##opcao nao aceita##\n\n";
    }
}

class Config{
    public: 
    
    void nomemoeda(void);
    private:
    
    char nomebase[20];
    char sigla[4];
    char nome[26];
};
void Config::nomemoeda(void){
    cout<<"\n## Escolha um nome padrão.\n\n";
    
}