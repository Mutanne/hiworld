import pandas as pd
import mysql.connector

fazbd = mysql.connector.connect(
        host="localhost",
        user="root",
        password="musd159357",
        database="fazenda_bd")
cursor = fazbd.cursor()


def busbin(n,ult,lis,ini=1):
	""" Realiza a BUSca BINaria do valor de "n" na lista ordenada "lis".

 Parametros:
n    (int): numero a se verificar
ult  (int): ultimo indice
lis (list): lista ordenada a ser percorrida
ini  (int): inicio da lista, default=1

 Retorna:
([dados]): retorna dados do db sobre o animal
int      : -1 se n nao foi encontrado"""
	while True:
		if ult-ini <= 1: return -1
		elif n == lis[(ini+ult)//2] or n==ult or n == ini: 
			cursor.execute(f'select ID_vaca, especie, temp_leite, produção_dia, foi_inseminada,minu_rumina_dia from produ_leite where ID_vaca={n}')
			return cursor.fetchall()
		else: 
			ini = (ini+ult)//2 if n>lis[(ini+ult)//2] else ini
			ult = (ini+ult)//2 if n<lis[(ini+ult)//2] else ult


if __name__ == "__main__":
	cursor.execute("SELECT MAX(ID_vaca) FROM produ_leite")
	fim = cursor.fetchall()
	fim = fim[0][0] #fetchall retorna como ([...])
	ids = list(range(fim)) #lista de ids
	id_req = int(input('Digite o id da vaca: '))
	df = pd.DataFrame(columns=['ID_vaca','Especie','temp_leite','produção_dia','foi_inseminada','minu_rumina_dia'])    
	temp = busbin(id_req, fim, ids)
	if temp != -1:
		dictio = {'ID_vaca':temp[0][0],'Especie':temp[0][1],'temp_leite':temp[0][2],'produção_dia':temp[0][3],'foi_inseminada':temp[0][4],'minu_rumina_dia':temp[0][5]}
		df = df.append(dictio, ignore_index=True)
	print('Animal não cadastrado no DB.' if temp==-1 else df)
	#print('\n', help(busbin)) #exibe texto de ajuda da função.
