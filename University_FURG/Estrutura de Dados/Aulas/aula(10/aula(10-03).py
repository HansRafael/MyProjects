A,B,C=input().split();A=int(A);B=int(B);C=int(C)if A!=B and A!=C:
    print('A')
elif B!=A and B!=C:
    print('B')
elif C!=A and C!=B:
    print('C')
else:
    print("*")