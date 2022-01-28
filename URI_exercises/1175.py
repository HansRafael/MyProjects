#aça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o
#  último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

lista = []

for i in range(11):
    a = int(input())
    lista.append(a)
    
tam = len(lista) * -1
posicao = -1
posicao2 = 0

while posicao >= tam:
    print ("N[%d] = %d" %(posicao2, lista[posicao]))
    posicao = posicao - 1
    posicao2 += 1
