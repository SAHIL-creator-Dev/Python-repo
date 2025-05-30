with open("first.txt", "a+") as f:
    f.write("hello world\n")
    f.seek(0)
    con = f.readlines()
    for i in con:
        print(i.strip())