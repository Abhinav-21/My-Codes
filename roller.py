from numpy import *

rol_mat = input("Material of roller: ")
inc_mat = input("Material of incline: ")
rol_wt = float(input("Weight of roller (g): "))
pan_wt = float(input("Weight of pan (g): "))
wt_on_pan = float(input("Weight on pan (g): "))
inclination = int(input("Inclination: "))

mu = ((wt_on_pan + pan_wt) - rol_wt * sin(inclination * pi / 180)) / (
    rol_wt * cos(inclination * pi / 180)
)

print(
    "Coefficient of rolling friction between",
    rol_mat,
    "and",
    inc_mat,
    "is",
    round(mu, 3),
)

print("Angle of Repose: ", round(arctan(mu) * 180 / pi, 3), "°", sep="")
