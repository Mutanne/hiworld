#include<iostream>
using namespace std;

void media(float p1,float p2){
    float media=0;
    media=(p1+p2)/2;
    if(media>=6){
        cout<<endl<<"Sua media e: "<<media<<endl
            <<"Parabens! Voce foi aprovado!"<<endl;
    }
    else{
        cout<<endl<<"Sua media e: "<<media<<endl
            <<"You lose!!!"<<endl;
    }
}

int main(void){
    float p1,p2;
    cout<<"Digite a nota 1: ";
    cin>>p1;
    cout<<"Digite a nota 2: ";
    cin>>p2;
    media(p1,p2);
}
