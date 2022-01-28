class Matriz():
    def __init__(self,make):
        self.make = make
        self.pos_linha = int(make/2)
        self.pos_coluna = int(make/2)   
        matriz = []
        for i in range(make):
            linha = []
            for j in range(make):
                linha+= ['O']
            matriz+=[linha]

        self.matriz = matriz
    
    def check(self):
        if (self.pos_linha == (self.make - 1 ) and self.pos_coluna == (self.make - 1)):
            return 1


    def modificar(self):
        self.matriz[self.pos_linha][self.pos_coluna] = 'X'
    
    def tirar_zero(self):
        self.matriz[self.pos_linha][self.pos_coluna] = 'O'

    def mostrar(self):
        for i in self.matriz:
            for j in i:
                print(j, end='')
            print()
        print('@')

    def meio(self):
        self.modificar()
        self.mostrar()
        
    def mov_left(self):
        self.tirar_zero()
        self.pos_coluna = self.pos_coluna + 1
        self.modificar()
        self.mostrar()

    def mov_up(self):
        self.tirar_zero()
        self.pos_linha = self.pos_linha - 1
        self.modificar()
        self.mostrar()

    def mov_right(self):
        self.tirar_zero()
        self.pos_coluna = self.pos_coluna - 1
        self.modificar()
        self.mostrar()

    def mov_down(self):
        self.tirar_zero()
        self.pos_linha = self.pos_linha + 1
        self.modificar()
        self.mostrar()

matrizao = None
true = True

while(true):
    choice = int(input())
    if (choice == 0):
        true = False
    elif (choice == 1):
        matrizao = Matriz(choice)
        matrizao.meio()
    else:
        matrizao = Matriz(choice)
        matrizao.meio()
        cont_c = 0
        cont_1 = 1
        cont_2 = 2
        true_2 = True        
        while(true_2):
            if (cont_c == 0):
                for i in range(cont_1):
                    matrizao.mov_left()
                    a = matrizao.check()
                    if (a == 1):
                        true_2 = False
                        break
                a = matrizao.check()
                if (a == 1):
                    true_2 = False
                else:
                    for i in range(cont_1):
                        matrizao.mov_up()
                cont_1 = cont_1 + 2
                
            elif (cont_c == 1):
                for i in range(cont_2):
                    matrizao.mov_right()
                for i in range(cont_2):
                    matrizao.mov_down()
                cont_c = -1
                cont_2 = cont_2 + 2    
            cont_c+=1
            
            
                

        
