#include<iostream>

using namespace std;

int vetor[10], aux;
int main() {

for(int i =0; i <10;i++){
 cout<<"Informe o valor que deseja armazenar "<<" ";
 cin>> vetor[i];

}
cout<<endl;
cout<<endl;

for(int i=0; i<=10; i++){
    aux=vetor[i];
    vetor[i]= vetor[i+10];
    vetor[i+10]=aux;

}
for(int i=0; i<10; i++){
    cout<<vetor[i]<<" ";

}


}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       