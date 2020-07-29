#pag 61(81)
'x'
Int('x')
Char(120)
Char(0x110000)
isvalid(Char, 0x110000)
'\u0'
'\u78'
'\u2200'
'\U10ffff'
str = "Hello, world.\n"
str[begin]
str[1]
str[end]

"""Contains "quote" characters"""
firstindex(str)
lastindex(str)
str[end-1]
str[end÷2]

str[begin-1]
str[end+1]
#ambas dão erro
str[4:9]
str[6]
str[6:6]

substr = SubString(str, 1, 5)
#retorna uma visualização da sttring pai
typeof(substr)

#a[i,j,...] é convertido pelo comp em getindex(a, i, j, ...)
#Unicode
s = "\u2200 x \u2203 y"
s[1]
s[2]
s[3]
s[4]
nextind(s, 1)
#proximo indice valido
nextind(s, nextind(s, 4))
s[end-1]
s[end-2]
#erro pois o anterior é multibyte
s[prevind(s, end, 2)]
prevind(s,lastindex(s), 2)

s[1:1]
s[1:2]
s[1:4]
length(s)
#7 caracteres e não 7 bytes
length(s) <= lastindex(s)
lastindex(s)

#ineficiente mas funciona
#onde não der erro tem caracter
for i = firstindex(s):lastindex(s)
    try
        println(s[i])
    catch
        #ignore
    end
end

#menos pior
for c in s  #string como obj iterável
    println(c)
end
#tambem pode usar nextind e prevind
#para obter índices válidos, ou...
collect(eachindex(s))
ncodeunits(s)
for i = 1:ncodeunits(s)
    println(codeunit(s, i))
end

s = "\xc0\xa0\xe2\x88\xe2|"
foreach(display, s)
#1 ou mais caracteres invalidos nao invalidam o todo
isvalid.(collect(s))
#só o ultimo pode ser impresso
s2 = "\xf7\xbf\xbf\xbf"
foreach(display, s2)
#'\U1fffff': Unicode U+1FFFFF (category In: Invalid, too high)

#Julia uses the UTF-8 encoding by default, and support for new encodings can
#be added by packages. For example,
#the LegacyStrings.jl package implements UTF16String and UTF32String types.

greet^3

#Concatenação
greet = "Hello"
whom = "world"
string(greet, ", ", whom, ".\n")
greet * ", " * whom * ".\n"
#na matemática, + significa uma operação comutativa
#onde a ordem dos operandos não importa.
# A + B == B + A
#Porém * é tipicamente uma operação ñ comutativa
#onde a ordem dos operandos importa
#Ex.: multiplicação de matrizes, A * B != B * A
#como aqui a ordem importa então se usa *,
#assim ficando de acordo com o uso na matematica
# * ou ⋅ forma um free monoid (S, *).
a, b = "\xe2\x88", "\x80"
c = a*b
collect.([a, b, c])
length.([a, b, c])

#Interpolação
# como em perl usa $ para interpolar
"$greet, $whom.\n"
#o sistema irá reescrever para string(greet, ", ", whom, ".\n")
"1 + 2 = $(1+2)"
v = [1, 2, 3]
#sem , é Array. Com , é vector
"v: $v"
print("I have \$100 in my account.\n")
str = """
Hello,
 world.
"""

"""\n This
is
  a test"""

"""hello"""
"""
Hello,
world."""

"a CRLF line ending\r\n"

#Operações comuns
"abracadabra" < "xylophone"
"abracadabra" == "xylophone"
"abracadabra" != "xylophone"
"1 + 2 = 3" == "1 + 2 = $(1+2)"

findfirst(isequal('o'), "xylophone")
findlast(isequal('o'), "xylophone")
findfirst(isequal('z'), "xylophone") #nada

findnext(isequal('o'), "xylophone", 1)
findnext(isequal('o'), "xylophone", 5)
findprev(isequal('o'), "xylophone", 5)
findnext(isequal('o'), "xylophone", 8)

occursin("world", "Hello, world.")
occursin("o", "Xylophon")
occursin('a', "Xylophon")

repeat(".:Z:.", 10)
join(["apples", "bananas", "pineapples"], ", ", " and ")

firstindex(str)
lastindex(str)
length(str)
length(str, 1, 5) # nº de char validos de i a j
ncodeunits(str) # nº de code units na string
codeunit(str,1)
thisind(str, 5)
nextind(str, 5, 1)
prevind(str, 5, 1)

#Regula Expressions
#Julia has Perl-compatible regular expressions (regexes),
#as provided by the PCRE library
r"^\s*(?:#|$)"
occursin(r"^\s*(?:#|$)", "not a comment")
occursin(r"^\s*(?:#|$)", "# a comment")
match(r"^\s*(?:#|$)", "not a comment")
match(r"^\s*(?:#|$)", "# a comment")
#similar a occursin, mas mostra o que combina nas strings
m = match(r"^\s*(?:#|$)", "# a comment")
if m === nothing
    println("not a comment")
else
    println("blank or comment")
end
#necessário para mostrar algo na tela.

m = match(r"^\s*(?:#\s*(.*?)\s*$|$)", "# a comment ")
m = match(r"[0-9]","aaaa1aaaa2aaaa3",1)
# 1 é o indice por onde começará a busca, pega a 1° após o indice
m.match
m.captures #substrings capturadas
m.offset #onde começa o que combinou
m.offsets #offset de substrings capturadas como vetor

m= match(r"(a|b)(c)?(d)", "acd")
m.match
m.captures
m.offset
m.offsets
first, second, third = m.captures; second
println(m)
#pag 76(96)
