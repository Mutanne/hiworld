#include <iostream>
using namespace std;

int main(){
    int a[10],b[10],j=0,qtd=21;

    for(int i=1; i<11 ;i++){
        cout<<"Digite o "<<i<<" valor: ";
        cin>>a[(i-1)];
    }
    for(int i=0; i<10 ;i++){
        b[i]=a[i];
    }
    for(int i=0; i<10 ;i++){
        if(b[i]>=0 && b[i]<=9){
            for(j=0; b[i]>0 ;j++){
                b[i]=(b[i]/10);
            }
            qtd+=(j-1);
        }
    }
    for(int i=qtd; i>=0 ;i--){
        cout<<"#";
    }
    cout<<endl;
    for(int i=0; i<10 ;i++){
        cout<<"#"<<a[i];
    }
    cout<<"#"<<endl;
    for(int i=qtd; i>0 ;i--){
        cout<<"#";
    }
    cout<<endl<<endl;
}
