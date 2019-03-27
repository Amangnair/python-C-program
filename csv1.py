import csv
import matplotlib.pyplot as plt 
x=[]
y=[]
with open('graph1.csv','r') as csvfile:
	reader=csv.reader(csvfile)
	for i in reader:
		x.append(int(i[0]))
		y.append(int(i[1]))
plt.plot(x,y,color="red")
plt.show()
	