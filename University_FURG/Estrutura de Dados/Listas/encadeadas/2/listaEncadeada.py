from node import*
class LinkedList:
    def __init__(self):
        self.head = None   #o inicio da lista
        self._sizeList = 0

    def insert(self,newElement):
        if self.head:
            auxPointer = self.head   #estão apontando p mesmo espaço, no caso o começo
            while(auxPointer.next):
                auxPointer = auxPointer.next  #com isso, o 'auxPointer' vai percorendo a lista, recebendo a posicao do proximo elemento
            auxPointer.next = Node(newElement) #irá conectar entao com o elemento
        else:
            self.head = Node(newElement)
        self._sizeList = self._sizeList + 1

    def insertInHalf(self, index, newElement):
        node = Node(newElement) 
        if (index == 0):            #inserir primeira position
            node.next = self.head
            self.head = node
        else:
            auxPointer = self._getNode(index-1)
            node.next = auxPointer.next   #primeiro, o nosso nó criado vai apontar p/ outros nós da frente
            auxPointer.next = node        #dps, ligamos o nó anterior com o novo criado
        self._sizeList += 1 
        
    def _getNode(self, index):   #retorna o ponteiro na possicao q precisamos
        auxPointer = self.head
        for i in range(index):
            if auxPointer:
                auxPointer = auxPointer.next
            else:
                raise IndexError("Lista fora de range")           #lista vazia, ou posicao fora de range
        return auxPointer
    
    def __len__(self):                        #retornar o tamanho do nosso objeto   
        return self._sizeList
    
    def __getitem__(self, index):                    #sobrecarga de operador =  
        auxPointer = self._getNode(index)
        if auxPointer: 
            return auxPointer.data
        else:
            raise IndexError("Lista fora de range")    
 
    def __setitem__(self, index, elemt):
        auxPointer = self._getNode(index)           #lista vazia, ou posicao fora de range
        if auxPointer: 
            auxPointer.data = elemt
        else:
            raise IndexError("Lista fora de range")    

    def search(self, elemt):
        auxPointer = self.head
        i = 0
        while(auxPointer):
            if auxPointer.data == elemt:
                return i
            auxPointer = auxPointer.next
            i = i + 1
        return 0

    def remove(self, elem):
        if (self.head == None):
            print('Lista vazia!')
        elif (self.head.data == elem):
            self.head = self.head.next
            return True
            self._sizeList -= 1
        else: 
            auxPrevious = self.head       #começa na 1 posicao
            auxPointer = self.head.next 
            while(auxPointer):
                if (auxPointer.data == elem):
                    auxPrevious.next = auxPointer.next
                    auxPointer.next = None
                auxPointer = auxPointer.next
                auxPrevious = auxPrevious.next
            self._sizeList -= 1    
            return True
        raise ValueError("{} Não está na lista".format(elem))

    def deleteAll(self):
        lista = None
        self.head = None
        self._sizeList = 0

    def __repr__(self):
        r = ""
        auxPointer = self.head
        while(auxPointer):
            r = r + str(auxPointer.data) + "->"
            auxPointer = auxPointer.next
        return r

    def __str__(self):
        return  self.__repr__()

    def comparing(self, lista1, lista2):
        if (len(lista1) == len(lista2)):
            Bool = bool
            cont = len(lista1) - 1
            i = 0
            while(i <= cont):
                if (lista1[i] != lista2[i]):
                    Bool = False
                    break
                else:
                    Bool = True
                i += 1
            return Bool
        else:
            Bool = False
            return Bool

    def showBackward(self, lista):
        if(len(lista) == 0):
            return 1
        else:
            r = ""
            cont = len(lista) - 1 
            i = -1
            while(i != cont):
                r = r + "<-" + str(lista[cont]) 
                cont -= 1
            return r
            

            
