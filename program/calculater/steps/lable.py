from tkinter import *

lab_root = Tk()
lab_root.title("CALCULATER")
lab_root.geometry("450x500")
title = Label(text = "sahil thapa",bg = "orange", fg = "green", padx=50,pady=50, font=("Times NEW Roman", 16, "bold"), borderwidth=5,relief=SUNKEN)
#2. font = "Times New Roman 16 bold"

#pack- 1.anchor, 2.side, 3.fill, 4.padx, 5.pady
title.pack(side="top",anchor="sw")
lab_root.mainloop()