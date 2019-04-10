import imageio
import math
cnt=0
sm=0
var=0
img = imageio.imread("HDR.jpg")
imgsum = sum(img)

ls = [0 for i in range(256)]
for i in imgsum:
	ls[i]+=1

ls[0]=ls[0]/len(ls)
for i in range(1,256):
	ls[i]=ls[i]/len(imgsum)+ls[i-1]

for i in range(len(img)):
	for j in range(len(img[i])):
		img[i][j]=math.floor((255)*ls[img[i][j]])

imageio.imwrite('HDRCOM.jpg',img)
