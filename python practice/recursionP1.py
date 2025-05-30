#print sum of n natural numbers using recursion
def rec(n):
    if(n==0):
        return 0
    else:
        return n+rec(n-1)
sum = rec(5)
print(sum)
