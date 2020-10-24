# Python Program to find the area of triangle
print('Program to calculate Triangle Area')
def ar(a,b,c):
  s = (a + b + c) / 2
# calculate the area
  area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
  return area

# Uncomment below to take inputs from the user
a = float(input('Enter first side: '))
b = float(input('Enter second side: '))
c = float(input('Enter third side: '))

# calculate the semi-perimeter
ar(a,b,c)

print('The area of the triangle is %0.2f' %area)

