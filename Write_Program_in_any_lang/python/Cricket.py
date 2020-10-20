import random, time
p1=input('Enter player 1 name: ')
p2=input('Enter player 2 name: ')
print(' ')

print('PLAYER 1: ', p1)
sum1=0
for i in range(50):
	x=(random.randint(1,4))
	y=(random.randint(1,6))
	if x==y:
		time.sleep(1)
		print("WICKET")
		break
	else:
		time.sleep(1)
		print('Ball ', i+1,' :' ,x)
	sum1 = sum1 + x
print(p1, ' scored ', sum1 , ' runs')
print(' ')

print('PLAYER 2 : ', p2)
sum2=0
for i in range(50):
	x=(random.randint(1,6))
	y=(random.randint(1,6))
	if x==y:
		time.sleep(1)
		print("WICKET")
		break
	else:
		time.sleep(1)
		print('Ball ', i+1 ,' :' ,x)
	sum2= sum2 + x
print(p2, ' scored ', sum2 , ' runs')
print('')

if sum1 > sum2 :
	print("PLAYER 1: ", p1 ," WINS..!!")
elif sum1 == sum2 :
	print("GAME DRAWN..!!")
else :
	print("PLAYER 2: " , p2 , " WINS..!!")
