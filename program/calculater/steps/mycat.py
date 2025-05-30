from tkinter import *


root= Tk()
root.geometry("654x545")
root.minsize(125,165)
root.maxsize(1100,845) 
root.title("fist project")
f1 = Frame(root, bg="orange", borderwidth=6)
f1.pack(side=LEFT, fill="y")

anshul = Label(f1, text="(she)  is my dog\n  gorgeous", bg="blue")
anshul.pack( pady=150)
scvalue = StringVar()
scvalue.set("")
screen = Entry(root, textvar=scvalue)
screen.pack(fill="x", ipadx=8, pady=10, padx=12)
root.mainloop()