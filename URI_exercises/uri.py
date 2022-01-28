class Matriz():
    def __init__(self,make):
        self.true = True
        self.cont = 1
        self.make = make 
        self.pos_linha = 0
        self.pos_coluna = 0   
        matriz = []
        for i in range(make):
            linha = []
            for j in range(make):
                linha+= '0'
            matriz+=[linha]

        self.matriz = matriz
    

    def mostrar(self):
        for i in self.matriz:
            for j in i:
                print(" ",j,end="")
            print()
        print("")

    def meio(self):
        cont = self.cont 
        posicao = self.make
        linha = self.pos_linha
        coluna = self.pos_coluna
        for i in range(self.make):
            self.matriz[linha][coluna] = self.cont
            linha += 1
            coluna += 1 

        
    def mov_up(self):
        true = self.true
        linha = self.pos_linha
        coluna = self.pos_coluna
        posicao = self.make
        cont = self.cont
        posicao -= 1
        while(true):
            coluna += 1
            a = coluna
            cont = cont + 1
            if (posicao == 0 ):
                true = False
            else:
                for i in range(posicao):
                    self.matriz[linha][coluna] = cont
                    linha += 1
                    coluna += 1           
            posicao = posicao - 1
            linha = 0
            coluna = a

    def mov_down(self):
        true = self.true
        linha = self.pos_linha
        coluna = self.pos_coluna
        posicao = self.make
        cont = self.cont
        posicao -= 1
        while(true):
            linha += 1
            a = linha
            cont = cont + 1
            if (posicao == 0 ):
                true = False
            else:
                for i in range(posicao):
                    self.matriz[linha][coluna] = cont
                    linha += 1
                    coluna += 1           
            posicao = posicao - 1
            coluna = 0
            linha = a


matrizao = None
true = True        
cont = None
posicao = None
while(true):
    choice = int(input())
    if (choice == 0):
        true = False
    else:
        matrizao = Matriz(choice)
        matrizao.meio()
        matrizao.mov_up()
        matrizao.mov_down()
        matrizao.mostrar()
                

        
