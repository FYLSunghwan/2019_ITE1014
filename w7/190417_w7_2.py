n = int(input())
for i in range(1,n+1):
	cnt = i
	ans=0
	while cnt:
		if cnt%10 == 3 or  (cnt%10)==6 or cnt%10 == 9: ans+=1
		cnt//=10
	if ans:
		for i in range(ans): 
			print("clap ",end='')
		print()
	else: print(i)
