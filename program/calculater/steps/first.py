from tkinter import *

root = Tk()
root.title("sahil")
root.geometry("400x480")
root.minsize(400, 480)
root.maxsize(400, 480)
screen = Entry(root, borderwidth=6, relief=SUNKEN, font=("times New Roman", 28, "bold"))
screen.pack(fill="x")

f1 = Frame(root, relief=SUNKEN, borderwidth=6)
f1.pack(side="top")
b1 = Button(f1, text="7", font=("Times New Roman", 16, "bold"))
b1.pack(side="left")

root.mainloop()