#include<test.h>
using namespace qtd_n;
int main(){
    for(int i=0;i<10;i++){
        cout<<"Digite o "<<i<<" valor: ";
        cin>>a[i];
    }
    qtd=op(a);
    for(int i=qtd;i>0;i--){
        cout<<"#";
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<"#"<<a[i];
    }
    cout<<"#"<<endl;;
    for(int i=qtd;i>0;i--){
        cout<<"#";
    }
    cout<<endl<<endl;
}
