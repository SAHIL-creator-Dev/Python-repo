# dic = {}
# Name = input("Enter your name : ")
# fav_lan = input(f"Enter fav language {Name}: ")
# dic[Name] = fav_lan
# Name = input("Enter your name : ")
# fav_lan = input(f"Enter fav language {Name} : ")
# dic[Name] = fav_lan
# Name = input("Enter your name : ")
# fav_lan = input(f"Enter fav language {Name} : ")
# dic[Name] = fav_lan
# Name = input("Enter your name : ")
# fav_lan = input(f"Enter fav language : {Name} ")
# dic[Name] = fav_lan
# print(dic)

# dic_2 ={}
# a = input("Enter your name : ")
# l1 = input("Enter fav language : ")
# b = input("Enter your name : ")
# l2 = input("Enter fav language : ")
# c = input("Enter your name : ")
# l3 = input("Enter fav language : ")

# dic_2.update({a:l1,b:l2,c:l3})
# print(dic_2)

# dic = {}
# def fun(n):
#     if(n>0):
#         a = input("Enter your name : ")
#         b = input("Enter fav language : ")
#         dic[a] = b
#         fun(n-1)

# fun(4)
# print(dic)

dic = {}
Name = input("Enter your name : ")
fav_lan = input(f"Enter fav language {Name}: ")
dic.update({Name : fav_lan})
Name = input("Enter your name : ")
fav_lan = input(f"Enter fav language {Name} : ")
dic.update({Name : fav_lan})
Name = input("Enter your name : ")
fav_lan = input(f"Enter fav language {Name} : ")
dic.update({Name : fav_lan})
Name = input("Enter your name : ")
fav_lan = input(f"Enter fav language : {Name} ")
dic.update({Name : fav_lan})
print(dic)