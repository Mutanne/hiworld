//calcula o fatorial de um numero
#include<iostream>
using namespace std;
int fatorial(int num){
    int result=num;
    for(int i=(num-1); i>=1 ; i-- ){
        result*=i;
    }
    return result;
}
int main(){
    int num;
    cout<<"Digite o numero: ";
    cin>>num;
    cout<<num<<"!="<<fatorial(num)<<endl;
}
