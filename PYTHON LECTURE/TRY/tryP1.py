# while(1):
#     age = input("Enter age : ")
#     if age == "e":
#         break
#     try:
#         age = int(age)
#         if age>=18:
#             print("valid")
#     except Exception as a:
#         print("Error : ",a)

while(1):
    try:
        a = int(input("Enter the num : "))
        c = 1/a
    except Exception as e:
        print("Error : ",e)
        exit()
    finally:
        print("done")