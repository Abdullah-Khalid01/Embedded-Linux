from tkinter import *

#Callback function to calculate the result
def Calc():
    #if sum is choosed
    if(v.get() == 1):

        #get the two values and add them together
        result = int(e1.get()) + int(e2.get())
        res_lb.config(text=f"M + N ={result}")

    #if sub is choosed
    elif(v.get() == 2):
        #get the two values and subtract one from two
        result = int(e1.get()) - int(e2.get())
        res_lb.config(text=f"M - N ={result}")

#App Handler
app = Tk()

#Integer Object from the tkinter module
v=IntVar()

#App title and Geometry
app.title("Reverse Entry")
app.geometry("400x150+1000+500")


#Labels to indicate the user of required values
lb1 = Label(app , text="Enter the value of M")
lb2 = Label(app , text="Enter the value of N")

#Label to display result
res_lb = Label(app , text="result")

#Entries to get the number from the user
e1  = Entry(app)
e2  = Entry(app)

#Button to starc calculations
bt1 = Button(app , text='Calc',width=17, command=Calc)

#Radio Buttons to identify the operation
sumbt = Radiobutton(app, text="SUM",variable = v, value=1)
subbt = Radiobutton(app, text="SUB",variable = v, value=2)

#Positioning of all elements
lb1.grid(row=0,column=0)
e1.grid(row=0,column=1)

lb2.grid(row=1,column=0)
e2.grid(row=1,column=1)
bt1.grid(row=2,column=1)
res_lb.grid(row=3,column=1)
sumbt.grid(row=0,column=2)
subbt.grid(row=1,column=2)



app.mainloop()