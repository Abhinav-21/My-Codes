from re import T
from numpy import *

r = float(input("Diameter of axle(mm): ")) / 2000
tot = int(input("Enter total number readings: "))
inertia_sum = 0
total = tot
while total > 0:
    total -= 1
    mass = float(input("Enter mass: "))
    n1 = int(input("Total winds in coil: "))
    n2 = int(input("Total rotations of flywheel: "))
    t = int(input("Time for which flywheel rotated: "))
    h = 2 * pi * r * n1
    w = 4 * pi * n2 / t
    inertia_sum += ((2 * mass * 9.81 * h) - (mass * r * r * w * w)) / (
        (1 + (n1 / n2)) * w * w
    )

inertia = inertia_sum / tot
print("The moment of inertia is:", inertia, "kg.m^2")

