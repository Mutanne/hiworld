#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0 || n>1000000){
           cout<<"erro\n";
           }
    else{        
          do{
                 n-=1;
                 cout<<n<<"\n";
           
          }while(n!=1);
    }
    //system("pause");
}
