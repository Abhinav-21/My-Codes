test_cases = int(input())

len_arr = []

for i in range(test_cases):
    len_arr.append(int(input()))

for j in range(len(len_arr)):
    arr = []

    if len_arr[j] % 2 == 0:
        for t in range(1, int(len_arr[j] / 2) + 1):
            arr.append(t)
            arr.append(-t)
    else:
        arr.append(0)
        for t in range(1, int(len_arr[j] / 2) + 1):
            arr.append(t)
            arr.append(-t)

    for index in range(len(arr)):
        print(arr[index], end=" ")
