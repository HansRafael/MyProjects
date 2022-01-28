import math
class Tabela:
    def __init__(self, tamanho):
        self.chave = [None]*tamanho
        self.valor = [None]*tamanho
        self.tamanho = tamanho
        self._position = -1

    def vazia(self):
        return (self._position == -1)

    def cheia(self):
        return (self._position == self.tamanho - 1)
    
    def __repr__(self):
        string = "Chave    Valor\n"
        if (not self.vazia()):
            for i in range(self.tamanho):
                string = string + str(self.chave[i]) + ": " + str(self.valor[i]) + "\n"
        return string + "\n"

    def buscaSequencial(self,chave):
        if(not self.vazia()):
            for i in range(self._position + 1):
                if(self.chave[i] == chave):
                    return i
        return -1

    def buscaBinaria(self,chave):
        if(not self.vazia()):
            auxPosition = math.ceil((self._position + 1)/2) - 1
            position = auxPosition
            auxRepeticoe = 0
            while(position>=0 and position<= self._position):
                auxRepeticoe += 1
                auxBool = self.check(chave,self.chave[position])
                if (auxBool == 1):
                    return position,auxRepeticoe
                elif (auxBool == 2):  ##Indo p baixo
                        auxPosition = math.ceil(auxPosition/2)
                        position = position - auxPosition
                elif (auxBool == 3): #Indo p cima
                        auxPosition = math.ceil(auxPosition/2)
                        position = position + auxPosition
            return -1
        return -1

    def check(self, chave, chaveUp):
        if(chave == chaveUp):
            return 1
        elif(chave < chaveUp):
            return 2
        elif(chave > chaveUp):
            return 3

    def sorting(self):
        for i in range(1,self._position+1):
            key = self.chave[i]
            key2 = self.valor[i]
            j = i-1
            while j >=0 and key < self.chave[j]:     
                self.chave[j+1] = self.chave[j] 
                self.valor[j+1] = self.valor[j]
                j -= 1
            self.chave[j+1] = key
            self.valor[j+1]= key2


    def inserir(self,chave,valor):
        posicao = self.buscaSequencial(chave)
        if(posicao > -1):
            self.valor[posicao] = valor
        elif(not self.cheia()):
            self._position += 1
            self.chave[self._position] = chave
            self.valor[self._position] = valor
            self.sorting()
        else:
            return 'lista cheia!'
    
    def consulta(self,chave,op):
        if (op == 'bin'):
            if(self.buscaBinaria(chave) == -1):
                return 0,0
            else:
                posicao,repeticoes = self.buscaBinaria(chave)
                if(posicao > -1):
                    return self.valor[posicao],repeticoes
        if (op == 'seq'):
            posicao = self.buscaSequencial(chave)
            if(posicao > -1):
                return self.valor[posicao],posicao+1
            else: 
                return 0,0
    
    def excluir(self,chave):
        posicao = self.buscaSequencial(chave)
        if(posicao > -1):
            for i in range(posicao, self.tamanho):
                if(i == self.tamanho - 1):
                    self.chave[i] =  None
                    self.valor[i] = None
                else:
                    self.chave[i] =  self.chave[i+1]
                    self.valor[i] = self.valor[i+1]
            self._position -= 1
        else:
            return None
    
    def excluirAll(self):
        self.chave = [None]*self.tamanho
        self.valor = [None]*self.tamanho
        self._position = -1
