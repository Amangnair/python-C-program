try:
	
	a=int(input("enter:"))
	if a<=5:
		raise NameError
	else:
		raise TypeError

except NameError:
	print("u hv chosen less than or equal to 5")
except TypeError:
	print("u hv chosen more than 5")

else:
	print("no error")

finally:
	print("execution completed")	
