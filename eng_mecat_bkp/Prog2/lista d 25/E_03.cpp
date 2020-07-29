#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
    float P[2],Q[2],catets[2]={0,0},dist;
    char sai;
    do{
        system("color f0");
        system("cls");
        cout<<"Ponto P:\n Digite a coord. X: ";
        cin>>P[0];
        cout<<" Digite a coord. Y: ";
        cin>>P[1];

        cout<<"\nPonto Q:\n Digite a coord. X: ";
        cin>>Q[0];
        cout<<" Digite a coord. Y: ";
        cin>>Q[1];
        //-distancia coords X(se coincidirem nada muda)---
        if(P[0]>=0){   //se X do ponto P for positivo
            if(P[0]>Q[0]){ catets[0]=P[0]-Q[0]; }   //se (X de P)>(X de Q)->(X de catets)=Xp-Xq
            else if(P[0]<Q[0]){ catets[0]=Q[0]-P[0]; }
        }
        else if(P[0]<0){  //se X do ponto P for negativo
            if(Q[0]>=0){ catets[0]=Q[0]-P[0]; }
            else if(Q[0]<0){ catets[0]=Q[0]-P[0]; }
        }
        //-o mesmo para Y---------------------------------
        if(P[1]>=0){
            if(P[1]>Q[1]){ catets[1]=P[1]-Q[1]; }
            else if(P[1]<Q[1]){ catets[1]=Q[1]-P[1]; }
        }
        else if(P[1]<0){
            if(Q[1]>=0){ catets[1]=Q[1]-P[1]; }
            else if(Q[1]<0){ catets[1]=Q[1]-P[1]; }
        }
        //se os resultados forem negativos
        if(catets[0]<0){ catets[0]*=-1; }
        if(catets[1]<0){ catets[1]*=-1; }
        //calcula distancia pela soma dos quadrados dos catetos(distancias entre as coordenadas)
        dist=sqrt((catets[0]*catets[0])+(catets[1]*catets[1]) );
        cout<<"Distancia entre os pontos = "<<dist<<endl<<endl;

        cout<<"Digite \"C\" p continuar,outra letra p sair: ";
        cin>>sai;
    }while(sai=='c'||sai=='C');
    system("cls");
    cout<<"\nAte mais...\n\n";
    system("pause");
}
