def game():
    a = input("Enter the score : ")
    return a

score = game()
with open("game_file.txt","r") as f:
    text = f.read()
    if int(score) > int(text):
        f = open("game_file.txt","w")
        f.write(score)
        print("New High Score : ",score)
    else:
        print(f"Current high score : {text}")
f.close()