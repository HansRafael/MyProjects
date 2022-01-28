#Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.



lista = []
a = int(input())

for i in range(10):
    lista.append(a)
    print ("N[%d] = %d" %(i,a))
    a = a*2