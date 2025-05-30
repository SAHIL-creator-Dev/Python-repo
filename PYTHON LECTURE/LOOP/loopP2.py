# list = ["sahil","karan","kuber","shivan","hemant","sujal"]
# for i in list:
#     if i.startswith("s"):
#         print(f"good morning {i}")

#sum of n natural numbers
# num = int(input("Enter the number : "))
# sum = 0 
# for i in range(1,num+1):
#     sum = sum+i
# print(f"sum of first {num} natural numbers {sum}")

# find factorial of a number 
# num = int(input("Enter the number : "))
# fact = 1
# i = num
# while i>0:
#     fact = fact*i
#     i-=1
# print(f"factorial of {num} is {fact}")

# 

# list1 = ["sahil","kuber","saurabh","karan","vikash","soniya"]
# list2 = []
# print(f"Before transfering elements -->\nlist1 = {list1}\nlist2 = {list2}")
# for i in list1[:]:
#     if i.startswith("s") or i.startswith("v"):
#         list2.append(i)
#         list1.remove(i)
# print(f"After transfering elements -->\nlist1 = {list1}\nlist2 = {list2}")

l1 = ["sahil","karan","aditya","ashish","shivam","rohan","sujal","aman"]
l2 = []

for i in l1:
    if i.startswith("s") or i.startswith("a"):
        l2.append(i)

for j in l2:
    if j in l1:
        l1.remove(j)

print(l2)