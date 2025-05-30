class base:
    name = "Rohan"
class derived_base(base):
    age = 19
class derived(derived_base):
    address = "rishikesh"
obj = derived()
print(obj.name)
del derived
