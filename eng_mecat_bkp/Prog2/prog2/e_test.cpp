//recebe os valores de um vetor e os exibe de uma forma interessante
#include<test.h>
using namespace qtd_n;

int main(){
    for(int i=1;i<11;i++){      //recebe os valores do vetor
        cout<<"Digite o "<<i<<" valor: ";
        cin>>a[(i-1)];
    }
    cout<<endl;
    qtd=op(a);
    for(int i=qtd;i>0;i--){     //linha de sustenidos de cima
        cout<<"#";
    }
    cout<<endl;
    for(int i=0;i<10;i++){      //linha com os valores
        cout<<"#"<<a[i];
    }
    cout<<"#"<<endl;;
    for(int i=qtd;i>0;i--){     //linha de sustenidos de baixo
        cout<<"#";
    }
    cout<<endl<<endl;
}
