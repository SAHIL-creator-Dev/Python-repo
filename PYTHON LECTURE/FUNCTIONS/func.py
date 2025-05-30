def fun():
    sum = 0
    for i in range(0,len(lis)):
        sum = sum+lis[0]
    return float(sum/num)

num = int(input("Enter no of arguments : "))
lis = []
for i in range(1,num+1):
    n = int(input("Enter argument : "))
    lis.append(n)

print(fun())