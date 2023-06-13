from turtle import color
from matplotlib import pyplot as plt
from numpy import *

y = []

readings = {}
for i in range(1, 4):
    print(i, "-")
    theta = float(input("Angle subtended by arc of contact: "))
    t1 = float(input("Initial weight in pans (T1): "))
    w1 = float(input("Weight at which pulley just moves(W1): "))
    w2 = float(input("Weight at which pulley just moves on other pan (W2): "))
    t2 = (w1 + w2) / 2

    readings[i] = (1 / (theta * pi / 180)) * log(t2 / t1)
    y.append(log(t2 / t1))

mean_mu = 0
for i in readings.values():
    mean_mu += i

mean_mu = mean_mu / 3

print("µ is found out to be:", round(mean_mu, 3))

x = [pi / 3, 7 * pi / 18, 4 * pi / 9]

y2 = []
for b in range(3):
    y2.append(x[b] * mean_mu)

plt.scatter(x, y, color="black")

plt.plot(x, y2, color="blue")
plt.grid()
plt.ylabel("ln(T2/T1) -->")
plt.xlabel("⊖ -->")

plt.show()
