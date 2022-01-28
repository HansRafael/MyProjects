while(True):
    try:
        cpf = []
        cpf  = input()
        b1 = 0
        b2 = 0
        for i in range(9):
            b1 += (1+i) * int(cpf[i])
            b2 += (9-i) * int(cpf[i])
        print(cpf)
        

    
        
    except EOFError:  #se não ouver mais entrada teste de texto, o programa para
        break