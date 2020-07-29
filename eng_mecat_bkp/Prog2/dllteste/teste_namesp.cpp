/*Neste caso nao é necessario incluir a iostream, nem declarar "namespace std",
pois isto ja esta feito no header, como declarei o namespace n1 no escopo global
tudo q esta em n1 e valido para o programa inteiro, e n1 inclui a iostream */
#include<n1.h>
#include<n2.h>
using namespace n1;
int main(){
    cout<<st<<endl<<"retorno op da n1: "<<op(4,2)<<endl; //chama variavel e funçao
                                                         //do namespace n1
    cout<<"retorno op da n2: "<<n2::op(4,2)<<endl; //chama funçao do namespace n2
    cout<<"retorno op da n3: "<<n2::n3::op(4,2)<<endl; //chama funçao do namespace
                                                       //n3 q esta aninhado c/ n2
}
