def comp(var1,var2):
	if var1>var2: return 1
	if var1<var2: return -1
	return 0

import random

isSuccess=0
rn=random.randint(0,100)

while not isSuccess:
	print("Number=?")
	inp=int(input())
	if comp(inp,rn)==1:
		print("Smaller than "+str(inp)+".")
	if comp(inp,rn)==-1:
		print("Larger than "+str(inp)+".")
	if not comp(inp,rn):
		print("Yes. Right.")
		isSuccess=1
