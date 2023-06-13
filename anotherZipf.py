import matplotlib.pyplot as plt

freq = {}

file = open('file.txt', 'r')

contents = file.read()

file.close()

# print(contents)

for char in contents:
    if char.isalpha() or char.isspace():
        if char in freq:
            freq[char.lower()] += 1
        else:
            freq[char.lower()] = 1


ss = sorted(freq.items(), key=lambda x:x[1])
x = []
y = []
for i in ss[::-1]:
    x.append(i[0])
    y.append(i[1])
plt.plot(x, y)
plt.show()
plt.close()