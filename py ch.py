def format_number(non_neg_num):
    non_neg_num = list(str(non_neg_num))
    length = len(non_neg_num)
    for i in range(-3, -(length + 1), -4):
        non_neg_num.insert(i, ",")

    st = ""
    for j in non_neg_num:
        st += j
    print(st)

format_number(3426732)
