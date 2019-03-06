import random

dict={"r":"rock","p":"paper","s":"scissor","q":"quit"}
l=["r","p","s"]

cs=0
us=0

while True:
	
	u=input("enter r for rock,p for paper,s for scissor,q to quit")
	print("u chose",dict[u])
	
	c=random.choice(l)
	print("computer chose:",c)

	if u==c:
		print("tie")
		print("your score",us,"computer score",cs)
	elif u=="r" and c=="p":
		print("computer won")
		cs=cs+1
		print("your score",us,"computer score",cs)
	elif u=="r" and c=="s":
		print("u won")
		us=us+1
		print("your score",us,"computer score",cs)
	elif u=="p" and c=="r":
		print("u won")
		us=us+1
		print("your score",us,"computer score",cs)
	elif u=="p" and c=="s":
		print("computer won")
		cs=cs+1
		print("your score",us,"computer score",cs)
	elif u=="s" and c=="p":
		print("u won")
		print("your score",us,"computer score",cs)
		us=us+1	
	elif u=="s" and c=="r":
		print("computer won")
		cs=cs+1
	