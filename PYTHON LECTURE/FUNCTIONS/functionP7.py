# find greatest of numbers
def greatest(*arg):
    lis.sort(reverse=True)
    return lis[0]

num = int(input("Enter no of arguments : "))
lis = []
for i in range(1,num+1):
    n = int(input("Enter argument : "))
    lis.append(n)
a = greatest(lis)
print(a)

# def great(*arg):
#     gre = 0
#     for i in range(0,len(arg)):
#         if(gre<arg[i]):
#             gre = arg[i]
#     return gre

# print(great(12,86,89,23,124))

# find greatest of numbers
def greatest(*arg):
    arg = list(arg)
    arg[0].sort(reverse=True)
    return arg[0][0]

num = int(input("Enter no of arguments : "))
lis = []
for i in range(1,num+1):
    n = int(input("Enter argument : "))
    lis.append(n)
print(greatest(lis))
