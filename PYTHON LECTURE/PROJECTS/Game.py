import random
choice = ["rock","paper","scissors"]
computer_pt =0
user_pt = 0
while True:
    computer = random.choice(choice)
    
    print("Enter your choice(rock/paper/scissors) --> ")
    print("(If you want to exit then enter 'Exit' )")
    user = input("Enter : ")
    
    
    if computer==user:
        print(f"your choice : {user}\ncomputer choice : {computer}")
        print("----- Draw -----")
        computer_pt+=1
        user_pt+=1
    elif (computer=="rock" and user.lower()=="paper") or (computer=="paper" and user.lower()=="scissors") or (computer=="scissors" and user.lower()=="rock"):
        print(f"your choice : {user}\ncomputer choice : {computer}")
        print("----- You win ------")
        user_pt+=1
    elif (user.lower()=="rock" and computer=="paper") or (user.lower()=="paper" and computer=="scissors") or (user.lower()=="scissors" and computer=="rock"):
        print(f"your choice : {user}\ncomputer choice : {computer}")
        print("----- You lose -----")
        computer_pt+=1
    elif user.lower()=="exit":
        if user_pt>computer_pt:
            print(f"---- You win the game by {user_pt-computer_pt} points ----")
        elif user_pt==computer_pt:
            print("---- game draw ----")
        else:
            print(f"---- You lose the game by {computer_pt-user_pt} points ----")
        break
    else:
        print("----- please Enter valid choice! -----")
        continue
    print(f"---> Your points : {user_pt}\n---> computer points : {computer_pt}\n")
        