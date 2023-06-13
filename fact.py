from math import factorial as fact
from math import sqrt

num = 1
for i in range(1, 21):
    num *= i

print(num)

for k in range(1, 221):
    if sqrt(num / fact(k)) % 1 == 0:
        print(k, "! is to be removed", sep="")
