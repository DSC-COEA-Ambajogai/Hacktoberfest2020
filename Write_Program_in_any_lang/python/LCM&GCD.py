import math

def lcm(a,b):
	return abs(a*b)//math.gcd(a,b)
def gcd(a,b):
	return math.gcd(a,b)

a = int(input('Enter 1st number : '))
b = int(input('Enter 2nd number : '))

print('LCM of',a,'and',b,'is',lcm(a,b))
print('GCD of',a,'and',b,'is',gcd(a,b))