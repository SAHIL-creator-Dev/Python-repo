# list = [45,78,89,23]
# i=0
# while(i<len(list)):
#     print(list[i])
#     i+=1
# print("Using for loop..............")
# for i in list:
#     print(i)

# for i in range(20,0,-1):
#     print(i)

#multiplication table
# num = int(input("Enter the number : "))
# print(f"Table of {num} is -->")
# for i in range(1,11):
#     print(f"{num} * {i} = {num*i}")

# using while loop
num = int(input("Enter the number : "))
print(f"Table of {num} is -->")
i = 1
while(i<=10):
    print(f"{num} * {i} = {num*i}")
    i+=1

# break statement
# for i in range(1,21):
#     if i==10:
#         break
#     print(i)

#continue
# for i in range(1,21):
#     if i==5 or i==9:
#         continue
#     print(i)

# print reverse multiplication
num = int(input("Enter the number : "))
print(f"multiplecation table of {num}")
for i in range(10,0,-1):
    print(f"{num} * {i} = {num*i}")

#using while loop
i = 10
while i>0:
    print(f"{num} * {i} = {num*i}")
    i-=1