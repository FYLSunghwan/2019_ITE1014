def printLine(n):
	for i in range(1,n+1):
		for j in range(1,i+1):
			print(j,"",end='')
		print(" ")
	i=n
	while i:
		for j in range(1,i+1):
			print(j,"",end='')
		print(" ")
		i-=1

inp=int(input())
printLine(inp)