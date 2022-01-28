def fac(n):
    aux = 1
    i = n
    while(i >0):
        aux = aux * n   #1*4   4*3   12*2   24*1
        n = n - 1
        i = i - 1
    return aux

while(True):
    try:
        valor,valor2 = input().split(" ")
        valor = int(valor)
        valor2 = int(valor2)
        a = fac(valor)
        b = fac(valor2)
        print(a+b)
    
    except EOFError:  #se não ouver mais entrada teste de texto, o programa para
        break