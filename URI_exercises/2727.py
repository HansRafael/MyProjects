while(True):
    try:
        mostrar = []  #cria a lista aonde será imprimida a palavra formada
        In = int(input())  #recebe quantas letras serão decifradas
        while(In > 0):
            palavra = input()
            dot = palavra.count('.')
            space = palavra.count(' ')
            palavra_nova = palavra.split(' ') #Irá separar os conjuntos de pontos nos espaços
            dot_line = palavra_nova[0].count('.') #Irá ler, no primeiro conjunto de pontos, quantos pontos há
            if (dot_line == 1):   
                var = (dot*2 + (space - 1))+96
                letra = chr(var)
                mostrar.append(letra)
            if (dot_line == 2):
                var = (dot_line*(space + 1) + space)+96
                letra = chr(var)
                mostrar.append(letra)
            if (dot_line == 3):
                var = dot+96
                letra = chr(var)
                mostrar.append(letra)
            In -= 1
        for n in mostrar:
            print(n)
    except EOFError:  #se não ouver mais entrada teste de texto, o programa para
        break
