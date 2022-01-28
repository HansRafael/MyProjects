from QueueLinked import Queue
from stackLinked import StackLinked
from functionSorting import Sorting
    
queueOne = Queue()

#print(queueOne)
queueOne.push(-1)
queueOne.push(1)
queueOne.push(356)
queueOne.push(9)
queueOne.push(2)
queueOne.push(-32)
queueOne.push(99999999999999)
queueOne.push(-1023)
queueOne.push(3124)
queueOne.push(999)
queueOne.push(0)
queueOne.push(1)
queueOne.push(-398312)
print('\n______________Lista Recebida______________\n')
print(queueOne)


#queueOne.remove()
#print(queueOne)
#queueOne.remove()
#print(queueOne)
#queueOne.removeAll()
#print(queueOne)
print('\n______________Lista Ordenada______________\n')
queueOne = Sorting(queueOne)
print(queueOne)
queueOne.removeAll()
queueOne = Sorting(queueOne)
print(queueOne)


