while(True):
    try:
        mostrar = []
        In = int(input())
        if(In == 0):
            true = False
        else:
            for i in range(In):
                palavra = input()
                dot = palavra.count('.')
                space = palavra.count(' ')
                palavra_nova = palavra.split(' ')
                dot_line = palavra_nova[0].count('.')
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

            for i in mostrar:
                print(i)
    except EOFError:
        break
