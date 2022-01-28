true = True
while(true):
    true= False
    try:
        
        l1=input()
        l2=input()
        cont = 0

        cpf = ''
        n1 = ''
        n2 = ''
        for i in range(len(l1)): 
            if l1[i] in '0123456789.':
                if cont<11:
                    cpf = cpf + str(l1[i])
                    cont = cont + 1
                else:
                    n1 = n1 + str(l1[i])

        for i in range(len(l2)):
            if l2[i] in '0123456789.':
                n2 = n2 + str(l2[i])

        print(n2)
        n1 = float(n1)
        n2 = float(n2)
        soma = n1 + n2

        print("cpf",cpf)
        print("%.2f"%soma)
        
    except EOFError:  #se não ouver mais entrada teste de texto, o programa para
        break
