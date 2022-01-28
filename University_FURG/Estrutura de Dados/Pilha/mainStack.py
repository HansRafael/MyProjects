from stackLinked import StackLinked
from stackContiguous import StackContiguous
from cachorro import Cachorro
tamanho = 5

stackOne = StackContiguous(tamanho)
stackTwo = StackContiguous(tamanho)

#stackOne = StackLinked()
#stackTwo = StackLinked()

#________MÉTODO PARA 'PUSH'_____________
stackOne.push(Cachorro('Tob','Chow-Chow'))
stackOne.push(Cachorro('Bob','Fila'))
stackOne.push(Cachorro('Molly','Vira-lata'))
stackOne.push(Cachorro('Rexis','Chiuauau'))
stackOne.push(Cachorro('Bilu','Pastor Alemão'))


stackTwo.push(Cachorro('Tob','Chow-Chow'))
stackTwo.push(Cachorro('Bob','Fila'))
stackTwo.push(Cachorro('Molly','Vira-lata'))
stackTwo.push(Cachorro('Rexis','Chiuauau'))




#_____________MÉTODO PRINT___________________
print("\nSize of the stack One is", len(stackOne))
print("\nSize of the stack Two is", len(stackTwo))
print("Top doguinho é:",stackOne.peek())
print('________Stack One________')
print(stackOne)
print('________Stack Two________')
print(stackTwo)

#_________MÉTODO DE COMPARAÇÃO___________
a = StackContiguous(tamanho)  #apenas cuidar para também trocar aqui o nome da classe para 'linked' ou 'contiguous'
#a = StackLinked()
Bool = a.comparation(stackOne,stackTwo)
if (Bool):
    print('As pilhas são iguais')
if (Bool == False):
    print('As pilhas são diferentes')

'''
___________MÉTODO REMOÇÃO_____________
stackOne.push(Cachorro('Tob','Chow-Chow'))
stackOne.push(Cachorro('Bob','Fila'))

stackOne.remove()
stackOne.remove()
stackOne.remove()
stackOne.remove()
stackOne.push(Cachorro('Molly','Vira-lata'))
stackOne.push(Cachorro('Rexis','Chiuauau'))
stackOne.push(Cachorro('Leona','Pastor Alemao'))
stackOne.push(Cachorro('Spyke','Pitbull'))

print("Top doguinho é:",stackOne.peek())
print('________Stack One________')
print(stackOne)
print('________Stack Two________')
print(stackTwo)
a = StackContiguous()
Bool = a.comparation(stackOne,stackTwo)
print(Bool)
if (Bool):
    print('iguais')
if (Bool == False):
    print('diferentes')

'''


