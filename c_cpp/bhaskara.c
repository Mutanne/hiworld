/*********************************************
*  NOME        :  bhaskara.c
*
*  DEV.        :  Murillo SD
*
*  DATA        :  04 05 2020
*
*  DESCRIÇÃO   :  calcula raízes com bhaskara
*
*  VERSÃO      :  v1.0
*********************************************/

/*------------ bibliotecas -------------*/
#include<stdio.h>
#include<stdlib.h>

/*------- protótipos de funções --------*/
float delta (float a, float b, float c);
void bhaskara (float a, float b, float c);
  
    
/* __bhaskara
*  _início da execução_*/
  
int main(){
  float a,b,c;
  printf("Calculo de raízes de y=Ax^2+Bx+C\n");
  printf("Digite A: ");
  scanf("%f",&a);
  printf("Digite B: ");
  scanf("%f",&b);
  printf("Digite C: ");
  scanf("%f",&c);
  bhaskara(a,b,c);
  return 0;
}

/*-------------- funções ---------------*/ 
float delta (float a, float b, float c){
  return (b*b - 4*a*c);
}

void bhaskara (float a, float b, float c){
  float x=delta(a,b,c);
  if(x>=0){
    printf("Raiz real x' =%0.3f\n",(-b+sqrt(x))/(2*a));
    printf("Raiz real x''=%0.3f\n",(-b-sqrt(x))/(2*a));
  }
  else{
    printf("Raiz complexa x' =%0.3f + %0.3fi\n",-b/(2*a), sqrt(x*-1)/(2*a));
    printf("Raiz complexa x''=%0.3f + %0.3fi\n",-b/(2*a), sqrt(x*-1)/(2*a));
  }
}
  