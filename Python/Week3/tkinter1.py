from tkinter import *
from tkinter import messagebox

def Button1():
    messagebox.showinfo("Name 1", "Abdullah")

def Button2():
    messagebox.showinfo("Name 2", "Khalid")

def Button3():
    messagebox.showinfo("Name 3", "Mohammed")

def Button4():
    messagebox.showinfo("Name 4", "Ali")

app = Tk()

app.title("Names")
app.geometry('500x500+1000+200')
app.resizable(False,False)

bt1 = Button(app, text='Name 1',fg='White',bg='black',command=Button1,font=30)
bt2 = Button(app, text='Name 2',fg='White',bg='black',command=Button2,font=30)
bt3 = Button(app, text='Name 3',fg='White',bg='black',command=Button3,font=30)
bt4 = Button(app, text='Name 4',fg='White',bg='black',command=Button4,font=30)

bt1.grid(row = 0, column=2)
bt2.grid(row = 1, column=0)
bt3.grid(row = 1, column=3)
bt4.grid(row = 2, column=2)

app.mainloop()