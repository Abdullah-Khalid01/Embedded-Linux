from tkinter import *
import math
import time

#Main app object
app=Tk()

#Global variables lbres(lable used to print rseult) and e (entry used to get the number from the user)
lbres=""
e=''

#Function to create new window
def NewPage():
    global e
    global lbres

    #New page handler
    n = Toplevel(app)

    #Specifiy the geometry of the page
    n.geometry('500x200+500+200')

    #New page Title
    n.title("calculator")

    #Label to inform the user, that he should enter a number (.pack) used to allocate the label
    Label(n,text='Enter Number Here').pack()

    #label used to print result
    lbres = Label(n,text="result")

    #entry used to get the number from the user
    e=Entry(n)

    #Allocate the entry and the label
    e.pack()
    lbres.pack()
    
    #button to calculate the factorial
    Button(n,text='calc',command=fact).pack()


#When (calc) button is pressed this is the callback function to be executed
def fact():
    #We chnged the text of the label result to calculated value. We calculate the factorial using the factorial method in the math module.
    lbres.config(text=f"Factorial = {math.factorial(int(e.get()))}")


#Geometry of the main app page
app.geometry('200x200+200+200')

#Title of the main page
app.title('Factorial')

#Button to open the new page
intro = Button(app,text="Press Here",command=NewPage)

#Button allocation
intro.pack()

#Mainloop of the program
app.mainloop()