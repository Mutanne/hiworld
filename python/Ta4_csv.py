import pandas as pd

df = pd.read_csv("hiworld\\python\\Arquivo.csv", encoding = "UTF-8", sep = ",")
#dfj = pd.read_json("hiworld\python\Arquivo.json") #deu pau

print(df)
