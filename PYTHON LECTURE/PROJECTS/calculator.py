# create a calculator
while True:
    ch = input("Enter your choice - \n1. Sum\n2. Sub\n3. mul\n4. Div\n5. calculate power\n6. Exit\nchoice : ")
    if(ch=='1'):
        a = input("Enter first number : ")
        b = input("Enter second number : ")
        if a.isnumeric() and b.isnumeric():
            a = float(a)
            b = float(b)
            print(f"---> {a} + {b} = {a+b}\n")
        else:
            print("-----please Enter only +ve numeric values-----\n")
    elif(ch=='2'):
        a = input("Enter first number : ")
        b = input("Enter second number : ")
        if a.isnumeric() and b.isnumeric():
            a = float(a)
            b = float(b)
            print(f"---> {a} - {b} = {a-b}\n")
        else:
            print("-----please Enter only +ve numeric values-----\n")
    elif(ch=='3'):
        a = input("Enter first number : ")
        b = input("Enter second number : ")
        if a.isnumeric() and b.isnumeric():
            a = float(a)
            b = float(b)
            print(f"---> {a} * {b} = {a*b}\n")
        else:
            print("-----please Enter only +ve numeric values-----\n")
    elif(ch=='4'):
        a = input("Enter divident number : ")
        b = input("Enter divisor number : ")
        if a.isnumeric() or b.isnumeric():
            a = float(a)
            b = float(b)
            print(f"---> {a} / {b} = {a/b}\n")
        else:
            print("-----please Enter only +ve numeric values-----\n")
    elif(ch=='5'):
        a = input("Enter base : ")
        b = input("Enter power : ")
        if a.isnumeric() and b.isnumeric():
            a = float(a)
            b = float(b)
            print(f"---> {a} ^ {b} = {a**b}\n")
        else:
            print("-----please Enter only +ve numeric values-----\n")
    elif(ch=='6'):
        s = input("Are you sure (Y/N): ")
        if s.upper()=='Y':
            print("-------END-------")
            break
        elif s.upper()=='N':
            continue
        else:
            print("You entered invalid character!\nRe-Enter your choise!\n")
    else:
        print("\n-----You Entered invalid choice!-----")
        print("-----please Enter valid choice!-----")