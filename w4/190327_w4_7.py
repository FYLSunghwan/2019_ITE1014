n=5

def drawline(m):
	if m%2:
		print("*"*m)
		return 0
	m//=2

	print("*"*m+" "*(2*(n-m)-1)+"*"*m)

n=int(input())
drawline(n*2-1)
i=n-1
while i:
	drawline(i*2)
	i-=1
i=1
while i<n:
	drawline(i*2)
	i+=1
drawline(n*2-1)