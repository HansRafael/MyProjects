#eia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em cada posição subsequente de N (1 até 99), 
# coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.

a = float(input())

for i in range(0,100):  
    print ("N[%d] = %f" %(i,a))
    a /= 2.0