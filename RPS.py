import random as r


def game():
    list_item = ["rock", "paper", "scissors"]
    dict_list = {"r": "rock", "p": "paper", "s": "scissors"}

    player = input("Enter your name: ")
    start = input(
        f"Hello! {player}, Welcome to this game rock, paper and scissors,"
        f"game will be of 5 round good luck."
        f"Do you want to see the rules of this game? (y/n): "
    )

    if start == "y":
        # Game Instructions
        print(
            """    
        _____________________
         ROCK-PAPER-SCISSORS 
        ---------------------
            In this game you will have five choices, stone, paper or scissors,
            you will choose one of them and your opponent(computer) will also choose one of them.
            The result is decided as follows:
              1. Paper beats rock but is beaten by scissors.
              2. Scissors beats paper but is beaten by rock.
              3. Rock beats scissors but is beaten by paper.
              4. Here we go...!
                 ('r' for rock, 'p' for paper, 's' for scissors)     
            -----X-----X-----X-----X-----X-----
             """
        )

    elif start == "n":
        print("""Here we go...!
        ('r' for rock, 'p' for paper, 's' for scissors)""")

    count = 0
    count_player = 0
    count_system = 0

    while count < 5:
        choice = input("Enter your choice: ")

        computer_choice = r.choices(list_item)[0]
        if dict_list[choice] == computer_choice:
            print(f"You chose {dict_list[choice]} and system chose {computer_choice}")
            print("Draw")
            print(f"{player} - {count_player}")
            print(f"Computer - {count_system}")

        elif dict_list[choice] == "rock":
            if computer_choice == "paper":
                count_system += 1
                count += 1
                print(
                    f"You chose {dict_list[choice]} and system chose {computer_choice}"
                )
                print("System's point")
                print(f"{player} - {count_player}")
                print(f"Computer - {count_system}")

            elif computer_choice == "scissors":
                count_player += 1
                count += 1
                print(
                    f"You chose {dict_list[choice]} and system chose {computer_choice}"
                )
                print("Your point")
                print(f"{player} - {count_player}")
                print(f"Computer - {count_system}")

        elif dict_list[choice] == "paper":
            if computer_choice == "scissors":
                count_system += 1
                count += 1
                print(
                    f"You chose {dict_list[choice]} and system chose {computer_choice}"
                )
                print("System's point")
                print(f"{player} - {count_player}")
                print(f"Computer - {count_system}")

            elif computer_choice == "rock":
                count_player += 1
                count += 1
                print(
                    f"You chose {dict_list[choice]} and system chose {computer_choice}"
                )
                print("Your point")
                print(f"{player} - {count_player}")
                print(f"Computer - {count_system}")

        elif dict_list[choice] == "scissors":
            if computer_choice == "rock":
                count_system += 1
                count += 1
                print(
                    f"You chose {dict_list[choice]} and system chose {computer_choice}"
                )
                print("System's point")
                print(f"{player} - {count_player}")
                print(f"Computer - {count_system}")

            elif computer_choice == "paper":
                count_player += 1
                count += 1
                print(
                    f"You chose {dict_list[choice]} and system chose {computer_choice}"
                )
                print("Your point")
                print(f"{player} - {count_player}")
                print(f"Computer - {count_system}")

        if count_player == 3 or count_system == 3:
            if count_player == 3:
                print("Congratulations you won!")
            else:
                print("You lost!")
            break
#just to stop the window from diappearing when opened in prommpt.
# # # 
#
#
    while True:
        pass
                 #
                 #
             # # #

def start():
    try:
        game()
    except KeyError:
        print(
            """Invalid Input!
    Restarting..."""
        )
        start()


start()
