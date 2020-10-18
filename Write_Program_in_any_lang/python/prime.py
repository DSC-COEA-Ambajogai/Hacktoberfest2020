import math
def prime(num):
	if num==2:
		return True
	if num<=3:
		return False

	flag=0
	for i in range(2,int(math.sqrt(num))+1):
		if num%i==0:
			return False
	return True
			

num = int(input('Enter a number : '))
isPrime = prime(num)

if isPrime:
	print(num,'is a Prime Number!')
else:
	print(num,'is not a Prime Number!')