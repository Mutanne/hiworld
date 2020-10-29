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
