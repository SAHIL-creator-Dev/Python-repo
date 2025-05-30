from tkinter import *

fm_root = Tk()
fm_root.geometry("600x400")
fm_root.minsize(150, 100)
fm_root.maxsize(900, 600)
fm_root.title("CALCULATER")
f1 = Frame(fm_root, borderwidth=5, background="red", relief=SUNKEN)
f1.pack(fill="y", side="left")
title = Label(f1, text="MY CALCULATER", fg="red", font=("Times New Roman",12, "bold"))
title.pack(side="left",pady=100)
fm_root.mainloop()