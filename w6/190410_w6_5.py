import imageio
cnt=0
sm=0
var=0
img = imageio.imread("carry_grant.jpg")
imgsum = sum(img)
for i in range(len(imgsum)-1):
	for j in range(i+1,len(imgsum)):
		if(imgsum[i]<imgsum[j]):
			cnt+=1
			tmp=imgsum[i]
			imgsum[i]=imgsum[j]
			imgsum[j]=tmp

for i in imgsum:
	cnt+=1
	sm+=i
sm/=len(imgsum)

for i in imgsum:
	var+=(i-sm)**2
var/=len(imgsum)

print("max:",imgsum[0])
print("min:",imgsum[len(imgsum)-1])
print("median:",imgsum[len(imgsum)//2])
print("oper:",cnt)
print("var:",var)