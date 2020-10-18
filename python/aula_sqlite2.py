import sqlite3
conector = sqlite3.connect('conta.db')
cursor = conector.cursor()
def Read():
    sql = "select * from cadastro"
    cursor.execute(sql)
    global dados = cursor.fetchall()
    cursor.close()
    conector.close()
Read()
for d in dados:
    print(d[0], d[1], d[2])


def Update(Cod,new):
    cursor.execute("""
    UPDATE cadastro 
    SET idade = ?
    WHERE codigo = ?
    """, (new,Cod))
    conector.commit()

def Delete(Cod):
    sql = "DELETE FROM cadastro WHERE codigo = :param"
    cursor.execute(sql, {'param' : Cod})
    conector.commit()
    return "|Cliente {} Excluído".format(Cod)