from tkinter import *

root = Tk()
def sahil(event):
    print(f"you click on the button {event.x, event.y}")
root.title("events")
root.geometry("500x400")
b1 = Button(root, text="enter")
b1.pack()
b1.bind('<Button-1>', sahil)
b1.bind('<Double-1>', quit)
root.mainloop()