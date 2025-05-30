class Complex:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag
    def show(self):
        print(f"Sum of complex numbers is {self.real}i + {self.imag}j")
    def __add__(self, other):
        return Complex(self.real + other.real, self.imag + other.imag)

num1 = input("Enter first complex number: ")
num2 = input("Enter second complex number: ")
num1 = num1.split("+")
num2 = num2.split("+")
for i in range(2):
    if "i" in num1[i] or "i" in num2[i]:
            num1[i] = num1[i].replace("i", "")
            num2[i] = num2[i].replace("i", "")
    if "j" in num1[i] or "j" in num2[i]:
            num1[i] = num1[i].replace("j", "")
            num2[i] = num2[i].replace("j", "")

for i in range(2):
    if num1[i] == "":
        num1[i] = 0
    if num2[i] == "":
        num2[i] = 0
num1 = [int(i) for i in num1]
num2 = [int(i) for i in num2]

obj = Complex(num1[0], num1[1])
obj2 = Complex(num2[0], num2[1])
num3 = obj+obj2
num3.show()
# print(f"Sum of complex numbers is {num3.real}i + {num3.imag}j")