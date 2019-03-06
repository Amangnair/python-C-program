import random   


while True:
        d=input("press r to roll,q to quit")   
        if  d=='r':
            print(random.randint(1,6))

        elif d=='q':
            print("bye!")
            exit()

            print("end!")    