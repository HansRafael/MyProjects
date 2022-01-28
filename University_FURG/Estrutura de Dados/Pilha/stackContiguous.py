class StackContiguous:
    def __init__(self,tamanho):
        self.stack = [None] * tamanho
        self.lim = tamanho - 1
        self.base = 0
        self.top = self.base - 1
    
    def empty(self):
        if (self.top < self.lim):
            return True
        else:
            return False
    
    def __len__(self):                        #retornar o tamanho do nosso objeto   
        return self.top + 1    
    
    def push(self,dado):
        if (self.empty()):
            self.top += 1
            self.stack[self.top] = dado
        else:
            print('Lista Cheia!')
    
    def remove(self):
        if (self.top >= self.base):
            self.stack[self.top] = None
            self.top -= 1
        else:
            print('Lista vazia!')

    def removeAll(self):
        while (self.top >= self.base):
            self.stack[self.top] = None
            self.top -= 1
        self.base = 0
        self.top = self.base - 1
    
    def peek(self):
        if (self.top >= self.base):
            return self.stack[self.top].nome
        else:
            return 'top sem dog!'

    def comparation(self, lista1, lista2):
        if (len(lista1) == len(lista2)):
            Bool = bool
            cont = len(lista1) 
            i = 0
            while(i < cont):
                if ((lista1.stack[i].nome != lista2.stack[i].nome) or (lista1.stack[i].raca != lista2.stack[i].raca)):
                    print('Erro! O cão ' + str(lista1.stack[i].nome)+ '/'+ str(lista1.stack[i].raca) +' não é igual ao cão ' + str(lista2.stack[i].nome)+ '/'+ str(lista2.stack[i].raca))
                    Bool = False
                    break
                else:
                    Bool = True
                i += 1
            return Bool
        else:
            Bool = False
            return Bool
    

    def __repr__(self):
        r = ""
        auxPointer = self.top
        while(auxPointer >= self.base):
            r = r + "Nome:" + str(self.stack[auxPointer].nome) + '\n'+ "Raça:"+str(self.stack[auxPointer].raca) + "\n" + "↓" + "\n"
            auxPointer = auxPointer - 1
        return r

    def __str__(self):
        return  self.__repr__()


        