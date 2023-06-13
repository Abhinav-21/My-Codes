import turtle

# Set up the turtle
t = turtle.Turtle()
t.speed(0)
t.pensize(3)
t.penup()
t.goto(0, -150)
t.pendown()

# Draw the body
t.begin_fill()
t.circle(100)
t.end_fill()

# Draw the head
t.penup()
t.goto(0, 50)
t.pendown()
t.begin_fill()
t.circle(50)
t.end_fill()

# Draw the ears
t.penup()
t.goto(0, 100)
t.pendown()
t.begin_fill()
t.right(45)
t.circle(30, 90)
t.right(180)
t.circle(-30, 90)
t.end_fill()

# Draw the trunk
t.penup()
t.goto(0, 50)
t.pendown()
t.right(45)
t.forward(50)
t.right(180)
t.circle(-20, 180)
t.right(180)
t.forward(50)

# Draw the legs
for i in range(4):
    t.penup()
    t.goto((-40 + i * 40), -150)
    t.pendown()
    t.begin_fill()
    t.circle(20)
    t.end_fill()

# Hide the turtle
t.hideturtle()

# Keep the window open until it's closed
turtle.done()
