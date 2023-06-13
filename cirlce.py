import math

t = int(input())

while t:
    n = int(input())
    freq = dict()

    a = input()
    a = a.split()
    for j in range(len(a)):
        freq[int(a[j])] += 1
        # freq[i] = int(input())
    print(max(freq.values()) - 1)
    t -= 1
