def isVowel(char):
	char=char.lower()
	vowel = ['a','e','i','o','u']
	if char in vowel:
		return True
	else:
		return False
while True:
	char = input('Enter any alphabet : ')
	if len(char)==1:
		break
	else:
		print('Please Enter Character of length 1')
if isVowel(char):
	print("Character '",char,"' is a vowel!")
else:
	print("Character '",char,"' is a consonant!")