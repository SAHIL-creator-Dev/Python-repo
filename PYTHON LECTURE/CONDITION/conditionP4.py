a = int(input("Enter first number : "))
b = int(input("Enter second number : "))
c = int(input("Enter third number : "))
d = int(input("Enter forth number : "))

if(a>b and a>c and a>d):
    print(f"{a} is greatest!")
elif(b>a and b>c and b>d):
    print(f"{b} is greatest!")
elif(c>a and c>b and c>d):
    print(f"{c} is greatest!")
else:
    print(f"{d} is greatest!")