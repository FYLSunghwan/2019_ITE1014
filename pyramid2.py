i=5
sw=-1
while(i<6):
	ch=''
	j=5-i
	while(j):
		j=j-1
		ch=ch+' '

	ch=ch+"*"*(i*2-1)
	print(ch)
	i=i+sw
	if i==1: sw=sw*-1
