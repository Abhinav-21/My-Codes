postfix = ["", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"]
total_A = 0
total_S = 0

for i in range(12):

    file_name = "messages" + postfix[i] + ".txt"

    file = open(file_name, "r", encoding="utf-8")

    content = file.readlines()
    count_A = 0
    count_S = 0

    total = len(content)

    for i in range(total):
        if content[i] == "Abhinav Tiwari\n":
            j = 1
            while content[i + j] != "Sakshi Tripathi\n":
                if content[i + j] == '       <div class="text">\n':
                    count_A += 1
                j += 1
                if i + j == total:
                    break
        if content[i] == "Sakshi Tripathi\n":
            j = 1
            while content[i + j] != "Abhinav Tiwari\n":
                if content[i + j] == '       <div class="text">\n':
                    count_S += 1
                j += 1
                if i + j == total:
                    break
    total_A += count_A
    total_S += count_S
    file.close()

print("Total messages by Abhinav: ", total_A)
print("Total messages by Sakshi: ", total_S)
