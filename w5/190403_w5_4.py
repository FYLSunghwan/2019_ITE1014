ls=[]
def sort():
	for i in range(0,len(ls)):
		for j in range(i+1,len(ls)):
			if ls[i]>ls[j]:
				t=ls[i]
				ls[i]=ls[j]
				ls[j]=t

import random
max=-1
min=1001
for i in range(0,50):
	ls.append(random.randint(0,1000))
	if ls[i]>=max: max=ls[i]
	if ls[i]<=min: min=ls[i]
	print(ls[i],end=' ')
print()
sort()
for i in range(0,50):
	print(ls[i], end=' ')
print()
print("max value:",max)
print("min value:",min)