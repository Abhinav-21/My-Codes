from numpy import *
from matplotlib import pyplot as plt
import pandas as pd

file = pd.read_csv("vgsales.csv")
y = []
for i in range(len(file["Rank"])):
    y.append((file["Global_Sales"][i]))
# f = log(y)
plt.grid(True)
plt.plot(file["Rank"][1::], y[1::])
plt.show()

plt.rcParams["figure.dpi"] = 360
