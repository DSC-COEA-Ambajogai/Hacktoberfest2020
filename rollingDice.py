import random

def roll(min, max):
    while True: 
        print("Rolling the dices...")
        print(f"Your number is {random.randint(min, max)}")

        roll_again = ""
        while roll_again.lower() not in ["y","yes","n","no"]
            answer = input("Do you want to roll the dices again? (y/n) ")
            if answer.lower() in ["n", "no"]:
                print("End.")
                break
            if answer.lower() in ["y", "yes"]:
                continue

if __name__ == "__main__":
    roll(1, 6)
