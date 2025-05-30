class Cal:
    #class attribute
    name = "sahil" #Attribute of class
    age = 19
    address = "Rishikesh"
    def sum(arg):
        print(arg.a+arg.b)
    def details(arg):
        print(f"name : {arg.name}\nage : {arg.age}\naddress : {arg.address}")

obj = Cal()
obj.a = 45
obj.b = 50
obj.sum()
Cal.details(obj)