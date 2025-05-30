import random
computer = random.randint(1000,9999)
count_st = 0
while True:

    user = input("Enter the number (1-100) : ")
    try:
        if int(user)==computer:
            print(f"you guess the currect number in after {count_st} gusses!")
            break
        elif int(user)<computer:
            print("you are wrong! guess larger number")
            count_st+=1
        elif int(user)>computer:
            print("you are wrong! guess smaller number")
            count_st+=1
        elif int(user)>100:
            print("Enter number between 1 - 100")
        else:
            print("please enter only 1 - 100 numbers!")
    except Exception as e:
        print(e)
