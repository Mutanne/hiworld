#Operadores
println(40 + 2, " Soma")
println(43 - 1," Subtração")
println(6 * 7," Multiplicação")
println(84 / 2," Divisão")
println(84.5 ÷ 2," Divisão inteira")
println(84.5 % 2," Resto divisão")
println(84 // 2," ", typeof(84 // 2))  #devem ser Int
println(2 \ 84," Divisão do contra")
println(6^2 + 6," Exponenciação")
println(1_000_000)

println("\n------ Cap 2 ------\n")
variavel = "valor" #convenção: tolower()
😎 = 👍 = 21
println("😎 + 👍 = ",😎 + 👍)
#Precedência PEMDAS, esq pra dir.
# Parenteses
# Exponenciação
# MD - Mult e Divisão
# AS - Adic e subt
println("Conca" * "tenar")
println("Spam" ^ 3)
println(4//3*π*5^3)

println("\n------ Cap 3: Funções ------\n")
println(parse(Int64, "42"))
println(trunc(Int64, 3.999))
println("dB = ", 10*log10(2))
println("radianos = ", 0.7,'\n',"altura = ",sin(0.7))
#angulos por padrão são em radianos
graus = 45
println("convertido em ", graus / 180 * π," rad")
println(sqrt(4))

function baskhara(a, b, c)
    Δ = delta(a,b,c)
    return [(-b+√Δ)/2a, (-b-√Δ)/2a]
end
function delta(a,b,c)
    return b^2 + 4a*c
end

roots = baskhara(2,2,0)
println(roots)
# definição de funções não mudam o fluxo de execução do programa.
#quando é chamada,interrompe o fluxo, executa seu bloco e retorna

#funções "prudutivas" retornam algo, as "nulas" retornam nothimg.

println("println") #imprime e pula linha
print("um print, ") #não pula linha
print("outro print")

println("\n------ Cap 4: Design de interface ------\n")
using ThinkJulia
🐢 = Turtle()

@svg begin
    forward(🐢, 100)
    turn(🐢, -90)
    forward(🐢, 100)
    turn(🐢, -90)
    forward(🐢, 100)
    turn(🐢, -90)
    forward(🐢, 100)
end

@svg begin
    for i in 1:4
        forward(🐢, 100)
        turn(🐢, -90)
    end
end

function quadrado(t, com)
    @svg begin
        for i in 1:4
            forward(t, com)
            turn(t, -90)
        end
    end
end
quadrado(🐢,50)

function polígono(t, com,n)
    angulo = 360/n
    polilinha(t, com, n, angulo)
end
polígono(🐢,50,6)

function circulo(t, r)
    arco(t, r, 360)
end
circulo(🐢,100)

function arco(t, r, θ)
    arco = 2π*r*θ / 360
    n = arco ÷ 3 + 1
    com = arco/n
    angulo = θ / n
    #fazendo uma leve curva para a esquerda antes de iniciar
    #reduz o erro causado pela aproximação linear do arco
    turn(t, -angulo/2)
    polilinha(t, com, n, angulo)
    turn(t, -angulo/2)
end

#Docstring
"""
polilinha(t, com, n, angulo)

Desenha n segmentos de linha dado o comprimento(com)
e o angulo(em graus) entre eles. t é uma tartaruga.
"""
function polilinha(t, com, n, angulo)
    @svg begin
        for i in 1:n
            forward(t, com)
            turn(t, -angulo)
        end
    end
end
arco(🐢,100,135)
arco(🐢,100,135)
@svg
"""🐱 = Turtle()
@svg begin
    turn(🐱, 135)
    forward(🐱, 200)
end"""

#exercicio 4
# 4.1

function flor()
    arco = 2π*r*θ / 360
    n = arco ÷ 3 + 1
    com = arco/n
    angulo = θ / n
    #fazendo uma leve curva para a esquerda antes de iniciar
    #reduz o erro causado pela aproximação linear do arco
    turn(t, -angulo/2)
    polilinha(t, com, n, angulo)
    turn(t, -angulo/2)

    @svg begin
        for i in 1:n
            forward(t, com)
            turn(t, -angulo)
        end
    end
end

println("\n------ Cap 5: Cond e Recursão ------\n")
println(true && false)  #AND
println(true || false)  #OR
println(!true)  #NOT

function contagem_regressiva(n)
    if n ≤ 0
        println("Feliz Ano Novo!")
    else
        print(n, " ")
        contagem_regressiva(n-1)
    end
end
contagem_regressiva(3)

function imprima_n(s, n)
    if n ≤ 0
        return
    end
    println(s)
    imprima_n(s, n-1)
end
imprima_n("spam", 4)

texto = readline()
print(texto)

println("Qual é a velocidade de voo de uma andorinha sem carga?");
velocidade = readline()
println(typeof(velocidade))
velocidade = parse(Int64, velocidade)
println(typeof(velocidade))

potência_do_sinal = 9
potência_do_ruido = 10
razão = potência_do_sinal / potência_do_ruido
decibéis = 10 * log10(razão)
println(decibéis)

seg = time()
dias = seg / 60 / 60 / 24
println(dias)
hora = dias - dias ÷ 1
hora *= 60
dias ÷= 1
println(dias)
println(hora)

function distância(x₁, y₁, x₂, y₂)
    dx = x₂-x₁
    dy = y₂-y₁
    d² = dx^2 + dy^2
    sqrt(d²)
end
distância(1, 2, 4, 6)

function é_divisivel(x, y)
    x%y == 0
end
é_divisivel(5,2)

if é_divisivel(21, 3)
    println("x é divisível por y")
end

function fat(n)
    espaço = " " ^ (4 * n)
    println(espaço, "fatorial ", n)
    if n==0
        return 1
    else
        recursão = fat(n-1)
        resultado = n * recursão
        println(espaço, "retornando ", resultado)
        return resultado
    end
end
fat(4)

function fib(n)
    if !(n isa Int64)
        error("Fatorial é definido somente para números inteiros.")
    elseif n<0
        error("Fatorial não é definido para números inteiros negativos.")
    elseif n==0
        return 0
    elseif n==1
        return 1
    else
        return fib(n-1)+fib(n-2)
    end
end
fib(1.5)

function A(m, n)
    if m==0
        return n+1
    elseif m>0 && n==0
        return A(m-1,1)
    else
        return A(m-1,A(m,n-1))
    end
end
A(3,4)
