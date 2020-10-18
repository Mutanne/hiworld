import pandas as pd
import sqlite3 as sq
#df = pd.read_sql_query() consulta o db
#df = pd.read_sql_table() leitura tbm
#df.to_sql grava um dataframe no db

conector = sq.connect("conta.db")
df = pd.read_sql_query("SELECT * FROM cadastro", conector)
print(df.head()) #head() mostra os 5 primeiros elementos