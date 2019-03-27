import random

regame=1
cntwin=0
cnttot=0

def cal():
	return cntwin/cnttot*100

while regame:
	cnttot+=1
	rnd=random.randint(0,2)
	inp=input()
	user=0
	if inp=="rock": user=0
	elif inp=="sissors": user=2
	elif inp=="paper": user=1
	else: user=-1
	if user==rnd: print("bigim")
	if (user+1)%3==rnd: print("You Lose!")
	else: 
		print("You Win!")
		cntwin+=1
	print("Regame?:")
	inp=input()
	if inp=="no": regame=0
print(cal(),"%")
