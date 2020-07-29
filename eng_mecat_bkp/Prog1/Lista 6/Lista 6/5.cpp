#include<iostream>
#include<math.h>
//octa para dec
using namespace std;
int main(){
    int n, xi, y=1, i=0, r=0, a=0;    
    cin>>n;
        
    while(n>0){             
            xi=n%10;
            n/=10;
            while(a<i){
                        y*=8;
                        a++;
                        }                                    
            r += xi*y;
            i++;
            y=1;
            a=0;                                               
            }
    cout<<r<<"\n";              
    //system("pause");
}
