words = ["donkey","foolish","idiot","stupid"]
with open("demo3.txt","r") as f:
    data = f.read()

for i in words:
    data = data.replace(i,"######")
    with open("demo3.txt","w") as f:
        f.write(data)