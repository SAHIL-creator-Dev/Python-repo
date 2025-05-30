from tkinter import *
root = Tk()
def func():
    print("Click Exit")

root.geometry("600x550")
#Use these to creat a non dropdown menue
# mymenu = Menu(root)
# mymenu.add_command(label="more_option", command=func)
# mymenu.add_command(label="Exit", command=quit)
# root.config(menu=mymenu)
yourmember = Menu(root)
m1 = Menu(yourmember, tearoff=0)
m1.add_command(label="file", command=func)
m1.add_command(label="open", command=func)
m1.add_separator()
m1.add_command(label="remove", command=func)
m1.add_command(label="find", command=func)
yourmember.add_cascade(label="menu", menu=m1)
root.config(menu=yourmember)
root.mainloop()