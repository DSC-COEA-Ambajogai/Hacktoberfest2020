# single line code to reverse the given input number.
[print("Reversed number: ",  int(input("Enter a number: ")[::-1])) for i in range(int(input("Enter number of test cases: ")))]

"""
List comprehension is used here to make this one liner possible.

The above code snippet is same as:

for i in range(int(input()):
    num = int(input())
    rev_num = num[::-1]
    print(rev_num)
    
commom syntax for list comprehension is:
  [output_var for loop inner statements]
  
Here in our code:

print(something_here) is output variable
next we have a for loop

There aren't any inner loops here.
"""
