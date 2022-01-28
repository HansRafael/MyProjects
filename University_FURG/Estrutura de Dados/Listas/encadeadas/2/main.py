import time
from listaEncadeada import LinkedList
def squaredText(text: str):
    textSize = len(text)
    print('-'*(textSize + 10))
    print('|    ' + text + '    |')
    print('-'*(textSize + 10))


options = [
    "Criar listas",
    "Inserir elemento Lista - 01",
    "Inserir elemento Lista - 02",
    "Número de elementos",
    "Comparar Listas",
    "Imprimir valores da lista 1 de trás para frente",
    "Imprimir listas",
    "Sair"
]

selectedOption = listaOne = listaTwo = cont = Bool =  None
cont= 0
while selectedOption != 8:
    squaredText('Digite a opção desejada:')
    for key, option in enumerate(options):
        print((key + 1), '-', option)
    try:
        selectedOption = int(input())
        if not selectedOption:
            raise ValueError('Digite uma opção válida')
    except ValueError as e:
        print('Digite uma opção válida')
        time.sleep(1)
    if(selectedOption == 1 and cont==0):
        listaOne = LinkedList()
        listaTwo = LinkedList()
        print("Pode inserir os valores!")
        cont = 1

    if(cont):    
        if(selectedOption == 2):
            dado = int(input("Valor: "))
            listaOne.insert(dado)

        if(selectedOption == 3):
            dado = int(input("Valor: "))
            listaTwo.insert(dado)

        if(selectedOption == 4):
            print("O número de elementos da lista 1 é: ",len(listaOne))
            print("O número de elementos da lista 2 é: ",len(listaTwo))

        if(selectedOption == 5):
            a = LinkedList()
            Bool = a.comparing(listaOne,listaTwo)
            if Bool:
                print('Iguais')
            else:
                print('Diferentes')

        if(selectedOption == 6):
            a = LinkedList()
            b = a.showBackward(listaOne)
            if (b == 1):
                print('Lista vazia')
            else:
                print(b)

        if(selectedOption == 7):
            print(listaOne)
            print(listaTwo)
    
        if(selectedOption == 11):
            listaOne.deleteAll()
            listaTwo.deleteAll()
            cont = 0
    else:
        print('Opçao 1 primeiro')
