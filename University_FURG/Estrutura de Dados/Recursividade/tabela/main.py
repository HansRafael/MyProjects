from tabelaContiguidade import Tabela
import math as m
a = Tabela(11)

a.inserir('ABE2413','Palio')
a.inserir('ABC1325','Gol')
a.inserir('BBC2325','Gol GTI')
a.inserir('CBE2213','Palio')
a.inserir('DLM3242','Hilux') ##############
a.inserir('ELM8942','Fusca')    
a.inserir('FGY2311','Fusion')
a.inserir('JKM0092','Celta')
a.inserir('JKM0092','Kwid')
a.inserir('AAA0001','Sandero')
a.inserir('JKM0001','Kwid 2018')

print(a)
a.inserir('JKM0092','Novo carro: Ecosport')
a.inserir('CBE2213','Novo carro: Clio')
print(a)
#na consulta , 'bin' = busca binária
#            ,  'seq'   = busca sequencial
placa = 'JKM0001'

valor,repeticoes = a.consulta(placa,'bin')
print("Busca binária:\nO valor da chave é: " + str(valor) + '\nPercorreu ' + str(repeticoes)+'x a lista\n')

valor,repeticoes = a.consulta(placa,'seq')
print("Busca sequencial:\nO valor da chave é: " + str(valor) + '\nPercorreu ' + str(repeticoes)+'x a lista\n')

valor = a.consulta(placa,'seqRec')
print("Busca sequencial recursiva:\nO valor da chave é: " + str(valor)+'\n')

valor = a.consulta(placa,'binRec')
print("Busca binaria recursiva:\nO valor da chave é: " + str(valor)+'\n')
