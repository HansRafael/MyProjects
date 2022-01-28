from tabelaContiguidade import Tabela
a = Tabela(20)

while(True):
    try:
        chave = str(input()) # entrada = 111.222.333-00
        valor = str(input())
        a.inserir(chave,valor)
    except EOFError:  #se não ouver mais entrada teste de texto, o programa para
        break

print(a)