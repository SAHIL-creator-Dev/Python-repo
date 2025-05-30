# simple inheritance
class base_cls:
    name = "sahil"
class child_cls(base_cls):
    name = "rohan"
obj = child_cls()
obj.name = "Karan"
print(obj.name)