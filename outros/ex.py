str=input('Digite a sequência de números\n');  #recebe os valores como string
lista = [int(num) for num in str.split()];  #separa em uma lista e converte em int
num=lista[0];	#inicializa num com o 1° valor
for iter in lista: 										  
	num = iter if iter<=num else num; #acha o menor valor e salva em num
print(num);	#imprime o valor encontrado