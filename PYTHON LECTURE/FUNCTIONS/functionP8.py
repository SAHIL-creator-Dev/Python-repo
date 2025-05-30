# def fun():
#     s = sum(lis)
#     return float(s/num)

# num = int(input("Enter no of arguments : "))
# lis = []
# for i in range(1,num+1):
#     n = int(input("Enter argument : "))
#     lis.append(n)

# print(fun())

def sum(*arg):
    print(arg[0][0])

sum(input("").split(","))