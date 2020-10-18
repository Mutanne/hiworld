#Operadores
println(40 + 2, " Soma")
println(43 - 1," Subtração")
println(6 * 7," Multiplicação")
println(84 / 2," Divisão")
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
