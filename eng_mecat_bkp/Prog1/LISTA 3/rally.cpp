/*
  Nesse rally, apenas 3 equipes podem participar. 
 Nele, haverá diversos trajetos, porém, no final de 4 deles, 
haverá um marco com sensor. Todas as equipes iniciam a prova 
com 100.000 pontos. O primeiro marco deve ser alcançado no segundo 450 
e possui desconto de 10 pontos por segundo de atraso ou de adiantamento; 
 o segundo marco deve ser alcançado no segundo 850 e desconta 20 pontos/segundo; 
  o terceiro deve ser alcançado no segundo 1050 e desconta 35 pontos/segundo; 
 e o último deve ser alcançado no segundo 1740 e desconta 50 pontos/segundo. 
Vence a equipe que obtiver maior pontuação remanescente na prova.
*/
#include<iostream>
using namespace std;
int main(){
    int p1,p2,p3,s1,s2,s3,t1,t2,t3,q1,q2,q3, tm1, tm2, tm3;
    cin>>p1;
    cin>>p2;
    cin>>p3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>t1;
    cin>>t2;
    cin>>t3;
    cin>>q1;
    cin>>q2;
    cin>>q3;
    tm1=100000;
    tm2=100000;
    tm3=100000;
    
    
    if(p1==450 && s1==850 && t1==1050 && q1==1740){
                tm1=100000;
                }
                else{
                     if(p1<450){
                                p1=(450-p1)*10;
                                }
                    else{
                         p1=(p1-450)*10;
                         }
         
                    if(s1<850){
                               s1=(850-s1)*20;
                               }
                    else{
                         s1=(s1-850)*20;
                         }
                    if(t1<1050){
                                t1=(1050-t1)*35;
                                }
                    else{
                         t1=(t1-1050)*35;
                         }
                    if(q1<1740){
                                q1=(1740-q1)*50;
                                }
                    else{
                         q1=(q1-1740)*50;
                         }
         tm1-=(p1+s1+t1+q1);
    }
    
    if(p2==450 && s2==850 && t2==1050 && q2==1740){
                tm2=100000;
                }
    else{
         if(p2<450){
                    p2=(450-p2)*10;
                    
                    }
         else{
              p2=(p2-450)*10;
              
              }
         
         if(s2<850){
                    s2=(850-s2)*20;
                    
                    }
         else{
              s2=(s2-850)*20;
              
              }
         if(t2<1050){
                    t2=(1050-t2)*35;
                    
                    }
         else{
              t2=(t2-1050)*35;
              
              }
         if(q2<1740){
                    q2=(1740-q2)*50;
                    
                    }
         else{
              q2=(q2-1740)*50;
              
              }
         tm2-=(p2+s2+t2+q2);
         }
         
    if(p3==450 && s3==850 && t3==1050 && q3==1740){
                tm3=100000;
                }
    else{
         if(p3<450){
                    p3=(450-p3)*10;
                    
                    }
         else{
              p3=(p3-450)*10;
              
              }
         
         if(s3<850){
                    s3=(850-s3)*20;
                    
                    }
         else{
              s3=(s3-850)*20;
              
              }
         if(t3<1050){
                    t3=(1050-t3)*35;
                    
                    }
         else{
              t3=(t3-1050)*35;
              
              }
         if(q3<1740){
                    q3=(1740-q3)*50;
                    
                    }
         else{
              q3=(q3-1740)*50;
              
              }
         tm3-=(p3+s3+t3+q3);
         }
    
    if(tm1>tm2 && tm1>tm3){
               cout<<"TEAM1:"<<tm1;
               }
    else if(tm2>tm1 && tm2>tm3){
               cout<<"TEAM2:"<<tm2;
               }
    else{
                 cout<<"TEAM3:"<<tm3;
                 }

            
    //system("pause");
}
