t = int(input("Total number of readings: "))
hanger1 = float(input("Weight of hanger 1:(in kg): "))
hanger2 = float(input("Weight of hangers 2:(in kg): "))
hanger3 = float(input("Weight of hangers 3:(in kg): "))
hanger4 = float(input("Weight of hangers 4:(in kg): "))
error1 = float(input("Zero error in first plunger (in kg): "))
error2 = float(input("Zero error in second plunger (in kg): "))
dr1 = 0
dr2 = 1.25

for i in range(t):

    w1 = float(input("Enter weight 1 (in kg): "))
    if w1:
        w1 += hanger1

    d1 = float(input("Enter distance of weight 1 from r1 (in m): "))
    w2 = float(input("Enter weight 2 (in kg): "))
    if w2:
        w2 += hanger2

    d2 = float(input("Enter distance of weight 2 from r1 (in m): "))
    w3 = float(input("Enter weight 3 (in kg): "))
    if w3:
        w3 += hanger3

    d3 = float(input("Enter distance of weight 3 from r1 (in m): "))
    w4 = float(input("Enter weight 4 (in kg): "))
    if w4:
        w4 += hanger4

    d4 = float(input("Enter distance of weight 4 from r1 (in m): "))
    r1 = float(input("Enter reaction 1 (in kg): "))
    r2 = float(input("Enter reaction 2 (in kg): "))

    sum_w = w1 + w2 + w3 + w4
    sum_r = r1 + r2 - error1 - error2
    moment_w = w1 * d1 + w2 * d2 + w3 * d3 + w4 * d4
    moment_r = (r1 - error1) * dr1 + (r2 - error2) * dr2

    diff_f = abs(sum_w - sum_r)
    diff_r = abs(moment_r - moment_w)

    error_f = 100 * diff_f / sum_w
    error_w = 100 * diff_r / moment_w
    print()
    print("Weight:", round(sum_w, 2))
    print("Reaction:", round(sum_r, 2))
    print("Moment of weight:", round(moment_w, 2))
    print("Moment of reactions:", round(moment_r, 2))

    print("Difference in weights and reactions:", round(diff_f, 2))
    print("Difference in moments of weight and reactions:", round(diff_r, 2))

    print("Error in equilibrium of forces:", round(error_f, 2), "%")
    print("Error in equilibrium of moments:", round(error_f, 2), "%")
