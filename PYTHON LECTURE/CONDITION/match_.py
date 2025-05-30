# val = 3
# match(val):#parameter
#     case 1: print("1")
#     case 3: print("3")
#     case 3: print("6")
#     case _: print("0")

choice=input("Enter choice: ")
match choice:
    case "1":
        print("Hello")
    case "2":
        print("Hy")
    
    case _:
        print("Wrong case entered")

