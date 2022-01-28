a = open("test.txt","r")
lista = a.read().split( )

um = int(lista.count("1"))
zeros = 0


for i in lista[:-1]:
    cont = 0
    while cont < len(i):
        if i[cont] == 0:
            zeros += 1
            cont += 1
        else:
            cont +=1
print(zeros)
