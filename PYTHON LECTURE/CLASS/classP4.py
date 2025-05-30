class Employee:
    def __init__(self,name,age,salary,post):
        self.name = name
        self.age = age
        self.salary = salary
        self.post = post
    def details(self):
        print(f"name : {self.name}\nage : {self.age}\n salary : {self.salary}\npost : {self.post}")
obj = Employee("Rohan",20,150000,"manager")
obj.details()