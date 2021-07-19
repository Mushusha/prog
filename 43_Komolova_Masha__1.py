from tkinter import *
root=Tk()
root.title('window')
root.geometry('480x480')


sp=[210, 250, 250, 350]

canvas=Canvas(root, height=360, width=360, bg='#898989')

g=canvas.create_rectangle(100, 50, 250, 150, fill="#123456")
t=canvas.create_rectangle(140, 150, 210, 250, fill="#124321")
r1=canvas.create_rectangle(60, 150, 140, 185, fill="#234599")
r2=canvas.create_rectangle(210, 150, 290, 185, fill="#234599")
n1=canvas.create_rectangle(100, 250, 140, 350, fill="#234599")
nogapdv = canvas.create_rectangle(sp, fill="#234599")
g1=canvas.create_oval(160, 70, 170, 80, fill="#0000FF")
g2=canvas.create_oval(190, 70, 200, 80, fill="#0000FF")
def but1_clicked():
    canvas.coords(nogapdv, sp[0], sp[1], sp[2]+60, sp[3]-60)
def but2_clicked():
    canvas.coords(nogapdv, sp[0], sp[1], sp[2], sp[3])

but1=Button(root, text='нога туда', command=but1_clicked)
but1.pack()
but2=Button(root, text='нога обратно', command=but2_clicked)
but2.pack()

canvas.pack()

root.mainloop()
