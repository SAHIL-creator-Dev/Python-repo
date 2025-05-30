class base1:
    name = "Rohan"
    marks = 89
class base2:
    name = "karan"
    marks = 85
class derived(base2,base1):
    name = "Ram"
    # marks = 100
obj = derived()
# obj.marks=98
print(obj.marks)