import random

d=0
p=0
snl={8:37,13:34,40:68,52:81,76:97,25:4,11:2,38:9,65:46,89:70,93:64}

def rolldice():
	return random.randint(1,6)

while True:
	r = input("press r to roll,q to quit :")	

	if r =='r':
		d = random.randint(1,6)
		print("you got:",d)
		if d == 6:
			print("congratulations,you can play now.")
			break
		else:
			print("roll again,till you get 6")

while True:
	r = input("press r to roll,q to quit :")

	if r =='r':
		d = random.randint(1,6)
		print("you got:",d)

		p = p+d

		if p==100:
			print("you won!")
			exit()

		if p>100:
			p=p-d 
			print("wait till you get",100-p,"or less.")

		print("your new position is:",p)

		if p in snl:
			if p<snl[p]:
				print("wow,you got a ladder.")
			else:
				print("oops,you got bit by a snake.")

			p=snl[p]
			print("move to",p)

	elif r=='q':
		exit()							