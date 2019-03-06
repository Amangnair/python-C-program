for i in range(1,7):
	r=input("press r to roll,q to quit")

	if r=="r":
		if i==1 or  i==4:
			print("u got",6)

		elif i==3 or i==6:
			print("u got",3)

		elif i==2:
			print("u got",1)

		else:
			print("u got",2)
	
	elif r=="q":
		print("bye!")
		exit()

print("you won")	