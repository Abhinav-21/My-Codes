import pandas as pd
import csv
import matplotlib.pyplot as plt
from numpy import *

with open("Results.csv") as file1:
    content = csv.reader(file1)
    count = 0
    total = 0
    for i in content:
        if i[0] == "Branch":
            continue
        count += 1
        SPI = i[1]
        SPI = float(SPI)
        if ("CSE" not in i) and (SPI > 8.8):
            total += 1

file2 = pd.read_excel("All Student List.xlsx")
total_students = file2.count()[1]

total_competition = (total / count) * total_students
print(total_competition)
