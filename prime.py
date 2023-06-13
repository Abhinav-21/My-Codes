import math

y = int(input("Enter an integer to check whether it is a prime or not: "))
X = int(math.sqrt(y))
if X > 2:
    j = 2
    while j < X:

        if X % j == 0:
            print(f"{y} is a composite number.")
        else:
            pass
        print(f"{y} is a prime number.")
        break
        j += 1

elif X in {0, 1}:
    print(f"{y} is neither composite, not prime.")

elif X == 2:
    print("2 is a prime number.")

else:
    print(f"{y} is a composite number")
