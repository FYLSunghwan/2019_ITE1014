f = open("article.txt")
st=f.read()
st=st.replace(","," ")
st=st.replace("."," ")
st=st.replace('"',' ')
st=st.replace("!"," ")
st=st.replace("?"," ")
st=st.replace("'"," ")
st=st.lower()

ls = st.split()

dic = None

for i in ls:
	if dic == None: dic = {i:1}
	elif i in dic:
		tmp = dic[i]
		dic[i] = tmp+1
	else: dic[i] = 1

print(dic.keys())

for i in dic.keys():
	print(i,":",dic[i])



