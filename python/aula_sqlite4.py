import sqlite3

def Inicia():
    print('Acesso aberto.')
    global conector
    conector = sqlite3.connect("conta.db")
    global cursor
    cursor = conector.cursor()

def Excluir(Cod):
    sql = "delete from cadastro where codigo = :param"
    cursor.execute(sql, {'param' : Cod})
    conector.commit()
    print(f"Cliente {Cod} excluido")

def Adiciona(Cod, nome, idade):
    sql = "insert into cadastro (codigo,nome,idade) values(:cod, :nom, :idad)"
    cursor.execute(sql, {'cod':Cod , 'nom':nome, 'idad':idade})
    conector.commit()
    print(f'Cliente {nome} adicionado')

def LerTudo():
    sql = "select * from cadastro"
    cursor.execute(sql)
    conector.commit()
    data = cursor.fetchall()
    return data
    
def Update(cod,**new):
    if 'nome' in new.keys():    
        if 'idade' in new.keys(): 
            sql = """update cadastro 
                    set nome = ?, idade = ?
                    where codigo = ?
                """
            cursor.execute(sql,(new['nome'], new['idade'],cod))
            conector.commit()  
        else:   
            sql = """update cadastro 
                    set nome = ?
                    where codigo = ?
                """
            cursor.execute(sql,(new['nome'],cod))
            conector.commit()
    elif 'idade' in new.keys():     
        sql = """update cadastro 
                 set idade = ?
                 where codigo = ?
              """
        cursor.execute(sql,(new['idade'],cod))
        conector.commit()
    print("Atualizado.")

def Fecha():
    cursor.close()
    conector.close()
    print('Acesso encerrado.')