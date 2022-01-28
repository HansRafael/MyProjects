#Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

lista = []
for i in range(10):
    a = int(input())
    if a <= 0:
        a = 1
        lista.append(a)
    else:
        lista.append(a)

    print("X[%d] = %d"%(i,a))