# write a program using function to find greatest of 3 numbers.
def greatest_num(a,b,c):
    if a>b and a>c:
        return a
    elif b>a and b>c:
        return b
    else:
        return c

a = int(input("Enter first number : "))
b = int(input("Enter second number : "))
c = int(input("Enter third number : "))
greatest = greatest_num(a,b,c)
print(f"greatest number is {greatest}")