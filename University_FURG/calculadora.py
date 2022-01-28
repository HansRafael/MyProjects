import time
class Calculadora():

    def listToInt(self, list): 
        s = [str(i) for i in list] 
        res = int("".join(s)) 
        return res

    def soma(self, a, b):
        start = time.time()
        cont_a = 0
        cont_b = 0
        somaproximo = 0
        lista_a = []
        lista_b = []
        resultado = []

        intResultado = 0

        for num in str(a):
            lista_a.append(int(num))

        for num in str(b):
            lista_b.append(int(num))

        # print(lista_a)
        # print(lista_b)

        cont_a = len(lista_a)
        cont_b = len(lista_b)

        # print(cont_a)
        # print(cont_b)

        if cont_a == cont_b:
            pass

        elif cont_a < cont_b:
            for n in range(cont_b - cont_a):
                lista_a.insert(0, 0) 
       
        elif cont_a > cont_b:
            for n in range(cont_a - cont_b):
                lista_b.insert(0, 0) 
        
        cont_a = len(lista_a) - 1
        cont_b = len(lista_b) - 1
        tam = len(lista_a) - 1

        # print("Lista a:", lista_a)
        # print("Lista b:", lista_b)
        
        # fazendo operações
         
        for key, value in enumerate(lista_a):
            # print("key: ",key)
            # print("cont_a", cont_a)
            # print("cont_b", cont_a)
            if (lista_a[cont_a] + lista_b[cont_b] + somaproximo) < 10:
                resultado.insert(0, (lista_a[cont_a] + lista_b[cont_b] + somaproximo))
                somaproximo = 0
                # print("Chegou here")
            elif (lista_a[cont_a] + lista_b[cont_b] + somaproximo) >= 10:
                if key == tam:
                    # print("Chegou aqui")
                    resultado.insert(0, (lista_a[cont_a] + lista_b[cont_b] + somaproximo)%10)
                    resultado.insert(0, 1)
                else:
                    # print("Chegou aqui em baixo")
                    resultado.insert(0, (lista_a[cont_a] + lista_b[cont_b] + somaproximo)%10)
                    somaproximo = 1
            cont_a-=1
            cont_b-=1

        
        intResultado = self.listToInt(resultado)
        end = time.time()
        return intResultado, end-start
    
    def put_zeros(self,lista_a,lista_b):
        cont_a = len(lista_a)
        cont_b = len(lista_b)

        if cont_a == cont_b:
            pass

        elif cont_a < cont_b:
            for n in range(cont_b - cont_a):
                lista_a.insert(0, 0) 
       
        elif cont_a > cont_b:
            for n in range(cont_a - cont_b):
                lista_b.insert(0, 0) 
        
        return lista_a,lista_b
    
    def make_array(self,a,b):
        cont_a = a
        cont_b = b
        lista_a = []
        lista_b = []
        
        for num in str(a):
            lista_a.append(int(num))

        for num in str(b):
            lista_b.append(int(num))
        
        return lista_a,lista_b

    def multiplica(self,a,b):
        start = time.time()
        cont_vezes = b
        lista_a = []
        lista_fixa,desc = self.make_array(a,b)
        
        # fazendo operações
        while cont_vezes != 0: 
            #print("voltou")
            lista_a,lista_fixa = self.put_zeros(lista_a,lista_fixa)
            somaproximo = 0
            cont_a = 0
            cont_fixa = 0
            cont_a = len(lista_a) - 1
            cont_fixa = len(lista_fixa) - 1
            tam = len(lista_a) - 1
            resultado = []
            for key, value in enumerate(lista_a):
                if (lista_a[cont_a] + lista_fixa[cont_fixa] + somaproximo) < 10:
                    resultado.insert(0, (lista_a[cont_a] + lista_fixa[cont_fixa] + somaproximo))
                    somaproximo = 0
                    #print("Chegou here")
                elif (lista_a[cont_a] + lista_fixa[cont_fixa] + somaproximo) >= 10:
                    if key == tam:
                        #print("Chegou aqui")
                        resultado.insert(0, (lista_a[cont_a] + lista_fixa[cont_fixa] + somaproximo)%10)
                        resultado.insert(0, 1)
                    else:
                        #print("Chegou aqui em baixo")
                        resultado.insert(0, (lista_a[cont_a] + lista_fixa[cont_fixa] + somaproximo)%10)
                        somaproximo = 1
                cont_a-=1
                cont_fixa-=1
            lista_a = resultado
            cont_vezes-=1
            intResultado = self.listToInt(resultado)
        end = time.time()
        return intResultado,end-start



while True:
    calc = Calculadora()
    print("Bem vindo:\n 1 - Soma\n 2 - Multiplicação")
    select = int(input("Selecione uma operação:"))
    if select == 1:
        print("___SOMA___")
        a = int(input("Digite o primeiro número para realizar a soma:\n"))
        b = int(input("Digite o segundo número:\n"))
        print("\n\nResultado: %a\nRealizado em %10.35f\n\n"%calc.soma(a, b))
    if select == 2:
        print("___MULTIPLICAÇÃO___")
        a = int(input("Digite o primeiro número para realizar a multiplicação:\n"))
        b = int(input("Digite o segundo número:\n"))
        print("\n\nResultado: %a\nRealizado em %10.35f\n\n"%calc.multiplica(a,b))