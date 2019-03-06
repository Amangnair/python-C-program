
def func(a,b,c):

	if (a >= b) and (a >= c):
   		largest = a
	elif (b >= a) and (b >= c):
   		largest = b
	else:
   		largest = c
	
	print("The largest number between",a,",",b,"and",c,"is",largest)

func(1,5,9)