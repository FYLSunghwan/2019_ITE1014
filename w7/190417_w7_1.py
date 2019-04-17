import random

print("S T A R T")

while 1:
	num = [0,0,0]
	inp2 = [0,0,0]
	while num[0]==num[1] or num[1]==num[2] or num[2]==num[0]:
		num = [0,0,0]
		inp2 = [0,0,0]
		rn = random.randint(0,999)

		num[0] = rn//100
		num[1] = rn//10%10
		num[2] = rn%10

	strike = 0
	ball = 0
	while strike<3:
		print("=======================")
		print("\nGuess Numbers (000 ~ 999):")
		inp = int(input())
		inp2[0]=inp//100
		inp2[1]=inp//10%10
		inp2[2]=inp%10

		strike = 0
		ball = 0

		for i in range(3):
			if inp2[i] == num[i]: strike+=1
			if inp2[i] == num[(i+1)%3]: ball+=1
			if inp2[i] == num[(i+2)%3]: ball+=1

		if strike<3: print(strike,"strike",ball,"ball")

	print('Yes! The secret number is "',rn,'" You have won!')
	print("Do you want to play again? (yes or no)")
	inp = input()
	if inp == "no": break

