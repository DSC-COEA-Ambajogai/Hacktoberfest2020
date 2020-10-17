print("Made by Aayushi")
win="You Win"
loose="The Computer Wins"
drew=0
lives=5
score=0
computer_lives=5
while True:
    rps=input("Rock, Paper, Scissor?   ")
    import random
    computer=("rock", "paper", "scissor")
    computer=random.choice(computer)
    #rock statements
    if rps=="rock":
        if computer=="paper":
            print()
            print("The computer chose", computer)
            print(loose)
            print()
            lives-=1
        if computer=="scissor":
            print()
            print("The computer chose", computer)
            print(win)
            print()
            lives+=1
            score+=1
            computer_lives-=1
        if computer=="rock":
            print()
            print("The computer chose", computer)
            print("You Drew")
            drew+=1
            print()
        

    if rps=="paper":
        if computer=="scissor":
            print()
            print("The computer chose", computer)
            print(loose)
            print()
            lives-=1
        if computer=="rock":
            print()
            print("The computer chose", computer)
            print(win)
            print()
            lives+=1
            score+=1
            computer_lives-=1
        if computer=="paper":
            print()
            print("The computer chose", computer)
            print("You Drew")
            drew+=1
            print()


    if rps=="scissor":
        if computer=="rock":
            print()
            print("The computer chose", computer)
            print(loose)
            print()
            lives-=1
        if computer=="paper":
            print()
            print("The computer chose", computer)
            print(win)
            print()
            lives+=1
            score+=1
            computer_lives-=1
        if computer=="scissor":
            print()
            print("The computer chose", computer)
            print("You Drew")
            drew+=1
            print()
    #system
    if rps=="rules":
        print("Paper beats Rock")
        print("Rock beats Scissor")
        print("Scissor beats Paper")
    if rps=="lives":
        print("Your Lives", lives)
        print("Computer Lives", computer_lives)
    if rps=="score":
        print("Score is ",score)
    #end
    if lives==0 or rps=="test":
        print("Thanks for playing")
        print("You lost. You have ",lives," lives")
        print("You got ",score," correct")
        stop=input("Press enter to exit   ")
        import time
        time.sleep(900)
    if computer_lives==0:
        print("Thanks for playing")
        print("You won. The computer has no lives")
        print("You got ",score," correct")
        stop=input("Press enter to exit   ")
        import time
        time.sleep(50)
    #exit
    if rps=="exit":
        break
