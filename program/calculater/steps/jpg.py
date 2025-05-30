from tkinter import *
from PIL import Image, ImageTk
jpg_root = Tk()
image = Image.open("2.jpg")
photo = ImageTk.PhotoImage(image)
lable = Label(image=photo)
lable.pack()
jpg_root.mainloop()