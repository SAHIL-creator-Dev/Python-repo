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