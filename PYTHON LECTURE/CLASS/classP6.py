class train:
    Gseat = 45
    _1AC = 10
    _2AC = 11
    _3AC = 12 
    def __init__(self,name,phone,stype):
        self.name = name
        self.phone = phone
        self.stype = stype

    def book(self):  
        print(f"{self.name}, your ticket successfully booked")
    def get_status(self):
        print(f"gemeral : {self.Gseat}\n1st AC : {self._1AC}\n2nd AC : {self._2AC}\n3rd AC : {self._3AC}")
        if(self.stype=="General"):
            self.Gseat-=1
            print(f"Currently available general seats : {self.Gseat}")
        elif self.stype=="1AC":
            self._1AC -=1
            print(f"Currently available 1AC seats : {self._1AC}")
        elif self.stype=="2AC":
            self._2AC -=1
            print(f"Currently available 2AC seats : {self._2AC}")
    def fare_info(self):
        print("station : dehradun\ndestination: Delhi\ntime : 3:15 PM")
name = input("Enter your name : ")
phone = int(input("Enter phone no. : "))
deb = input("Enter seat type : ")
obj = train()
obj.get_status()
obj.fare_info()
obj.book()