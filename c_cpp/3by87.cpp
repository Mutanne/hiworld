#include <iostream>
using namespace std;

//classes.
class Config{
    public: 
    
    void nomemoeda(void);
    private:
    
    char nomebase[20];
    char sigla[4];
    char nome[26];
};

//funcoes.
void logar(Config& config);
void configuracoes(Config& config);

void Config::nomemoeda(void){
    cout<<"\n## Escolha um nome padrão.\n\n";
    
}


// entrada principal
int main(void){

    Config config;
    logar(config);
    return 0;
}


//comandos .
//entrada sistema.
void logar(Config& config){
    int op;
    
    while(1){
        
        cout<<"\n## Login do sistema.\n";
        cout<< "Escolha uma opção:\n\n";
        
        cout<<" 0-Configuracoes.\n\n";
        
        cout<<"Opcao: ";
        cin>>op;
        switch(op){
        
            case 0:
                configuracoes(config);
                break;
            
            default:
                cout<<"\n## Opcao invalida.##\n"; 
        }
    }
}

void configuracoes(Config& config){
    int op;
    
    cout<<"\n ## Configuracoes.\n";
    cout<< "Escolha uma opcao:\n\n";
    
    cout<<" 0-Nome.\n\n";
    
    cout<< "Opção: ";
    cin>> op;
    
    switch(op){
        case 0:
            config.nomemoeda();
            break;
        default:
            cout<<"\n##opcao nao aceita##\n\n";
    }
}

