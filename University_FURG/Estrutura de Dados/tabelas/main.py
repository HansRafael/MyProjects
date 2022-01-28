from tabelaContiguidade import Tabela
import math as m
a = Tabela(3)

a.inserir('ABE2413','Palio')
a.inserir('BLM3242','Hilux')
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
a.excluir('ABE2413')
a.excluir('BLM3242')
a.inserir('JKM0092','Novo carro: Ecosport')
a.inserir('CBE2213','Novo carro: Clio')
print(a)
#na consulta , 'bin' = busca binária
#            ,  'seq'   = busca sequencial

valor,repeticoes = a.consulta('JKM0092','bin')
print("Busca binária_________\nO valor da chave é: " + str(valor) + '\nPercorreu ' + str(repeticoes)+'x a lista\n')
valor,repeticoes = a.consulta('JKM0092','seq')
print("Busca sequencial______\nO valor da chave é: " + str(valor) + '\nPercorreu ' + str(repeticoes)+'x a lista\n')
