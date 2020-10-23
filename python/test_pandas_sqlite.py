import modulo_sqlite as sq
import pandas as pd

#Classe ---------------------------------------------------
class Pessoa:
	def __init__(self, codigo, nome, idade):
		self.Cod = codigo
		self.Cliente = nome
		self.Idade = idade
	def gCod(self):
		return self.Cod
	def gCliente(self):
		return self.Cliente
	def gIdade(self):
		return self.Idade
		
#SQLite ---------------------------------------------------
def datab():
    while True:
        print(' SQLite3 teste Ta3\n1 - Mostra\n2 - Exclui\n3 - Adiciona\n4 - Atualizar\n5 - Voltar')
        opc= input('Sua escolha: ')
        if opc == '1': 
            sq.Inicia()
            dados = sq.LerTudo()
            sq.Fecha()
            print('')
            #for d in dados:   print(d[0], d[1], d[2])      
            df = pd.DataFrame(dados,columns=['codigo','nome','idade'])
            ind_vazio = [''] * len(df)
            df.index = ind_vazio
            print(df)
        elif opc == '2':
            cod = int(input('Codigo do cliente: '))
            sq.Inicia()
            sq.Excluir(cod)
            sq.Fecha()
        elif opc == '3':
            cod,nome,idad = input('Digite \"codigo,nome,idade\":').split(',')
            cod, idad = int(cod), int(idad)
            sq.Inicia()
            sq.Adiciona(cod,nome,idad)
            sq.Fecha()
        elif opc == '4':
            print('  O que quer atualizar?\n 1-Nome\n 2-Idade\n 3-Ambos\n 4-Voltar')
            opc2 = input(' Sua escolha: ')

            if opc2 == '1':
                cod,nom = input('Digite \"codigo,nome\":').split(',')
                cod = int(cod)
                sq.Inicia()
                sq.Update(cod,nome = nom)
                sq.Fecha()
            elif opc2 == '2':
                cod,idad = input('Digite \"codigo,idade\":').split(',')
                cod, idad = int(cod), int(idad)
                sq.Inicia()
                sq.Update(cod,idade = idad)
                sq.Fecha()
            elif opc2 == '3':
                cod,nom,idad = input('Digite \"codigo,nome,idade\":').split(',')
                cod, idad = int(cod), int(idad)
                sq.Inicia()
                sq.Update(cod,nome = nom, idade = idad)
                sq.Fecha()
            elif opc2 == '4':
                continue
            else:
                print('Opção inesxistente.\n')
        elif opc == '5':
            break
        else:
            print('Opção inesxistente.\n')
        print('')
    print('')

#inicio(pandas) -------------------------------------------
if __name__ == "__main__":
	while True:
		print(" Gerenciador Loja\n1 - Adicionar DataFrame\n2 - Listar nomes\n3 - Gerenciar DB\n4 - fechar")
		op = input("Escolha: ")
		
		if op == '1':
			sair = 'C'
			df = pd.DataFrame(columns=['codigo','nome','idade'])			
			while True:
				if sair == 'C' or sair =='c':
					cod, nome, idade = input("codigo,nome,idade: ").split(',')
					cl = Pessoa(int(cod), nome, int(idade))
					dict = {'codigo':cl.gCod(), 'nome':cl.gCliente(),'idade':cl.gIdade()}
					df = df.append(dict, ignore_index=True)
					print('\n','  DataFrame temporario','\n',df,'\n')
				elif sair == 'S' or sair =='s':
					sq.Inicia()
					for index,row in df.iterrows():
					       sq.Adiciona(row['codigo'],row['nome'],row['idade'])
					sq.Fecha()
					break
					
				elif sair == 'X' or sair =='x':
					break
				else:
				    print('Opção inesxistente.\n')
				sair = input('C - Continuar adicionando\nX - Sair sem salvar\nS- Salvar e sair\nEscolha: ')
						
		elif op == '2':
			sq.Inicia()
			df = pd.DataFrame(sq.LerTudo())
			sq.Fecha()
			print('\n')
			for i in df[1]: print(i)
			print('\n')
		elif op == '3':
			print('\n')
			datab()
		elif op == '4':
			break
		else:
			print('Opção inesxistente.\n')
		print('')
	print('')
