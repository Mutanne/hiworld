#include<iostream>

using namespace std;
  /*Crie um programa para calcular o n�mero de dias de vida de uma pessoa. 
  O usu�rio informar� separadamente a idade da pessoa em anos, meses e dias. 
  Considere que cada ano tem 365 dias e cada m�s tem 30 dias. Ap�s receber 
  o dia, o m�s e o ano, o programa deve imprimir o n�mero de dias vividos 
  pela pessoa. Exemplo: Suponha que o usu�rio informou que uma determinada 
  pessoa tenha 15 anos, 2 meses e 20 dias, logo, para essa pessoa, o sistema 
  dever� exibir a seguinte mensagem: "Esta pessoa ja viveu 5555 dias.".
  */
int main(){
    int ano, mes, dia, total;
    cout<<"Digite a sua idade e veja quantos dias ja viveu"<<"\n";
    
    cout<<"Informe quantos anos voce tem: "<<"\n";
    cin>>ano;
    ano*=365;
    
    cout<<"Quantos meses: "<<"\n";
    cin>>mes;
    mes*=30;
    
    cout<<"E quantos dias: "<<"\n";
    cin>>dia;
    
    total = ano+mes+dia;
    cout<<"Dias que voce viveu: "<<total<<"\n"<<"\n";
    
    system("pause");
}
