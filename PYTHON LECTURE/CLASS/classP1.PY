class A:
    #class attribute
    name = "sahil" #Attribute of class
    age = 19
    address = "Rishikesh"

b = A() #instance/object of class
c = A()
print(b.name)
print(c.age)
b.cource="PYTHON" # object attribute
b.name="anshul"
print(b.name)
print(b.cource)