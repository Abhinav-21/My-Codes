from numpy import *

box_mat = input("Material of box: ")
inc_mat = input("Material of incline: ")
box_wt = float(input("Weight of box (g): "))
pan_wt = float(input("Weight of pan (g): "))
wt_on_pan = float(input("Weight on pan (g): "))
inclination = int(input("Inclination: "))

mu = ((wt_on_pan + pan_wt) - box_wt * sin(inclination * pi / 180)) / (
    box_wt * cos(inclination * pi / 180)
)

print("Coefficient of friction between", box_mat, "and", inc_mat, "is", round(mu, 3))
print("Angle of Repose: ", round(arctan(mu) * 180 / pi, 3), "°", sep="")
