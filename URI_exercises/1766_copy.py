#Elas devem ser ordenadas primeiramente de forma decrescente por peso.
#Caso duas ou mais apresentarem o mesmo peso elas devem ser ordenadas de forma ascendente pela idade
# após pela altura e caso ainda persista empate, pelo nome.
class Renas():
    def __init__(self,tamanho,name,weight,age,height):
        self.name = [None]*tamanho
        self.weight = [None]*tamanho
        self.age = [None]*tamanho
        self.height = [None]*tamanho
        self.tamanho = tamanho
        self._position = -1

    def sorting(self,type):
        for i in range(1,self._position+1):
            key = self.type[i]
            key2 = self.valor[i]
            j = i-1
            while j >=0 and key < self.type[j]:     
                self.type[j+1] = self.type[j] 
                self.valor[j+1] = self.valor[j]
                j -= 1
            self.chave[j+1] = key
            self.valor[j+1]= key2

    def inserir(self,name,weight,age,height):
        self._position += 1
        self.name[self._position] = name
        self.weight[self._position] = weight
        self.age[self._position] = age
        self.height[self._position] = height
        self.sorting()

while(True):
    try:
        numberTests = int(input())
        for i in range(numberTests):
            total, utilizadas = input().split(" ")
            total = int(total)
            utilizadas = int(utilizadas)
            lista = [None]*total

            for i in range(total):
                name,weight,age,height = input().split(" ")
                name = str(name)
                weight = int(weight)
                age = int(age)
                height = float(height)
                lista[i] = (Renas(name,weight,age,height))
            

        


            



    except EOFError:
        break