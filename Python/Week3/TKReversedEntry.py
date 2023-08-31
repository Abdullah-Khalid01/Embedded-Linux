from tkinter import *
from tkinter import messagebox

def Reverse():
    global lbtxt
    txt = e1.get()
    txt = txt[::-1]
    lb2.config(text=f"{txt}")
    messagebox.showinfo("Reversed",f"{txt}")

app = Tk()

app.title("Reverse Entry")
app.geometry("600x200+1000+500")

lb1 = Label(app , text="Enter a Word")
lb2 = Label(app ,text="result")
e1  = Entry(app)
bt1 = Button(app , text='validate',width=17, command= Reverse)


lb1.grid(row=0,column=0)
e1.grid(row=0,column=1)
bt1.grid(row=2,column=1)
lb2.grid(row=3,column=1)



app.mainloop()