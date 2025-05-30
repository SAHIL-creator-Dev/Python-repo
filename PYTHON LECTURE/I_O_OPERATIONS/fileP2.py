f = open("demo2.txt")
data = f.read()
if "sahil" in data:
    print("sahil is present in the file")
else:
    print("sahil is not present in text")
f.close()