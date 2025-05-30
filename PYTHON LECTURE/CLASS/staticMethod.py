class StaticMethod:
    @staticmethod
    def greet(var):
        print(f"hello {var}")
obj = StaticMethod()
obj.greet("Rohan")