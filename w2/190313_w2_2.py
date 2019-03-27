i=0
n=input()
while(i<n):
	ch=''
	i=i+1
	j=n-i
	while(j):
		j=j-1
		ch=ch+' '

	ch=ch+"*"*(i*2-1)
	print(ch)
