## t = o tempo do sistema em que o processo fez sua requisição
## c = o número de ciclos de processamento que durará a execução do processo

#Considere que o tempo do sistema é contado em ciclos de processamento e que o 
# contador começa em 1 em cada caso de teste. Considere ainda que a entrada 
# é finalizada em fim de arquivo.

def checkFinalList(list,j):
    tam = len(list)
    if(j > tam):
        return 0
    else:
        return 1



while(True):
    try:
        timeSystem = 1  
        sumTime = 1
        a = int(input())
        numbers = {}
        for i in range(a):
            t,c = input().split(" ")
            numbers.append(int(t))
            numbers.append(int(c))
        

        print(sumTime)
        

    except EOFError:
        break