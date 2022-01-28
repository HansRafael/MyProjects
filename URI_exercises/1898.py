l1=input()
l2=input()
a=''
b=''
c=''
d=''
e=''
cont=0

for i in range(len(l1)): 
        if l1[i] in '0123456789':
                while (l1[i]!='.'):
                        if cont<11:    
                                cont+=1
                                a=a+str(l1[i])
                        else:
                                b=b+str(l1[i])
                d=d+str(l1[i])
print("cpf ",a)

for i in range(len(l2)):
        if l2[i] in '0123456789':
               while (l1[i]!='.'):
                        c=c+str(l2[i])
                
        e=e+str(l2[i])
b=float(b)
c=float(c)
d=float(d/100)
e=float(e/100)
print("%.2f"%(c+b+d+e))