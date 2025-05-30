# sum of n natural numbers
def sum(n):
    if n==1:
        return 1
    return n+sum(n-1)

n = int(input("Enter number : "))
sum = sum(n)
print(f"sum of first {n} natural numbers : {sum}")