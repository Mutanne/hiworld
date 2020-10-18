import aula_sqlite4 as sq

if __name__ == '__main__':
    while True:
        print('\n SQLite 3 teste Ta3\n1 - Mostra\n2 - Exclui\n3 - Adiciona\n4 - Atualizar\n5 - Sair')
        opc= input('Sua escolha: ')
        if opc == '1':
            sq.Inicia()
            dados = sq.LerTudo()
            sq.Fecha()
            print('')
            for d in dados:
                print(d[0], d[1], d[2])      
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
