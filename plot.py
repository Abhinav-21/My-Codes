from matplotlib import pyplot as plt
from random import *
from math import *
from numpy import *

x = [5000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000]
y = [0.09, 0.25, 0.74, 1.58, 2.79, 4.26, 6.12, 8.34, 10.81, 13.79, 16.87]

p = random.randint(0, 10000, 1000)
q = arange(0, 100, 0.1)

plt.plot(p, q)
# plt.xlabel("size -->")
# plt.ylabel("time -->")
plt.show()
