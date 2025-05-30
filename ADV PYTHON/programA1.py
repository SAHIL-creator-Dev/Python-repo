class cls1:
    def __init__(self, a,b):
        self.a = a
        self.b = b
        
    def __init__(self, c,d):
        self.c = c
        self.d = d
    
    def sum(self):
        print(f"{self.c+self.d}")
    @staticmethod
    def fun():
        print(f"hello")
    


obj = cls1(4, 5)
obj2 = cls1(7.8, 8.9)
obj.sum()
obj2.sum()
obj.fun()