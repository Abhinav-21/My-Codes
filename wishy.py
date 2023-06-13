# import pyautogui as pg
from datetime import date as dt

date = dt.today()


def wish():
    import turtle
    import random

    bg = turtle.Screen()
    bg.bgcolor("light blue")
    bg.title("Sakshu ka birthday")

    pen = turtle.Turtle()

    pen.penup()
    pen.width(3)
    pen.rt(70)
    pen.goto(-30, -40)
    pen.down()
    pen.circle(50, 250)
    pen.rt(180)
    pen.circle(50, 250)
    bg.clear()

    bg.bgcolor("light blue")
    pen = turtle.Turtle()
    pen.up()
    pen.goto(55, -70)
    pen.lt(180)
    pen.width(3)
    pen.down()
    pen.fd(110)
    pen.rt(135)
    pen.fd(140)
    pen.circle(50, 250)
    bg.clear()

    bg.bgcolor("light blue")
    pen = turtle.Turtle()
    pen.up()
    pen.width(3)
    pen.goto(-20, -80)
    pen.down()
    pen.fd(40)
    pen.up()
    pen.goto(0, -80)
    pen.down()
    pen.lt(90)
    pen.fd(140)
    pen.lt(120)
    pen.fd(30)
    bg.clear()
    bg.bgcolor("light blue")
    pen = turtle.Turtle()

    pen.penup()
    pen.goto(-190, -180)
    pen.color("yellow")
    pen.pensize(6)
    pen.pendown()
    pen.goto(190, -180)
    pen.penup()

    pen.penup()
    pen.goto(-160, -150)
    pen.color("purple")
    pen.pensize(6)
    pen.pendown()
    pen.goto(160, -150)
    pen.penup()

    pen.penup()
    pen.goto(-130, -120)
    pen.color("teal")
    pen.pensize(6)
    pen.pendown()
    pen.goto(130, -120)
    pen.penup()

    pen.begin_fill()
    pen.goto(-74, -110)
    pen.pendown()
    pen.color("white")
    pen.goto(50, -110)
    pen.left(90)
    pen.forward(60)
    pen.left(90)
    pen.forward(125)
    pen.left(90)
    pen.forward(60)
    pen.penup()

    pen.goto(-60, -40)
    pen.color("red")
    pen.pendown()
    pen.pensize(3)
    pen.goto(-60, -20)
    pen.penup()

    pen.goto(-40, -40)
    pen.color("yellow")
    pen.pendown()
    pen.pensize(3)
    pen.goto(-40, -20)
    pen.penup()

    pen.goto(-20, -40)
    pen.color("green")
    pen.pendown()
    pen.pensize(3)
    pen.goto(-20, -20)
    pen.penup()

    pen.goto(0, -40)
    pen.color("purple")
    pen.pendown()
    pen.pensize(3)
    pen.goto(0, -20)
    pen.penup()

    pen.goto(20, -40)
    pen.color("blue")
    pen.pendown()
    pen.pensize(3)
    pen.goto(20, -20)
    pen.penup()

    pen.goto(-25, 135)
    pen.color("#148F77")
    pen.pendown()
    pen.write("Happy Birthday!", False, "center", ("Futura", 30, "normal"))
    pen.penup()
    pen.goto(-25, 80)
    pen.color("#148F77")
    pen.pendown()
    pen.write("JALEBI!! ♪(^∇^*)", False, "center", ("Futura", 30, "normal"))
    pen.penup()
    pen.goto(-25, 25)
    pen.color("#283747")
    pen.pendown()
    pen.write("🎊🎉🎈🎁", False, "center", ("Futura", 30, "normal"))

    pen.penup()
    pen.goto(-250, 250)
    turtle.done()


wish()

# if (
#    pg.confirm("Is it your Birthday?", "Confirmation", buttons=["Han", "Nahi"]) == "Han"
#    and (date.day == 26)
#    and (date.month == 11)
# ):
#    if pg.alert("Ready?", button="Yes!") == "Yes!":
#        wish()
# elif pg.confirm(
#    "Is it your Birthday?", "Confirmation", buttons=["Han", "Nahi"]
# ) == "Han" and ((date.day != 26) or (date.month != 11)):
#    pg.alert(
#        " Jhutthi...Thik hai fir, Birthday ke din milte hain...",
#        title="msg",
#        button="OK, Bye!",
#    )
# elif (
#    pg.confirm("Is it your Birthday?", "Confirmation", buttons=["Han", "Nahi"])
#    == "Nahi"
#    and (date.day == 26)
#    and (date.month == 11)
# ):
#    if (
#        pg.alert("Jhutthi, aaj tumhara BUDDAY hai!!!", button="Han Han, Hai")
#        == "Han Han, Hai"
#    ):
#        wish()
# elif (
#    pg.confirm("Is it your Birthday?", "Confirmation", buttons=["Han", "Nahi"])
#    == "Nahi"
#    and (date.day != 26)
#    or (date.month != 11)
# ):
#    pg.alert(
#        "Thik hai fir, Birthday ke din milte hain...", title="msg", button="OK, Bye!"
#    )
