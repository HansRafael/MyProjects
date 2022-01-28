#Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que
# armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

lista = []

for i in range(100):
    a = float(input())
    if a <= 10:
        lista.append(a)
        print ("A[%d] = %.1f" % (i,a))