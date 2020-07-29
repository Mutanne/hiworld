x =3965421
y = 569705405152896
#operadores
+x
-x
x + y
x - y
x * y
x / y
x ÷ y
x \ y
x ^ y
x % y
2 % 3
#not
!true
3*2/12
-x+2

#Bitwise
~x #bitwise not
bitstring(x)
bitstring(y)

bitstring(a)
bitstring(b)
bitstring(c)
a = x & y #bitwise and
b = x | y #bitwise or
c = x ⊻ y #bitwise xor
x >>> 5
bitstring(x >>> 5)  #logical shift right
(x >> 5) < x
bitstring(x >> 5)#arithmetic shift right
(x << 5) > x

bitstring(x << 5) #log/arithm shift left

123 ⊻ 234
xor(123, 234)
~UInt32(123)

#updating operator
x += 1
# += -= /= \= ÷= %= ^= &= |= ⊻= >>>= >>= <<=

#"dot" operators
#elemento por elemento
[1 2 3] ^ 3
[1 2 3] .^3
[1,2,3] .* [2,3,4]
⊗(A,B) = kron(A,B) #produto de Kronecker
[1 2 ; 3 4] ⊗ [0 5 ; 6 7]
[1 2 ; 3 4] .⊗ [0 5 ; 6 7]
#Comparações
# ==  !=,≠  <  <=,≤  >  >=,≥
1≤2
Inf>NaN
NaN == NaN
NaN < NaN
[1 NaN] == [1 NaN]
isequal(NaN, NaN)
isfinite(x)
isinf(x)
isnan(x)
-0.0 == 0.0
isequal(-0.0, 0.0)

v(x) = (println(x); x)
v(1) < v(2) ≤ v(3)

0 .< [0 .5 1.5 .8] .< 1
sin.([1 2 3])

#ordem de precedencia na pag 51(71)
Base.operator_precedence(:+), Base.operator_precedence(:*), Base.operator_precedence(:.)
Base.operator_precedence(:(=))
Base.operator_precedence(:sin)

Base.operator_associativity(:-), Base.operator_associativity(:+)
Base.operator_associativity(:^)
Base.operator_associativity(:sin)

Note that symbols such as :sin return precedence 0.
This value represents invalid operators and not operators
of lowest precedence.
Similarly, such operators are assigned associativity :none.

#Conversions
Int8(127.0)
Int8(128)
Int8(3.14)
127 % Int8
128 % Int8
round(Int8, 127.4)
round(Int8, 127.6)
 #ver Conversion and Promotion
typeof(round(2.5))
x=7.568

#Divisions
floor(x)
ceil(x)
trunc(x)
y=2.0
x/y
div(x,y) #truncated division
fld(x,y)
cld(x,y)
rem(x,y)
x == div(x,y)y + rem(x,y)
mod(x,y)
x == fld(x,y)y + mod(x,y)
mod1(x,y)
mod2pi(x)
0 <= mod2pi(x) < 2π
divrem(x,y)
fldmod(x,y)
x=49;y=56
gcd(x,y) #MDC
lcm(x,y) #MMC
x=-49
#Sinal abs
abs(x)
abs2(x)
sign(x)
signbit(x)
copysign(y,x)
flipsign(x,y)
#x com sinal de x*y

sin(x)
cos(x)
tan(x)
cot(x)
sec(x)
csc(x)

sqrt(abs(x))
√abs(x)
cbrt(abs(x))
∛abs(x)
hypot(3,4)
exp(1)
expm1(1) #e^x - 1
ldexp(1.0,8)
log(2)
log(ℯ,2)
log2(2)
log10(10)
log1p(0.0052)
#log(1+x) for x near zero
exponent(128.0)
significand(128.0)

#sinh cosh tanh coth sech csch
#asin acos atan acot asec acsc
#asinh acosh atanh acoth asech acsch
#sinc cosc
#These are all single-argument functions, with atan also accepting two
#arguments corresponding to a traditional atan2 function.

#Additionally, sinpi(x) and cospi(x) are provided for more accurate
#computations of sin(pi*x) and cos(pi*x) respectively.

#In order to compute trigonometric functions with degrees instead of radians,
#suffix the function with d. For example, sind(x) computes the sine of x
#where x is specified in degrees.

#Mais funções matemàticas especiais em SpecialFunctions.jl

endcap
