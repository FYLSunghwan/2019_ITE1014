def Fibonacci(n):
	if n<=0:
		return 0
	if n<=2:
		return 1
	return Fibonacci(n-1)+Fibonacci(n-2)

inp=int(input())
print(Fibonacci(inp))