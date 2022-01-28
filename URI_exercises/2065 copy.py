while(True):
    try:
        
        employee, customers = input().split(" ")
        employee = int(employee)
        customers = int(customers)
        
        values1 = input()
        valores = values1.split()
        timeByEmployee = [int(valor) for valor in valores]

        values2 = input()
        valor2 = values2.split()
        itemsByCustomers =[int(valor) for valor in valor2]
    

        tempoGasto = [None]*employee
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