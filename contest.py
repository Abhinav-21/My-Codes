from sympy import var, sympify
from numpy import *
from matplotlib import pyplot as plt

f = lambda x: (x ** 3)
l = float(input())
u = float(input())
inp = arange(l, u + 0.001, 0.001)
out = []
for i in inp:
    out.append(f(i))

sum_odd = 0
sum_even = 0

for j in range(1, len(inp) - 1, 2):
    sum_odd += out[j]

for k in range(2, len(inp) - 1, 2):
    sum_even += out[k]

if len(inp) % 2 == 1:
    area = (0.001 / 3) * (out[0] + 4 * sum_odd + 2 * sum_even + out[-1])
else:
    area = (0.001 / 2) * (out[0] + 2 * (sum_odd + sum_even) + out[-1])

print(round(area, 10))

plt.plot(inp, out)
plt.axis("equal")
plt.show()
