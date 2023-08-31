from tkinter import *

#Main app object
app=Tk()

#Geometry of the main app page
app.geometry("500x800+1000+200")

#Title of the main app page
app.title('LED')

#Function to draw red circle
def LED_ON():
    c.create_oval(100,100,300,300,fill='red')
    lb.config(text='LED ON ')


#Function to draw white circle
def LED_OFF():
    c.create_oval(100,100,300,300,fill='white')
    lb.config(text='LED OFF')


#Label to display the LED state
lb = Label(app,text='LED OFF')

#Button to turn on the LED
bt1= Button(app, text="LED ON ",command=LED_ON)

#Button to turn off the LED
bt2= Button(app, text="LED OFF",command=LED_OFF)

#Specify the canvas space and use c as a handler
c=Canvas(app,width=400,height=400)

#Positionning the label and buttons
lb.place(x=225,y=500)
bt1.place(x=215,y=550)
bt2.place(x=215,y=600)

#allocate the canvas
c.pack()

#Assume LED is initially turned OFF
c.create_oval(100,100,300,300,fill='white')

app.mainloop()