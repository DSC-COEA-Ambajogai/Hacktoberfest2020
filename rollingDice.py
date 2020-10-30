import random

def roll(min, max):
    while True: 
        print("Rolling the dices...")
        print(f"Your number is {random.randint(min, max)}")
        answer = input("Do you want to roll the dices again? (y/n) ")
        if answer.lower() == "n":
            break

roll(1, 6)



import random
min = 1
max = 6
roll_again="yes"
while roll_again =="yes" or roll_again =="y":
    print("Rolling the dices...")
    print("the values are...")
    print(random.randint(min,max))
    print(random.randint(min,max))
    roll_again = input("roll the dices again")
