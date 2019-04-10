import imageio
import math
cnt=0
sm=0
var=0

test = [1,2,3,4]

im = imageio.imread("HDR.jpg")
img = im.tolist()
imgsum = sum(img, [])
ls = [0 for i in range(256)]
for i in imgsum:
	ls[i]+=1

print(len(imgsum))

ls[0]=ls[0]/len(imgsum)
for i in range(1,256):
	ls[i]=ls[i-1]+ls[i]/len(imgsum)

for i in range(len(img)):
	for j in range(len(img[i])):
		im[i][j]=math.floor((256)*ls[im[i][j]])

imageio.imwrite('HDRCOM.jpg',im)
