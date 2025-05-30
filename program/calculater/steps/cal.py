from tkinter import *
from tkinter.messagebox import *
def click(event) :
    b = event.widget
    text = b['text']
    print(text)

    if text == "=":
       try:
        ex = screen.get()
        ans = eval(ex)
        screen.delete(0, END)
        screen.insert(0, ans)
       except Exception as e:
           print("Error..", e)
           showerror("Error..", e)
       return
    
    elif text == "C":
        scvalue.set("")
        screen.update()
    elif text == "CE":
        screen.delete(0, END)
    elif text == "bs":
        pass
    elif text == "" :
        ex = screen.get()
        ex = ex[0:len(ex)-1]
        screen.delete(0, END)
        screen.insert(0, ex)
    elif text== "%" :
        ex = screen.get()
        ans = eval(ex)
        per = ans/100
        screen.delete(0, END)
        screen.insert(0,per)
        return
    else:
        scvalue.set(scvalue.get() + text)
        screen.update()

prac_root = Tk()
prac_root.geometry("450x480")
prac_root.minsize(450, 480)
prac_root.maxsize(450, 480)
prac_root.wm_iconbitmap("1.ico")
prac_root.title("Calculator")
prac_root.configure(background="#a2bbcf", relief=RIDGE)

f1 = Frame(prac_root, bg="black", relief=RIDGE, borderwidth=6)
f1.pack(fill="y", side="left",pady=8)
title = Label(f1, text="Let's Start", font=("Times New Roman", 12 , "bold"), fg="red", bg="orange", borderwidth=5, relief=SUNKEN)
title.pack(side="left",pady=100)

scvalue = StringVar()
scvalue.set("")
screen_frame = Frame(prac_root, relief=RIDGE, borderwidth=6)
screen_frame.pack(fill="x",padx=5,pady=10)
screen = Entry(screen_frame,textvar=scvalue, font=("Times New Roman", 27, "bold"), justify=RIGHT)
screen.pack(pady=5,padx=5)
screen.insert(END, "0",)

f2 = Frame(prac_root, relief=RIDGE,bg="#a2bbcf", borderwidth=6)
f2.pack(side="top")
b1 = Button(f2, text="CE",font=("Times New Roman", 16, "bold"),padx=16,bg="#3697f5",fg="white")
b1.pack(side="left",padx=5,pady=5)
b1.bind("<Button-1>", click)

b2 = Button(f2, text="C",font=("Times New Roman", 16, "bold"),padx=20,bg="orange",fg="white")
b2.pack(side="left",padx=5,pady=5)
b2.bind("<Button-1>", click)

b3 = Button(f2, text="%",font=("Times New Roman", 16, "bold"),padx=18,bg="orange",fg="white")
b3.pack(side="left",padx=5,pady=5)
b3.bind("<Button-1>", click)

b4 = Button(f2, text="",font=("Times New Roman", 16, "bold"),padx=20,bg="#3697f5",fg="white")
b4.pack(side="left",padx=5,pady=5)
b4.bind("<Button-1>", click)

f3 = Frame(prac_root, relief=RIDGE, bg="#a2bbcf",borderwidth=6)
f3.pack(side="top")
b5 = Button(f3, text="sin",font=("Times New Roman", 16, "bold"),padx=17,bg="orange",fg="white")
b5.pack(side="left",padx=5,pady=5)
b5.bind("<Button-1>", click)

b6 = Button(f3, text="cos",font=("Times New Roman", 16, "bold"),padx=14,bg="orange",fg="white")
b6.pack(side="left",padx=5,pady=5)
b6.bind("<Button-1>", click)

b7 = Button(f3, text="√",font=("Times New Roman", 16, "bold"),padx=23,bg="orange",fg="white")
b7.pack(side="left",padx=5,pady=5)
b7.bind("<Button-1>", click)

b8 = Button(f3, text="/",font=("Times New Roman", 16, "bold"),padx=27,bg="orange",fg="white")
b8.pack(side="left",padx=5,pady=5)
b8.bind("<Button-1>", click)

f4 = Frame(prac_root, relief=RIDGE, bg="#a2bbcf",borderwidth=6)
f4.pack(side="top")
b9 = Button(f4, text="7",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b9.pack(side="left",padx=5,pady=5)
b9.bind("<Button-1>", click)

b10 = Button(f4, text="8",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b10.pack(side="left",padx=5,pady=5)
b10.bind("<Button-1>", click)

b11 = Button(f4, text="9",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b11.pack(side="left",padx=5,pady=5)
b11.bind("<Button-1>", click)

b12 = Button(f4, text="*",font=("Times New Roman", 16, "bold"),padx=25,bg="orange",fg="white")
b12.pack(side="left",padx=5,pady=5)
b12.bind("<Button-1>", click)

f5 = Frame(prac_root, relief=RIDGE, bg="#a2bbcf",borderwidth=6)
f5.pack(side="top")
b13 = Button(f5, text="4",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b13.pack(side="left",padx=5,pady=5)
b13.bind("<Button-1>", click)

b14 = Button(f5, text="5",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b14.pack(side="left",padx=5,pady=5)
b14.bind("<Button-1>", click)

b15 = Button(f5, text="6",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b15.pack(side="left",padx=5,pady=5)
b15.bind("<Button-1>", click)

b16 = Button(f5, text="-",font=("Times New Roman", 16, "bold"),padx=27,bg="orange",fg="white")
b16.pack(side="left",padx=5,pady=5)
b16.bind("<Button-1>", click)

f6 = Frame(prac_root, relief=RIDGE, bg="#a2bbcf",borderwidth=6)
f6.pack(side="top")
b17 = Button(f6, text="1",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b17.pack(side="left",padx=5,pady=5)
b17.bind("<Button-1>", click)

b18 = Button(f6, text="2",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b18.pack(side="left",padx=5,pady=5)
b18.bind("<Button-1>", click)

b19 = Button(f6, text="3",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b19.pack(side="left",padx=5,pady=5)
b19.bind("<Button-1>", click)

b20 = Button(f6, text="+",font=("Times New Roman", 16, "bold"),padx=24,bg="orange",fg="white")
b20.pack(side="left",padx=5,pady=5)
b20.bind("<Button-1>", click)

f7 = Frame(prac_root, relief=RIDGE, bg="#a2bbcf",borderwidth=6)
f7.pack(side="top")
b21 = Button(f7, text=chr(177),font=("Times New Roman", 17, "bold"),padx=21,bg="grey",fg="white")
b21.pack(side="left",padx=5,pady=5)
b21.bind("<Button-1>", click)

b22 = Button(f7, text="0",font=("Times New Roman", 16, "bold"),padx=23,bg="grey",fg="white")
b22.pack(side="left",padx=5,pady=5)
b22.bind("<Button-1>", click)

b21 = Button(f7, text=".",font=("Times New Roman", 16, "bold"),padx=25,bg="grey",fg="white")
b21.pack(side="left",padx=5,pady=5)
b21.bind("<Button-1>", click)

b22 = Button(f7, text="=",font=("Times New Roman", 16, "bold"),padx=24,bg="#3697f5",fg="white")
b22.pack(side="left",padx=5,pady=5)
b22.bind("<Button-1>", click)

prac_root.mainloop()