import time
from listaEncadeada import LinkedList
def squaredText(text: str):
    textSize = len(text)
    print('-'*(textSize + 10))
    print('|    ' + text + '    |')
    print('-'*(textSize + 10))


options = [
    "Criar",
    "Inserir elemento final da lista",
    "Inserir elemento na posição (x)",
    "Remover na posição (x)",
    "Buscar produto na posição (x)",
    "Buscar posição (x) ocupada pelo produto",
    "Imprimir lista",
    "Destruir",
    "Busca produto na posição (x) por recursão",
    "Buscar posição (x) ocupada pelo produto por recursão",
    "Sair"
]

selectedOption = lista = cont =  None
cont = 0
while selectedOption != 11:
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
    if(selectedOption == 1 and cont == 0):
        lista = LinkedList()
        print("Pode inserir os valores!")
        cont = 1

    if(cont):    
        if(selectedOption == 2):
            dado = int(input("Valor: "))
            lista.insert(dado)
        
        if(selectedOption == 3):
            dado = int(input("Valor: "))
            position = int(input("Posição: "))
            if((position <= len(lista) or position == 1) and position > 0):
                lista.insertInHalf((position-1),dado)
            else:
                print('Valor fora de range!')
            
        if(selectedOption == 4):
            position = int(input("Posição que deseja remover: "))
            if((position <= len(lista) and position!=0) and position > 0):
                elemt = lista[position-1]
                lista.remove(elemt)
            else:
                print('Valor fora de range!')

        if(selectedOption == 5):
            position = int(input("Posição que deseja acessar: "))
            if((position <= len(lista) and position!=0) and position > 0):
                print(lista[position - 1])
            else:
                print('Valor fora de range!')
        
        if(selectedOption == 6):
            dado = int(input("Dado que deseja acessar: "))
            position = lista.search(dado)
            if (position < 0):
                print('Fora de range')
            else:
                print("Posição: ",position + 1)
    
        if(selectedOption == 7):
            print(lista)
    
        if(selectedOption == 8):
            lista.deleteAll()
            cont = 0
        
        if(selectedOption == 9):
            auxPointer = lista.head
            position = int(input("Posição que deseja acessar: "))
            if((position <= len(lista) and position!=0) and position > 0):
                print(lista.getNodeRecursion(position-1,0,auxPointer).data)

        if(selectedOption == 10):
            dado = int(input("Dado que deseja acessar: "))
            auxPointer = lista.head
            i = 0
            position = lista.searchRecursion(dado,auxPointer,i)
            if (position < 0):
                print('Fora de range')
            else:
                print("Posição: ",position + 1)
    else:
        print('Opçao 1 primeiro')
