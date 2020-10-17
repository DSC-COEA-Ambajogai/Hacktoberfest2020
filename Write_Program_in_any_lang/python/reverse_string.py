# reversed().

# input() is used to take a input from user.
input_str = input("Enter a string: ")

# reversed() will return reversed iterator of the given sequence and
# we have converted iterator return by reversed to list using list().
reversed_str = list(reversed(input_str))

# print() function is used to print the output in console.
print(reversed_str)
