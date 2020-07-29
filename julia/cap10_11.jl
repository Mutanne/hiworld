typeof(1000)
sizeof(1000)
Sys.WORD_SIZE
pi
x="Hello"
typeof(x)
x=1,153
typeof(x)
x=1.153
typeof(x)
π
🎱='8'
typeof(🎱)
pi=3
#ja foi usada acima
Int
Int128
0xfa
(typemin(Int64), typemax(Int64))
for T in [Int8,Int16,Int32,Int64,Int128,UInt8,UInt16,UInt32,UInt64,UInt128]
    println("$(lpad(T,7)): [$(typemin(T)),$(typemax(T))]")
end

for T in [Int8,Int16,Int32,Int64,Int128]
    println("$(lpad(T,7)): $(sizeof(T)) Bytes")
end

y = typemax(Int64)
y+1 == typemin(Int64)
y+2
25/0
typemin(Int64)/-1
Float32(-1.56)
10_000
0.0 == -0.0
bitstring(0.0)
bitstring(-0.0)
Inf
-Inf
NaN
1/Inf
1/0
-1/0
0/0
Inf - Inf
0*Inf

(typemin(Float32), typemax(Float32))
eps(Float32)
2.0^-23
eps()
2.0^-52
eps(1.0)+1.0
nextfloat(1.0)
prevfloat(1.0)
big"12345678901234567890"+1
parse(BigInt, "12345678901234567890") +1
big"1.23456789012345678901"
parse(BigFloat, "1.23456789012345678901")
BigFloat(2.0^66) / 3
factorial(BigInt(1000000))
factorial(BigInt(40))
x = typemin(Int64)
x -= 1
typeof(x)
y = BigInt(typemin(Int64))
y -= 1
typeof(y)

setrounding(BigFloat, RoundUp) do
    BigFloat(1) + parse(BigFloat, "0.1")
end

setrounding(BigFloat, RoundDown) do
    BigFloat(1) + parse(BigFloat, "0.1")
end

setprecision(100) do
    BigFloat(1) + parse(BigFloat, "0.1")
end # do

[typemin(BigFloat), typemax(BigFloat)]
x = 3
2x^2 - 3x + 1
1.5x^2 - .5x +1
2^2x
2^(2x)
2(x-1)^2 - 3(x-1) +1
√2x
√(2x)
2x^3
2(x^3)
(2x)^3
(x-1)x
(x-1)(x+1)
x(x+1)
#nesses casos necessita do *
(x-1)*(x+1)
x*(x+1)
#evitar nomes de var como 0xaff, 1e10, 1.5f22
#conflito, 0 * xaff , 1 * e10 , 1.5 * 5f22
zero(Float32)
one(BigFloat)
#literal 0 and 1
