class base:
    def __init__(self,fname,lname):
        self.fname = fname
        self.lname = lname
class derived(base):
    def __init__(self, fname, lname):
        super().__init__(fname, lname)
obj = derived("rohan","kumar")
print(obj.fname)