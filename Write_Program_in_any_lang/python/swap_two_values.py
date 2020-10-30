a = input("Enter value of a: ")
b = input("Enter value of b: ")

print(f"Before Swapping:\n a: {a} b: {b}") #use of f-strings

a, b = b, a	#swap two variables

print(f"After Swapping:\n a: {a} b: {b}")
