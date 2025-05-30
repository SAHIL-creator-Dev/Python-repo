class cls:
    def __init__(self, name, password):
        self.name = name
        self.__password = password
    
    def get(self):
        return self.__password

obj = cls("sahil",4578)
print(obj.get())
