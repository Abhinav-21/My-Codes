from math import *

number_of_questions_guessed = int(
    input("Enter the number of questions to be guessed: ")
)
positive = int(input("Enter the positive score for every correct answer: "))

negative = int(input("Enter the negative score for every wrong answer: "))

options = int(input("Enter the number of options in every question: "))

correct_answers = 0

while correct_answers <= number_of_questions_guessed:
    if (
        positive * correct_answers
        - negative * (number_of_questions_guessed - correct_answers)
    ) >= 0:
        break
    else:
        correct_answers += 1

# print(correct_answers)

print()

choice = input(
    """What probability would you like to find?: 
       1) getting negative marks.
       2) no loss.
       3) getting 'n' questions correct.
       4) getting at most 'n' correct.
       5) getting at least 'n' correct.
       Enter number (1/2/3/4/5): """
)

print()


def probability(correct, total):

    global options

    coefficient = factorial(total) / (factorial(correct) * factorial(total - correct))
    # print(coefficient)
    p = (
        coefficient
        * ((1 / options) ** correct)
        * (((options - 1) / options) ** (total - correct))
    )
    return p


count = 0
chance_of_loss = 0
while count < correct_answers:
    chance_of_loss += probability(count, number_of_questions_guessed)
    count += 1

if choice == "1":
    print("Probability of getting negative marks:", chance_of_loss * 100, "%")

elif choice == "2":
    print("Probability of no loss:", (1 - chance_of_loss) * 100, "%")

elif choice == "3":
    n = int(input("Enter the no. of correct answers: "))
    chance = probability(n, number_of_questions_guessed)
    print("Probability of getting", n, "questions correct is:", chance * 100, "%")

elif choice == "4":
    n = int(input("Enter the number of questions: "))
    c = 0
    pr = 0
    while c <= n:
        pr += probability(c, number_of_questions_guessed)
        c += 1
    print("Probability of getting at most ", n," questions correct is:", pr * 100, "%")

elif choice == "5":
    n = int(input("Enter the number of questions: "))
    pr = 0
    while n <= number_of_questions_guessed:
        pr += probability(n, number_of_questions_guessed)
        n += 1
    print("Probability of getting at least", n, "questions correct is:", pr * 100, "%")

else:
    print("Invalid Input")

