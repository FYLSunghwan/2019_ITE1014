i=0
n=int(input())
while(i<n):
	ch=''
	i=i+1
	j=5-i
	while(j):
		j=j-1
		ch=ch+' '
	j=1
	while(j<=2*i-1):
		if(j==1 or j==2*i-1 or i==n): ch=ch+'*'
		else: ch=ch+' ' 
		j=j+1
	print(ch)
