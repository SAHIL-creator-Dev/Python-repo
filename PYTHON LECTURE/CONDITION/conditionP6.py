# username = input("Enter username : ")
# if len(username)<10 and len(username)>5:
#     print("username contains less then 10 char and greater then 5 char")
# else:
#     print("username does not contains less then 10 char and greater then 5 char")

# P-5
# total_marks = int(input("Enter your total marks : "))
# if(total_marks>90):
#     print("Greade - 'A'")
# elif(total_marks<=90 and total_marks>80):
#     print("Greade - 'B'")
# elif(total_marks>70 and total_marks<=80):
#     print("Greade - 'C'")
# elif(total_marks<=60 and total_marks>50):
#     print("Gread - 'D'")
# elif(total_marks>33 and total_marks<=50):
#     print("Gread - 'E'")

#p-6
# text = "Hello my name sahil"
# name = input("Enter your name : ")

# if(name in text):
#     print("this is talking about sahil!")
# else:
#     print("This is not talking about sahil!")

# p-7
list = ["sahil","Mahima","Anshul","`item7"]
text = input("Enter text : ")

if(text in list):
    print(f"{text} is present in the list")
else:
    print(f"{text} is not present in the list")
