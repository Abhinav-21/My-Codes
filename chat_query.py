file_name = "WhatsApp Chat with Sakshi.txt"

file = open(file_name, "r", encoding="utf-8")

count_A = 0
count_S = 0

content = file.readlines()
for i in content:
    if "- Abhinav:" in i:
        count_A += 1
    elif "- Sakshi:" in i:
        count_S += 1

print("Total messages by Abhinav: ", count_A)
print("Total messages by Sakshu: ", count_S)
file.close()
