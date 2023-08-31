from tkinter import *

app = Tk()

app.geometry("500x500+1000+200")
app.title('Gauage')

canv = Canvas(app,width=400,height=400)

#create arc of different colors (green - yellow - red)
c1= canv.create_arc(100,50,300,250,style=ARC,width=20,start=160 , extent=-90,outline="green")
c2= canv.create_arc(100,50,300,250,style=ARC,width=20,start=70,extent=-20,outline="yellow")
c3= canv.create_arc(100,50,300,250,style=ARC,width=20,start=50,extent=-30,outline="red")

#Line to indicate the current state
canv.create_line(200,150,230,50,width=5,fill='black')

#What this guage for?
canv.create_text(200,20,text='Humidity')


canv.pack()
app.mainloop()