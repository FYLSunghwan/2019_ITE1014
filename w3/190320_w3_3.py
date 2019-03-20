import random
import time
i=0
print("*******START*******")
while(i<3):
	i+=1
	a=random.randint(0,9)
	b=random.randint(0,9)
	c=random.randint(0,9)
	d=random.randint(0,9)

	print(a,'*',b,'+',c,'-',d,'= ?')
	print('1,',end='',flush=True)
	time.sleep(1)
	print('2,',end='',flush=True)
	time.sleep(1)
	print('3,',end='',flush=True)
	time.sleep(1)
	print(' : ',end='',flush=True)
	ans=int(input())
	if(ans==a*b+c-d):
		print("Correct Answer")
	else:
		print("Wrong Answer,",a,"*",b,"+",c,"-",d,"=",a*b)
