i=0
while(i<5):
	ch=''
	i=i+1
	j=5-i
	while(j):
		j=j-1
		ch=ch+' '

	ch=ch+"*"*(i*2-1)
	print(ch)