#include<iostream>
using namespace std;
  /*converter de Franco suico para reais passando por dolar de zimbabue
  e florim holandes
  */
int main(){
    float fsac, fhd, fsd, rfh, conv; 
    cout<<"Informe o valor de Franco S. a ser convertido: "<<"\n";
    cin>>fsac;
    cout<<"Informe o valor do Florim H. em Dolar Z.: "<<"\n";
    cin>>fhd;
    cout<<"Informe o valor do Franco S. em Dolar Z.: "<<"\n";
    cin>>fsd;
    cout<<"Informe o valor do Real em Florin H.: "<<"\n";
    cin>>rfh;
    
    conv = fsac*fsd;
    conv = conv/fhd;
    conv = conv/rfh;
        
    cout<<" O resultado da conversao e R$"<<conv<<"\n"<<"\n";
    system("pause");
}
    
     
