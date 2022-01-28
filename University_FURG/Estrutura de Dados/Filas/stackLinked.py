from nodeStackLinked import*
class StackLinked:
    def __init__(self):
        self.top = None
        self._sizeStack = 0

    def isEmpty(self):
        if (self.top == None):
            return True
        else:
            return False

    def __len__(self):                        #retornar o tamanho do nosso objeto   
        return self._sizeStack

    def push(self,data):
        if self.top:
            newNode = Node(data)
            newNode.next = self.top
            self.top = newNode
        else:
            self.top = Node(data)
        self._sizeStack += 1

    def remove(self):
        if (self.isEmpty()):
            print('Lista vazia!')
        else:
            removeNode = self.top
            self.top = self.top.next
            removeNode.next = None
            self._sizeStack -= 1
            return removeNode.data

    def removeAll(self):
        while (self.isEmpty() == False):
            self.remove()
        self._sizeStack = 0

    def peek(self):
        if (self.isEmpty()):
            return None
        else:
            return self.top.data
    
    def __repr__(self):
        r = ""
        auxPointer = self.top
        while(auxPointer):

            r = r + str(auxPointer.data) + "\n" + "↓" + "\n"
            auxPointer = auxPointer.next
        return r

    def __str__(self):
        return  self.__repr__()
    
    def _getNode(self, index):   #retorna o ponteiro na possicao q precisamos
        auxPointer = self.top
        for i in range(index):
            if auxPointer:
                auxPointer = auxPointer.next
            else:
                raise IndexError("Lista fora de range")           #lista vazia, ou posicao fora de range
        return auxPointer

    def __getitem__(self, index):                    #sobrecarga de operador =  
        auxPointer = self._getNode(index)
        if auxPointer: 
            return auxPointer.data
        else:
            raise IndexError("Lista fora de range")    

    def comparation(self, lista1, lista2):
        if (len(lista1) == len(lista2)):
            Bool = bool
            cont = len(lista1) - 1
            i = 0
            while(i <= cont):
                if ((lista1[i].nome != lista2[i].nome) or (lista1[i].raca != lista2[i].raca)):
                    Bool = False
                    print('Erro! O cão ' + str(lista1[i].nome)+ '/'+ str(lista1[i].raca) +' não é igual ao cão ' + str(lista2[i].nome)+ '/'+ str(lista2[i].raca))
                    break
                else:
                    Bool = True
                i += 1
            return Bool
        else:
            Bool = False
            return Bool


