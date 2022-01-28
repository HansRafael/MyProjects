#aça um programa que leia um valor T e preencha um vetor N[1000]
#  com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

valor = int(input())
numerolista = 0

for i in range(1000):
    print ("N[%d] = %d" %(i,numerolista))
    numerolista += 1
    if numerolista == valor:
        numerolista = 0