import time 

timest = time.time()
for i in range(0, 200):
	print('*', end = '')
timeend= time.time()
print((timeend-timest)*1000)

timest = time.time()
s=''
for i in range(0, 200):
	s+='*'
print(s)
timeend=time.time()
print((timeend-timest)*1000)