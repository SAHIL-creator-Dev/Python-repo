class Cls:
    def __init__(self, name, marks1,marks2):
        self.name = name
        self.marks1 = marks1
        self.marks2 = marks2
    @property
    def result(self):
        print(f"Result of {self.name} is {self.marks1 + self.marks2}")

obj = Cls("Sahil", 90, 95)
obj.marks1 = 100
obj.result