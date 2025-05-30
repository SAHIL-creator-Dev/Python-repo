#find factorial of a number
def factorial(num):
    fact=1
    i = num
    while(i>=1):
        fact = fact*i
        i-=1
    print(fact)

factorial(5)