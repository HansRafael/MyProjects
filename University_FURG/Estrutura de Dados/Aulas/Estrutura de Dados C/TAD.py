class Lista():

    def __init__(self,make):
        self.make = make
        self.list = [None]*make
    
    def mostrar(self,posi):
        print(posi+1,self.list[posi])

    def check(self,posi):
        if (posi > 0 and posi <= self.make):
            return 1
        
    def dado(self,posi):
        return self.list[posi]

    def inserir(self,posicao,dado):
        self.list[posicao] = dado

    def busca(self,dado):
        cont = 1
        for n in self.list:
            if n == dado:
                return cont
            cont+=1

    def remove(self,posicao):
        self.list[posicao] = None

    def mostrar_todos(self):
        cont = 1
        for n in self.list:
            if n == None:
                print(cont,"vazio")
            else:
                print(cont,n)
            cont+=1

def no_data():
    print("Nenhum dado declarado ainda, escolher a opcao 2")

def fora_range():
    print("Fora do range!")

def criar_array():
    print("Crie primeiro uma array!")

def menu():
    ListaMenu =["1 - Quantas arrays", "2 - Novo aluno", "3 - Remover um aluno de (x) posicao","4 - retornar um aluno numa determinada posição","5 - Mostrar todos alunos.","6 - buscar um Aluno e encontrar a posição,","0 - Sair"]
    for i in ListaMenu:
        print(i)

true = True
choice = None
lista = None
while(true):
    menu()
    choice = int(input("\nEscolha uma opção: "))
    if choice == 1:
        tamanho = int(input("Digite o tamanho dela: "))
        lista = Lista(tamanho)

    if choice == 2:
        if(lista):
            lugar = int(input("Digete a posicao que deseja colocar: "))
            if (lista.check(lugar) == 1):
                dado = input("Nome do aluno:")
                lista.inserir(lugar-1,dado)
            else:
                fora_range()
        else:
            criar_array()
   
    if choice == 3:
        if(lista):
            lugar = int(input("Posicao que deseja remover: "))
            if (lista.check(lugar) == 1):    
                if (lista.dado(lugar-1) == None):
                    no_data()
                else:
                    lista.remove(lugar-1)
            else:
                fora_range()
        else:
            criar_array()
    
    if choice == 4:
        if(lista):
            lugar = int(input("Digite a possicao que deseja acessar: "))
            if (lista.check(lugar) == 1):
                if (lista.dado(lugar-1) == None):
                    no_data()
                else:
                    lista.mostrar(lugar-1)
            else:
                fora_range()
        else:
            criar_array()
    
    if choice == 5:
        if(lista):
            lista.mostrar_todos() 
        else:
            criar_array()

    if choice == 6:
        if(lista):
            dado = input("Digite o Nome do aluno: ")
            if (lista.busca(dado) == None):
                no_data()
            else:
                lugar = lista.busca(dado)
                lista.mostrar(lugar-1)
        else:
            criar_array()
   
    if choice == 0:
        true = False
