#Elas devem ser ordenadas primeiramente de forma decrescente por peso.
#Caso duas ou mais apresentarem o mesmo peso elas devem ser ordenadas de forma ascendente pela idade
# após pela altura e caso ainda persista empate, pelo nome.
from operator import attrgetter

class Renas():
    def __init__(self,name,weight,age,height):
        self.name = name
        self.weight = weight
        self.age = age
        self.height = height

    def __repr__(self):
        return "%s %s %s %s" %(self.name,self.weight,self.age,self.height)

#ordenar objeto com várias variáveis
def multisort(lista, specs):
    #organizado do menos importante -> mais importante
    for key, reverse in reversed(specs):
        #attrgetter Retorne um objeto chamável (Renas) que busca attr de seu operando (name,age...). 
        lista.sort(key=attrgetter(key), reverse=reverse)
        print("Key= ",key)
        for i in range(len(lista)):
            print(lista[i])
    return lista

while(True):
    try:
        numberTests = int(input())
        
        for i in range(numberTests):
            total, utilizadas = input().split(" ")
            total = int(total)
            utilizadas = int(utilizadas)
            lista = [None]*total

            for j in range(total):
                name,weight,age,height = input().split(" ")
                name = str(name)
                weight = int(weight)
                age = int(age)
                height = float(height)
                a = Renas(name,weight,age,height)
                lista[j] = a
            
            var = multisort(list(lista), (('weight',True),('age',False),('height',False),('name',False)))

            print("CENARIO {%d}" %(i+1))        
            for i in range(utilizadas):
                print('{} - {}'.format(i+1,var[i].name))

    except EOFError:
        break



