import imageio
cnt=0
sm=0
var=0
img = imageio.imread("carry_grant.jpg")
imgsum = sum(img)

ls = [0 for i in range(256)]
for i in imgsum:
	ls[i]+=1

print("bin\tcount\tpercentage(%)")
for i in range(256):
	print(str(i)+"\t"+str(ls[i])+"\t"+str(round(ls[i]/len(imgsum)*100,3)))
