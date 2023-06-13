from sympy import *
from sympy.integrals import integrate

choice = input("Definite integral(d) or Indefinite integral(i): ")

a, b, c, x, y, C, n = symbols("a b c x y C n")

if choice.lower() == "i":

    expr = eval(input("Enter the expression (using standard operators only): "))

    Int = integrate(expr, x)
    print(
        f"""The integral/anti-derivative is :
            {Int + C} """
    )

elif choice.lower() == "d":

    expr = eval(input("Enter the expression (using standard operators only): "))

    l_lim = float(input("Enter the lower limit :"))
    u_lim = float(input("Enter the upper limit :"))

    Int = integrate(expr, (x, l_lim, u_lim))
    print(f"Answer => {round(Int, 5)}")

else:
    print(
        """Input invalid :
    Try giving "i" for indefinite integration
               "d" for definite integration"""
    )
