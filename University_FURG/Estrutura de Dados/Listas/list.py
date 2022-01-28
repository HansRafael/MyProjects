class Lista():
    def __init__(self,make):
        self.make = make
        self.list = [None]*make #cria a lista com n posições
        self.position = 0  #variável para controlar aonde o dado será inserido (posicao 0,1,2...n da lista)

    def dado(self,posi):  #retorna o que tem lista[x]
        return self.list[posi - 1]
    
    def busca(self,dado):  #retonar a posição do dado
        cont = 1
        for n in self.list:
            if n == dado:
                return cont
            cont+=1    

    def check(self,location):  #check para ver ser tem algo na posição lista[x]
        if(self.position < self.make): #se entrar, quer dizer que a lista não esta cheia
            if(self.list[location] == None):
                return 1
            else:
                return 0    #posicao contem algo
        else:        #lista está cheia
            return 2

    def insertOrder(self,dado):
        if (self.check(self.position) == 1):
            self.list[self.position] = dado
            self.position += 1  #toda vez que um elemento é inserido, o self.position aumenta 
        else:
            print('Lista cheia!1')

    def insertInPosition(self,dado,positionGave):
        if(self.check(positionGave - 1) == 1): #Funcao para sempre adicionar no final da lista
            self.list[self.position] = dado
            self.position += 1            

        elif(self.check(positionGave - 1) == 0): #funcao irá inserir na posicao desejada
            self.move((positionGave - 1),dado)
            self.position += 1
            
        elif(self.check(positionGave - 1) == 2):
            print('lista Cheia!')


    def remove(self,positionRemove):  #irá remover um elemento da lista, movendo a lista para a esquerda, pulando 1 casa
        print("position 1: ",self.position)
        cont = 0
        self.list[positionRemove] = None    #primeiro, remove o dado da posicao n
        newPosition = positionRemove       #variáveis auxiliare
        oldPosition = newPosition + 1
        cont = (self.position - positionRemove)        
        while(cont > 0):
            print(oldPosition)
            if (oldPosition >= self.make): #check para ver se está na última posição (serve para nao sair do range da Lista)
                self.list[newPosition] = None
                cont = 0
            else:
                self.list[newPosition] = self.list[oldPosition]   #irá mover o elemento da n+1 posicao para a n posicao
                newPosition +=1
                oldPosition +=1
                cont -=1
        self.position -= 1   #como um elemento foi removido, um novo espaço está disponível
        print("position 2: ",self.position)

    def move(self,positionChance,dado): #Irá mover a lista sempre para a direita, pulando 1 casa
        cont = 0
        oldPosition = 0
        newPosition = 0
        oldPosition = self.position     #última possicao
        newPosition = oldPosition + 1
        cont = (newPosition - positionChance) 
        while(cont > 0):
            oldPosition -= 1
            newPosition -= 1            
            cont -= 1
            self.list[newPosition] = self.list[oldPosition]  #irá mover o elemento da m posicao para m+1 posicao
        self.list[positionChance] = dado

    def show(self,location):
        print(location, self.list[location - 1]) 

    def showALl(self):
        cont = 1
        for n in self.list:
            if n == None:
                print(cont,"vazio")
            else:
                print(cont,n)
            cont+=1