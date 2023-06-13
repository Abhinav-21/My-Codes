import csv
from matplotlib import pyplot as plt
from math import *

with open("data.csv", mode="r") as file:
    csvFile = csv.reader(file)
    pop = {}
    func = {}
    i = 1
    for lines in csvFile:
        if lines[5] != "pop2022":
            pop[i] = float(lines[5])
            # func[i] = 999999 / (i - 0.999)
            i += 1

# plt.plot(func.keys(), func.values(), color="black")
plt.plot(pop.keys(), pop.values())
plt.show()
