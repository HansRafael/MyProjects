from QueueLinked import Queue
from stackLinked import StackLinked
def Sorting(queueC):
    queue = queueC
    auxOne = StackLinked()
    auxTwo = StackLinked()  

    cont = len(queue)
    
    while(cont):
        if((auxOne.top == None) or (queue.peek() < auxOne.peek())):
            auxOne.push(queue.peek())
            queue.remove()
            cont -=1
            stackTwoToStackOne(auxOne,auxTwo)
        else:
            auxTwo.push((auxOne.peek()))
            auxOne.remove()

    a = stackToQueue(auxOne,queue)
    return a

def stackTwoToStackOne(auxOne,auxTwo):
    while (auxTwo.top != None):
        auxOne.push(auxTwo.peek())
        auxTwo.remove()

def stackToQueue(auxOne,queue):
    cont = len(auxOne)
    while (cont):
        auxPointer = auxOne.peek()
        queue.push(auxPointer)
        auxOne.remove()
        cont -=1 
    return queue
