import sqlite3 as sq
conector = sq.connect("conta.db")
cursor = conector.cursor()

sql = "help()"
cursor.execute(sql)
conector.commit()