def add(a,b): return a+b
def sub(a,b): return a-b
def mul(a,b): return a*b
def div(a,b): return a/b
def pline(a):
	print("operand")
	print(" >>",a)
	print("result")
	print("--------------------")
	print(">>>",end='')

def main():
	first=0
	od=0
	print("first operand is",first)
	while 1:
		print("operator(+, -, *, /, exit)")
		print(" >>",end='')
		op=input()
		if not(op=="+" or op=="-" or op=="*" or op=="/" or op=="end"):
			print("wrong input")
			pline(od)
			print(od)
			continue

		print("operand")
		print(" >>",end='')
		od=int(input())
		if op=="exit": break
		elif op=="+": 
			pline(od)
			first=add(first,od)
			print(first)
		elif op=="-":
			pline(od)
			first=sub(first,od)
			print(first)
		elif op=="*":
			pline(od)
			first=mul(first,od)
			print(first)
		elif op=="/":
			pline(od)
			first=div(first,od)
			print(first)
	print("Terminate")

if __name__ == '__main__':
	main()