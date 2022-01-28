x = int(input())
a = 1
b = 1
c = 1

for i in range(x):
    b = a*a
    c = b*a
    print(a,b,c)
    print(a,b+1,c+1)
    a+=1        
