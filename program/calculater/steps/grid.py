from tkinter import *

grid_root = Tk()

def new():
    print("submitted form! ")
    print(f"{user.get(), passwar.get(), privacyvalue.get()}\n")


    with open("record.text","a") as f:
        f.write(f"{user.get(), passwar.get(), privacyvalue.get()}\n")

grid_root.geometry("550x450")
user_name = Label(text="Username", font=("Times New Roman", 12, "bold"))
user_name.grid(row=0)
passward = Label(text="Passward", font=("Times New Roman", 12, "bold"))
passward.grid(row=1)

#variable classes in tkinter
# BooleanVar, Doublevar, IntVar, StringVar
user = StringVar()
passwar = StringVar()
userEntery = Entry(grid_root, textvariable=user)
passEntery = Entry(grid_root, textvariable=passwar)
userEntery.grid(row=0,column=1)
passEntery.grid(row=1,column=1)

f1 = Frame(grid_root, relief=SUNKEN, borderwidth=5)
f1.grid(row=3)
b1 = Button(f1, text="submit", font=("Times New Roman", 12, "bold"),padx=15, command=new)
b1.grid(row=3)
privacyvalue = IntVar()
privacy = Checkbutton(text="privacy and policy", variable=privacyvalue)
privacy.grid(row=5,column=3)
grid_root.mainloop()