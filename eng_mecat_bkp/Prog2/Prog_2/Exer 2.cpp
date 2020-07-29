#include<iostream>
using namespace std;

int main(){
    int valors[10];
    for(int i=1 ; i<11 ; i++){
        cout<<"Digite o valor "<<i<<": ";
        cin>>valors[(i-1)];
    }
    cout<<"---------------------"<<endl;//21 hifens
    for(int i=0 ; i<10 ; i++){ //exibe como |valor|valor...
        cout<<"|"<<valors[i]%10;//mostra a ultima |
    }
    cout<<"|"<<endl;
    cout<<"---------------------"<<endl;//21 hifens

}
