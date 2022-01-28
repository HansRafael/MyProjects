while(True):
    try:
        palavra = input()
        cpf = palavra.translate({ord(i): None for i in '.-'})
        b1 = 0
        b2 = 0
        for i in range(9):
            b1 += (1+i) * int(cpf[i])
            b2 += (9-i) * int(cpf[i])
        
        if ((b1%11 == int(cpf[9]) or (b1%11 == (int(cpf[9])+10) )) and (b2%11 == int(cpf[10]) or (b2%11 == (int(cpf[10])+10)))):
            print('CPF valido')
        else:
            print('CPF invalido')   

    except EOFError:  #se não ouver mais entrada teste de texto, o programa para
        break