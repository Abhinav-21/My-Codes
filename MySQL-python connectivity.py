powers = eval(input("Enter set of powers: "))
low = float(input("Enter lower bound: "))
up = float(input("Enter upper bound: "))
d = float(input("Enter common difference: "))
total_terms = int((up - low) / d)
area = 0


def f(x):
    global powers
    sum = 0
    for i in powers:
        sum += x ** i
    return sum


def part_area(a, d):
    area = (((a + d) - a) / 6) * (f(a) + 4 * f((a + (a + d)) / 2) + f(a + d))
    return area


total_area = 0

for i in range(total_terms):
    total_area += part_area(low + i * d, d)

print(total_area)
