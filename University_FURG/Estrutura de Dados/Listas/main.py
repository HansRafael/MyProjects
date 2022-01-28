from list import*
def check(lugar,tamanho):
    if (lugar > tamanho):
        return 0
    else:
        return 1


def menu():
    ListaMenu =["1 - Quantas arrays", "2 - Novo aluno em ordem", "3 - Adicionar aluno em alguma posicao da LISTA", "4 - Remover um aluno de (x) posicao","5 - retornar um aluno numa determinada posição","6 - Mostrar todos alunos.","7 - buscar um Aluno e encontrar a posição,","0 - Sair"]
    for i in ListaMenu:
        print(i)
true = True
choice = None
lista = None
while(true):
    menu()
    choice = int(input("\nEscolha uma opção: "))

    if choice == 1:
        tamanho = int(input("Diga o tamanho da Array: "))
        lista = Lista(tamanho)
    if choice == 0:
        true = False
    if(lista):
        if choice == 2:
            dado = input("Nome Aluno: ")
            lista.insertOrder(dado)
        
        if choice == 3:
            dado = input("Nome do aluno: ")
            lugar = int(input("Posicao que deseja adicionar: "))
            if (check(lugar,tamanho) == 0):
                print('Fora de range! Tente outra posição!')
            else:
                lista.insertInPosition(dado,lugar)

        if choice == 4:
            lugar = int(input("Posicao que deseja remover: "))
            if (check(lugar,tamanho) == 0):
                print('Fora de range! Tente outra posição!')
            else:
                if(lista.dado(lugar) == None):
                    print('Sem dados')
                else:
                    lista.remove((lugar-1))

        if choice == 5:
            lugar = int(input("Digite a posicao que deseja acessar: "))
            if (check(lugar,tamanho) == 0):
                print('Fora de range! Tente outra posição!')
            else:
                if(lista.dado(lugar) == None):
                    print('Sem dados')
                else:
                    lista.show(lugar)

        if choice == 6:
            lista.showALl()
        
        if choice == 7:
            dado = input("Digite o Nome do aluno: ")
            if (lista.busca(dado) == None):
                print('Sem dado')
            else:
                lugar = lista.busca(dado)
                lista.show(lugar)
    else:
        print('Criar Lista primeroooooooo')


        '''    def removePosition(self,lugar):
        if (self.position == self.make):
            print('aqui1')
            print(lugar)
            print(self.position)
            if (lugar + 1 == self.position):
                self.list[lugar] = None
                self.position -= 1
            else:
                pass
        else:
            self.remove(lugar)
        '''