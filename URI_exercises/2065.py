while(True):
    try:
        
        employee, customers = input().split(" ")
        timeByEmployee = []
        itemsByCustomers = []
        employee = int(employee)
        customers = int(customers)
        tempoGasto = [None]*employee
        
        values1 = input()
        values2 = input()
        for i in values1.split():
            timeByEmployee.append(int(i))
        for i in values2.split():
            itemsByCustomers.append(int(i))



        count = 0
        while(count < customers):
            if(count < employee):
                tempoGasto[count] = itemsByCustomers[count] * timeByEmployee[count]
                count+=1
            else:
                ##Caso tenha passado do numero max de clientes, 
                #devemos smp voltar p funcionar de menor numeracao. 
                index = tempoGasto[0] 
                count_2 = 0
                for i in range(employee):
                    # Nesse caso, vamos ver se o tempo gasto para o cliente 1 é menor que 
                    if(index > tempoGasto[i]):
                        index = tempoGasto[i]
                        count_2 = i
                tempoGasto[count_2] += itemsByCustomers[count] * timeByEmployee[count_2]
                count+=1
                count_2 = 0
        
        index = tempoGasto[0]
        for i in range(employee):
            if(index < tempoGasto[i]):
                index = tempoGasto[i]
        
        print(index)


    except EOFError:
        break