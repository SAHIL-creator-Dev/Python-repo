def find_line():
    word = "Python"
    data = True
    line_no = 1
    with open("demoP7.txt","r") as f:
        while data:
            data = f.readline()
            if word in data:
                print(f"line no : {line_no}\nline : {data}")
                return
            line_no +=1
find_line()