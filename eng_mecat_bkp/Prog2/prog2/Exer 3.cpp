#include<iostream>
using namespace std;
//fazer para qualquer numero, alinhando as barras verticais
int main(){
    int mat[10][10], b[10][10], maior[10], qt=1; //zera vetor
    for(int i=0 ; i<10 ; i++){
        maior[i]=0;
    }

    for(int i=0 ; i<10 ; i++){ //colhe os dados
        for(int j=0 ; j<10 ; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0 ; i<10 ; i++){
        for(int j=0 ; j<10 ; j++){
            b[i][j]=mat[i][j];
        }
    }

    for(int j=0,i=0,k=0 ; j<10 ; j++){ //verifica o maior
        for(int i=0 ; i<10 ; i++){
            for(k=0 ; b[i][j]>0 ; k++){
                b[i][j]=(b[i][j]/10);
            }
            b[i][j]=k;
            if(k>maior[j]){
                maior[j]=k;
            }

        }
    }

    /*for(int i=0 ; i<10 ; i++){
        for(int j=0 ; j<10 ; j++){
            cout<<" "<<b[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0 ; i<10 ; i++){
        cout<<" "<<maior[i];
    }*/
    cout<<endl<<endl;
    int qtd=1;
    for(int i=0; i<10 ; i++){
        qtd=(qtd+(maior[i]+1));
    }
    for(int t=qtd; t>0 ; t--){
        cout<<"-";
    }
    cout<<endl;
    for(int i=0,j=0,k=0 ; i<10 ; i++){
        for(int j=0 ; j<10 ; j++){
            cout<<"|"<<mat[i][j];
            if(maior[j]>b[i][j]){
                k=maior[j]-b[i][j];
                for(k=k; k>0 ; k--){
                    cout<<" ";
                }
            }
        }
        cout<<"|"<<endl;
        for(int t=qtd; t>0 ; t--){
        cout<<"-";
        }
        cout<<endl;
    }

    cout<<endl;
}
