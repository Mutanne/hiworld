import pandas as pd
import numpy as np

df = pd.DataFrame({"Nome":["João da Silva",
                           "Carlos Souza",
                           "Maria Ferreira"],
                    "Idade":[22, 35, 58],
                    "Sexo":["masculino","masculino","feminino"]})
print(df,"\n")

s = pd.Series(np.random.randn(5), index=['a','b','c','d','e'])
print(s,'\n')

d = {'b':1, 'a':0, 'c':2}
print(pd.Series(d),'\n')
