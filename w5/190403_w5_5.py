n=int(input())
ls = [[0]*n for i in range(n)]

cnt=1
y=0
x=0
sw=0
dy=[0,1,0,-1]
dx=[1,0,-1,0]
while cnt<=n*n:
	ls[y][x]=cnt
	if(y+dy[sw]>=n or x+dx[sw]>=n or y+dy[sw]<0 or y+dx[sw]<0 or ls[y+dy[sw]][x+dx[sw]]): sw=(sw+1)%4
	y+=dy[sw]
	x+=dx[sw]
	cnt+=1

for i in range(n):
	for j in range(n):
		print(str(ls[i][j])+"\t",end='')
	print()


