println("Strings")
println(length("testando"))
frutas = "🍌 🍎 🍐"
tamanho = length(frutas)

#travessia
indice = firstindex(frutas)
while indice <= sizeof(frutas)
    letra = frutas[indice]
    println(letra)
    global indice = nextind(frutas,indice)
end
#ou
for letra in frutas
    println(letra)
end

str = "Chapolin Colorado"
println(str[1:8])
println(str[:])

str2 = "Eu, O"
println("$str2 $(str)!") #interpolação de strings
println("√2 = $(sqrt(2))")

#Buscando
