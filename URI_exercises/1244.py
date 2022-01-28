while(True):
    try:
        numberTests = int(input())
        
        for i in range(numberTests):
            string = input().split(" ")
            a = sorted(string, key=len,reverse=True)
            print(*a)



    except EOFError:
        break