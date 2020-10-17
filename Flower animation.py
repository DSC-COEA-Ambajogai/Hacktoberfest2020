import turtle

t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor('green')
t.pencolor('blue2')
t.speed(-50)
c = 0
d = 0

while True:
    for i in range(4):
        t.forward(80)
        t.right(90)
    t.right(5)
    c += 1
    if c >= 390/5:
       t.forward(50)
       c = 0
       d += 1
       if d >= 12:
            break
t.hideturtle()
turtle.done()
