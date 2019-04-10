f = open("article.txt")
st=f.read()
st=st.replace(","," ")
st=st.replace("."," ")
st=st.replace('"',' ')
st=st.replace("!"," ")
st=st.replace("?"," ")
st=st.replace("'"," ")
st=st.replace(" ","")

ls = list(st)

dic = None
ls2 = None

for i in ls:
	if dic == None: dic = {i:1}
	elif i in dic:
		tmp = dic[i]
		dic[i] = tmp+1
	else: dic[i] = 1

for i in dic.keys():
	if(ls2==None):ls2 = [[i,dic[i]]]
	else :ls2.append([i,dic[i]])

for i in range(0,len(ls2)-1):
	for j in range(i+1,len(ls2)):
		if ls2[i][1]<ls2[j][1]:
			tmp=ls2[i]
			ls2[i]=ls2[j]
			ls2[j]=tmp

for i in ls2:
	print(i[0],":",i[1])



