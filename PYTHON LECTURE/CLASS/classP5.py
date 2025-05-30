class calculator:
    def __init__(self,num):
        self.num = num
    def square(self):
        print(f"Square of {self.num} is {self.num**2}")
    def cube(self):
        print(f"cube of {self.num} is {self.num**3}")
    def square_root(self):
        print(f"Square root of {self.num} is {self.num**0.5}")
num = int(input("Enter the number : "))
obj = calculator(num)
obj.square()
obj.cube()
obj.square_root()