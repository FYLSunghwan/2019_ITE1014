i=5
sw=-1
while(i<6):
	j=5-i
	while(j):
		j=j-1
		print(' ', end="")

	print("*"*(i*2-1))
	i=i+sw
	if i==1: sw=sw*-1