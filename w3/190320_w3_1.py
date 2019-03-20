import random
import time
i=0
print("*******START*******")
while(i<3):
	i+=1
	a=random.randint(0,9)
	b=random.randint(0,9)
	print(a,'*',b,'=','?')
	ans=int(input())
	if(ans==a*b):
		print("Correct Answer")
	else:
		time.sleep(5)
		print("Wrong Answer,",a,"*",b,"=",a*b)
