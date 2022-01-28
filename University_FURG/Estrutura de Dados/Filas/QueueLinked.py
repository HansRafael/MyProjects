from Node import*
class Queue:
    def __init__(self):
        self.last = None  #First in, First Out
        self.first = None
        self._size = 0

    def isEmpty(self):
        if (self.top == None):
            return True
        else:
            return False

    def __len__(self):                        #retornar o tamanho do nosso objeto   
        return self._size

    def push(self,data):
        newNode = Node(data)
        if self.last is None:
            self.last = newNode
       
        else:
            self.last.next = newNode
            self.last = newNode
       
        if self.first is None:
            self.first = newNode
       
        self._size += 1

    def remove(self):
        #remove o primeiro elemento (first in, first out)
        if self.first is not None:
            elem = self.first.data
            self.first = self.first.next
            self._size -= 1
            return elem

    def removeAll(self):
        aux = self._size
        while aux:
            self.remove()
            aux -= 1
        self._size = 0

    def peek(self):
        if self.first is not None:
            elem = self.first.data
            return elem
    
    def __repr__(self):
        if self._size > 0:
            r = "Start: "
            auxPointer = self.first
            while(auxPointer):
                r = r + str(auxPointer.data) + " ← "
                auxPointer = auxPointer.next
            return r + ":End"
        return "Empty queue"
        
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



