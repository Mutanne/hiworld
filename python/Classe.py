class Conta:
    def __init__(self,nome,numero):
        self.cliente = nome
        self.num = numero
        self.saldo = 0.0

    def Saldo(self):
        return self.saldo

    def getCliente(self):
        return self.cliente

    def Transferência(self, conta, valor):
        self.saldo= self.saldo - valor
        conta.saldo = conta.saldo + valor

    def Depositar(self, valor):
        self.saldo += valor

    def Retirar(self, valor):
        self.saldo -= valor

conta1 = Conta('Jão',1)
conta1.Depositar(1000)
print(conta1.Saldo())