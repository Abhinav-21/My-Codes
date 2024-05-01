import pandas as pd

data = dict()
data2 = dict()
count = 0
for i in range(1, 15):
    filename = "/suppli/" + str(i) + ".xlsx"
    file = pd.read_excel(filename)
    for j in file["Tables Name__3"]:
        count += 1
        if j == "nan":
            pass
        else:
            if j in data.keys():
                data[j] += 1
            else:
                data[j] = 1

print(len(data.keys()))
print()
for x in data.items():
    print(x[0], " ", x[1])
lst = list()
for k in data.values():
    lst.append(k)
print()
lst.sort()
for z in lst:
    if z in data2.keys():
        data2[z] += 1
    else:
        data2[z] = 1

for w in data2.items():
    print(w)
print()
print(count)
# print(max(data.values()))
