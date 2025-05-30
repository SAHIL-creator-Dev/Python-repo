class Base:
    name = "sahil"
    @classmethod
    def fun(cls):
        cls.name = "Rohan"

obj = Base()
print(Base.name)
obj.fun()
print(Base.name)