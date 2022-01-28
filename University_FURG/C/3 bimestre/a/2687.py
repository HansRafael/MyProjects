a = open("test.txt","r")
lista = a.read().split()

um = int(lista.count("1"))
print(lista,um)

soma = 0
zeros = []
for i in lista[:-1]:
    cont = 0
    while cont < len(i):
        if i[cont] == '0':
            cont = cont + 1
            soma += 1
        else:
            cont = cont + 1

print(soma)
#print(zeros)