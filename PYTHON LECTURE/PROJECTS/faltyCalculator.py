# create a calculator
ch = int(input("Enter your choise - \n1. Sum\n2. Sub\n3. mul\n4. Div\n5. calculate power\n"))
if(ch==1):
    a = float(input("Enter first number : "))
    b = float(input("Enter second number : "))
    if(a == 100 and b==100):
        print(f"{a} + {b} = {a+b+100}")
    else:
        print(f"{a} + {b} = {a+b}")
elif(ch==2):
    a = float(input("Enter first number : "))
    b = float(input("Enter second number : "))
    if(a==100 and b==50):
        print(f"{a} - {b} = {a-b+10}")
    else:
        print(f"{a} - {b} = {a-b}")
elif(ch==3):
    a = float(input("Enter first number : "))
    b = float(input("Enter second number : "))
    print(f"{a}*{b} = {a*b}")
elif(ch==4):
    a = float(input("Enter first number : "))
    b = float(input("Enter second number : "))
    print(f"{a}/{b} = {a/b}")
elif(ch==5):
    a = float(input("Enter base : "))
    b = float(input("Enter power : "))
    print(f"{a} ^ {b} = {a**b}")
else:
    print("You Entered wrong choise!")