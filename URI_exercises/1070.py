x = int(input())


def numeros(Numero):
    cont = 0
    impar = 0
    while (cont < 6):
        print(Numero+impar)
        impar+=2
        cont+=1

if (x%2 == 0):
    x+=1
    numeros(x)
else:
    numeros(x)

        