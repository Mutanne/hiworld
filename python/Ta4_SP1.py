import pandas as pd
import numpy as np

cliente = {"Nome": ['Marcelo', 'Ana', 'Maria'],
           "Idade": [33, 26, 45],
           "Telefone": [123, 456, 567]}

df = pd.DataFrame(cliente)

print(df,'\n')
print(df.Nome,'\n')

print(df.Idade.mean())

s = pd.Series(("Carla", "Lis"), index = ['03', '07'])
print(s)