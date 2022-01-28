Lista[None]




def criar_array(tamanho)
    Lista

def mostrar(self,posi):
    print(self.list[posi])

def inserir(self,posicao,dado):
    if(self.list[posicao]):
        self.list.insert((posicao-1,dado)
    else:
        self.list[posicao] = dado

def remove(self,posicao):
    self.list.remove(posicao)



def menu():
    ListaMenu =["1 - Quantas arrays", "2 - Novo aluno", "3 - Remover um aluno","4 - Fazer uma buscar por posicao.","5 - Mostrar todos alunos.","6 - buscar um Aluno e encontrar a posição,","7 - fazer uma buscar genérica.","0 - Sair"]
    for i in ListaMenu:
        print(i)


true = True
lista = None
while(true):
    menu()
    choice = int(input())
    if choice == 1:
        tamanho = int(input("Digite o tamanho dela: "))
        lista = Lista(tamanho)

    if choice == 2:
        if(lista):
            lugar = int(input("Digete a posicao que deseja colocar: "))
            dado = input("Nome do aluno:")
            lista.inserir(lugar-1,dado)
        else:
            print("Crie primeiro uma array")
    if choice == 3:
        pass
    if choice == 4:
        pass
    if choice == 5:
        pass
    if choice == 6:
        pass
    if choice == 7:
        pass
    if choice == 0:
        true = False
