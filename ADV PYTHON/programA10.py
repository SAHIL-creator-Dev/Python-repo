# f = open("first.txt", "w")
# f.write("Hello, My name is sahil\nI am learning file handling in python")
# f.close()

# f = open("first.txt", "r")
# data = f.read()
# print(data)
with open("first.txt", "a") as f:
    f.write("\nI am learning file handling in python")
    print("data appended successfully")