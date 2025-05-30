from tkinter import *

image_root = Tk()
image_root.geometry("600x400")
photo = PhotoImage(file = "1.png")
image = Label(image = photo)
image.pack()
image_root.mainloop()