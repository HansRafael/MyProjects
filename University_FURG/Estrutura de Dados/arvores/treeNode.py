class Node:
    def __init__(self, data):
        self.data = data
        self.leftNext = None #referencias p filhos
        self.rightNext = None

    def __str__(self):
        return str(self.data)

class BinaryTree: #ponto de partida p/ realizar as funcoes
    def __init__(self, data):
        node = Node(data)
        self.root = node #a raiz vai ser o primeiro nó
        
    
    #percorer de mandeira simétrica, começando sempre pela esquerda (inorder)
    def simetric_traversal(self, node=None):    
        if node is None:
            node = self.root
        if node.leftNext:
            print('(', end ='')
            self.simetric_traversal(node.leftNext) #funcao recursiva
        print(node, end='')
        if node.rightNext:
            self.simetric_traversal(node.rightNext)
            print(')',end ='')
    
    def postorder_traversal(self, node=None):
        if node is None:
            node = self.root
        if node.leftNext:
            self.postorder_traversal(node.leftNext)
        if node.rightNext:
            self.postorder_traversal(node.leftNext)
        print(node)
