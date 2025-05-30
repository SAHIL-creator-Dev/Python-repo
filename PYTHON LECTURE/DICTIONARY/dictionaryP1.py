dic = {
    "pen":"kalam",
    "year":"saal",
    "munth":"mahina"
    }
# print(f"keys : {dic.keys()}")
word = input("Enter English word : ")

if(word in dic.keys()) :
    print(dic[word])
else :
    print("not available")
print(dict)

