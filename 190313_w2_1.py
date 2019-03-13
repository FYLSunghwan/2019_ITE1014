cnt=9
while(cnt):
	print("Input Dan.")
	dan=input()
	ch=''
	ch=ch+"**********"+str(dan)+"dan**********\n"
	for i in range(1,10):
		ch=ch+str(dan)+'*'+str(i)+'='+str(dan*i)+'\n'
	ch=ch+"*************************\n"
	cnt=cnt-1;
	print(ch)