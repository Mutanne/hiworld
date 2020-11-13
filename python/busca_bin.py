def busbin(n,ult,lis,ini=1):
    """ Realiza a BUSca BINaria do valor de "n" na lista ordenada "lis".

    Parametros:
    n    (int): numero a se verificar
    ult  (int): ultimo indice
    lis (list): lista ordenada a ser percorrida
    ini  (int): inicio da lista, default=1
    
    Retorna:
    int: o proprio valor se encontrado
    int: -1 se n nao foi encontrado
    
    """
    while True:
        if ult-ini <= 1: return -1
        elif n == lis[(ini+ult)//2] or n==ult or n == ini: return n
        else: ini, ult= (ini+ult)//2 if n>lis[(ini+ult)//2] else ini, (ini+ult)//2 if n<lis[(ini+ult)//2] else ult

if __name__=="__main__":  
    fim=10
    var = list(range(fim))
    for i in range(fim+5):
        x = busbin(i,fim,var) 
        print(x if x !=-1 else "Não encontrado.")
    
    print('\n',help(busbin))