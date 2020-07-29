Algoritmo "Bhaskara"
// Calcula as raízes de uma função de ordem 2 utilizando Bhaskara
// Ax²+Bx+C
Var
     a : Real
     b : Real
     c : Real
     x : Real
Funcao delta (Var a,b,c : Real) : Real
     retorne ((b*b)-(4*a*c))
FimFuncao

Procedimento bhaskara(Var a,b,c : Real) : Inteiro
     Inicio
     x<-delta(a,b,c)
     Se x>=0 Então
          Escreval("Raiz real X` = ",((0-b+(x^0.5))/(2*a)) )
          Escreval("Raiz real X``= ",((0-b-(x^0.5))/(2*a)) )
     Senao
          Escreval("Raiz complexa X` = ",((0-b)/(2*a))," + ",(x*-1)^0.5:1:3,"i")
          Escreval("Raiz complexa X``= ",((0-b)/(2*a))," - ",(x*-1)^0.5:1:3,"i")
     FimSe
FimProcedimento

Inicio
     Escreva("Digite o valor de A: ")
     Leia (a)
     Escreva("Digite o valor de B: ")
     Leia (b)
     Escreva("Digite o valor de C: ")
     Leia (c)
     bhaskara(a,b,c)
FimAlgoritmo