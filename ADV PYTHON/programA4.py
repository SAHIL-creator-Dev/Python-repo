class base_cls1:
    def __init__(self, name, password):
        self.name = name
        self.password = password
    
    def display1(self):
        print(f"Name: {self.name}, Password: {self.password}")

class base_cls2:
    def __init__(self, age):
        self.age = age
    
    def display2(self):
        print(f"Age: {self.age}")
    
class derived_cls(base_cls1,base_cls2):
    def __init__(self, name, password, age):
        super().__init__(name, password)
        # super().__init__(self,age)
        self.age = age
    def display(self):
        print(f"Name: {self.name}, Password: {self.password}, Age: {self.age}")

obj = derived_cls("sahil", 4578, 21)
obj.display()
obj.display1()
obj.display2()
