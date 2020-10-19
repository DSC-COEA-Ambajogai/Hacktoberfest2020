from pyfiglet import Figlet
from prettytable import PrettyTable
import random

f = Figlet(font='slant')
display = f.renderText('Hactoberfest')
password = []
print(display)
upper = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
         'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
lower = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
         'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
symbol = ['!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '?', '/', ' >']
numeric = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
biglist = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
           'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
           'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '?', '/', ' >', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
name = input("enter your name :")
print("Welcome to random password generator : ")
print(
    "Please select the option [eg. U(uppercase),L(lowercase),S(symbole),A(for all)]")
ans = input()
if ans == 'U':
    for x in range(10):
        password.append(random.choice(upper))

if ans == 'L':
    for x in range(10):
        password.append(random.choice(lower))

if ans == 'S':
    for x in range(10):
        password.append(random.choice(symbol))

if ans == 'A':
    big_list = []
    big_list.clear()
    for x in range(20):
        password.append(random.choice(biglist))

newpass = ''

for a in password:
    newpass = newpass+str(a)

panel = PrettyTable()
panel.field_names = ["Username", "Password"]
panel.add_row([name, newpass])
print(panel)
