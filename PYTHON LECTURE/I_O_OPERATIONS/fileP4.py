with open("donkey.txt","r") as f:
    data = f.read()
    if "Donkey" in data:
        new_data = data.replace("Donkey","######")
        f = open("donkey.txt","w")
        f.write(new_data)
f.close()