l=[]
print(l)

l=["a",1,"abc",8.5]
print(l)

print(l[3])


for i in l:
	print(i)


l.append(54)
print(l)


import random
p=random.randint(0,5)
print(p)


l=["a",1,"abc",8.5]
if "abc" in l:
	print("yes")
else:
	print("no")	

t=len(l)
print(t)


l=["a",1,"abc",8.5]
l[3]=7.5
print(l)

r=input("enter name")
print(r)