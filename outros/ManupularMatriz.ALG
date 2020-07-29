algoritmo "ManupularMatriz"
// =============================================================
// Algoritmo para fazer uma matriz de 4x4 e mostrar:
// - os numeros do meio ----------------
// 1   0   0   0
// 0   1   0   0
// 0   0   1   0
// 0   0   0   1
// - os numeros de cima ----------------
// 0   1   1   1
// 0   0   1   1
// 0   0   0   1
// 0   0   0   0
// - os numeros de baixo ---------------
// 0   0   0   0
// 1   0   0   0
// 1   1   0   0
// 1   1   1   0
// - e a matriz completa ---------------
// 1   1   1   1
// 1   1   1   1
// 1   1   1   1
// 1   1   1   1
// AUTOR: Odair Cesar
// Professores: Guanabara e Vanessa
//
// Esse projeto foi feito com dois propocitos:
// Finalizar o curso de algoritmo do Curso em Video de onde veio a ideia
// E fazer a atividade do Forum da discilpina Algoritmos e Programação Estruturada. Escolhi esse por ter quebrado a cabeça para fazer funcionar demorei algumas horas nele
//
//
//=============================================================
var
   matriz: vetor[1..4, 1..4] de Inteiro  //A matriz de 4 por 4
   larg, compri: Inteiro//os numeros que iremos manipular a matriz
   opcao: Inteiro//os numeros que usaremos para saber qual opção o usuario escolheu


//=============================================================================
Procedimento MatrizInteira()
//Monta a matriz normalmente
inicio
   Para larg <- 1 ate 4 faca
      Para compri <- 1 ate 4 faca//uma repetição dentro de outra para ixibir a matriz
         Escreva(matriz[larg,compri])
      FimPara
      EscrevaL()
   FimPara
FimProcedimento


//=============================================================================
Procedimento Meio()
//Monta só o meio dela
//A ideia nessa parte é ter o mesmo numero para largura e comprimento da matriz.
//Dessa forma será mostrado as possição 1:1, 2:2, 3:3 e 4:4
var t: inteiro
inicio
   Para larg <- 1 ate 4 faca
      EscrevaL(matriz[larg,larg]:4)
      Para t <- 1 ate larg faca//como os valores é igual não precisa fazer repetição dentro de repetição
         Escreva("    ")
      FimPara
   FimPara
FimProcedimento


//=============================================================================
Procedimento Cima()
//A ideia é usar so a parte de cima da matriz. E a parte de baixo colocamos um espaço vazio, para preencher o resto
var t: Inteiro
inicio
   Para larg <- 1 ate 3 faca
      Escreva("    ")
      Para compri <- larg + 1 ate 4 faca//aqui colocamos os numeros de cima
         Escreva(matriz[larg,compri]:4)
      FimPara
      EscrevaL()
      Para t <- 1 ate larg faca//aqui zeramos os numeros de baixo
         Escreva("    ")
      FimPara
   FimPara
   EscrevaL()
FimProcedimento


//=============================================================================
Procedimento Baixo()
//Aqui pulamos uma linha para fazer o primeira linha da matriz
//Começamos uma repetição com a largura 2 para não fazer a linha 1.
inicio
   Para larg <- 2 ate 4 faca
      EscrevaL()
      Para compri <- 1 ate larg-1 faca//aqui é quando maior o numero da largura maior será o numero de repetição.
         Escreva(matriz[larg,compri]:4)
      FimPara
   FimPara
   EscrevaL()
FimProcedimento


//=============================================================================
inicio
//PEGAMOS AS INFORMAÇÕES DO USUARIO
   Para larg <- 1 ate 4 faca//Aqui pegamos os valores que irão na matriz
      Para compri <- 1 ate 4 faca
         Escreva("Digite valor para a posicao [", larg, ",", compri, "]: ")
         Leia(matriz[larg,compri])
      FimPara
   FimPara
   LimpaTela

//AQUI SERÁ O RESULTADO
   Repita
      EscrevaL()
      EscrevaL("MENU DE OPCOES")
      EscrevaL("---------------------")
      EscrevaL("1. Matriz Completa")
      EscrevaL("2. Meio Matriz")
      EscrevaL("3. Parte Superior")
      EscrevaL("4. Parte Inferior")
      EscrevaL("5. Sair")
      Repita
         EscrevaL("*** OPCAO:")
         Leia(opcao)
      Ate (opcao >=1) e (opcao <=5)
      LimpaTela
      Escolha opcao
      Caso 1
         MatrizInteira()//PROCESSAMENTO
      Caso 2
         Meio()//PROCESSAMENTO
      Caso 3
         Cima()//PROCESSAMENTO
      Caso 4
         Baixo()//PROCESSAMENTO
      Caso 5
         EscrevaL("ENCERRANDO...")
      FimEscolha
   Ate (opcao = 5)
fimalgoritmo
