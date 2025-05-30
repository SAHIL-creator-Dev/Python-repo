l1 = ["sahil","karan","aditya","ashish","shivam","rohan","sujal","aman"]
l2 = [name for name in l1 if name.startswith(('s','a'))]
l1 = [name for name in l1 if not name.startswith(('s','a'))]
print(l2)
print(l1)