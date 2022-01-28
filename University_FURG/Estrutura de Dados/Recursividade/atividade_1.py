# Implemente de maneira iterativa e recursiva: ~


# a operação soma_elementos()
def sumElementsRecursion(lista, tamanho):
    if (len(lista) > tamanho):
        return lista[tamanho] + sumElementsRecursion(lista, tamanho + 1)
    else:
        return 0

def sumElementsInteration(list):    
    aux = 0
    for i in range(len(list)):
        aux += list[i]
    return aux


# o fatorial de um número natural passado como argumento 
def fatRecursion(termo):
    if ((termo == 0) or (termo == 1)):
        return 1
    else:
        return(termo * fatRecursion(termo-1))

def fatIteration(termo):
    aux = 1
    for i in range(termo):
        aux*= termo
        termo -= 1
    return aux


# o cálculo de Fibonacci 
def FibonacciRecursion(termo):
    aux = 0
    if(termo ==0):
        return aux
    elif((termo == 1) or (termo == 2)):
        aux = 1
    else:
        aux = FibonacciRecursion(termo-1) + FibonacciRecursion(termo - 2)
    return aux

def FibonacciInteration(termo):
    termo1, fibo, temp = 1,0,0
    for i in range(termo):
        temp = fibo
        fibo += termo1
        termo1 = temp
    return fibo


# o método soma_digitos()
def sumRecursion(termo, tamanho):
    if (type(termo) != list):
        aux = 0
        termo = list(str(termo))
        return sumRecursion(termo,0)
    elif (len(termo) > tamanho):
        return int(termo[tamanho]) + sumRecursion(termo, tamanho + 1)   
    else:
        return 0
    

def sumInteration(termo):
    lista = list(str(termo))
    aux = 0
    for i in range(len(lista)):
        aux += int(lista[i])
    return aux

#_________________________PRINTS______________________#
somaLista = [13,10,220,6]
print('Soma elementos do vetor {} com interação: {}'.format(somaLista,sumElementsInteration(somaLista)))
print('Soma elementos do vetor {} com recursão: {}\n'.format(somaLista,sumElementsRecursion(somaLista,0)))

fat = 5
print('{}! com interação: {}'.format(fat,fatIteration(fat)))
print('{}! com recursão: {}\n'.format(fat,fatRecursion(fat)))

posi = 0
print('Fibonacci {} com recursão: {}'.format(posi,FibonacciRecursion(posi)))
print('Fibonacci {} com interação: {}\n'.format(posi,FibonacciInteration(posi)))

algarismo = 1832
print('Soma dos algarismos de {} com interação: {}'.format(algarismo,sumInteration(algarismo)))
print('Soma dos algarismos de {} com recursão: {}'.format(algarismo,sumRecursion(algarismo,0)))