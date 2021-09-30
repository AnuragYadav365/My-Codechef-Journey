#https://www.codechef.com/CUPP2101/problems/SNAKPROC
#Anurag Yadav


#taking record count
R = int(input())

#loop for each record
for i in range(R):
    #Length of report
    L = int(input())

    #string that contain the records of snakes
    snakes = input()

    #for separating H and T from string
    #and inserting their sequence in list
    snakes_list = []
    for j in range(L):
        if(snakes[j]=='H'):
            snakes_list.append('H')
        elif(snakes[j]=='T'):
            snakes_list.append('T')

    #print(snakes_list)

    #flag variable
    flag=0

    #verifying the lenght of snakes_list
    if(len(snakes_list)%2!=0):
        flag=1

    #if sequence is even
    else:
        #check through the snakes list
        for x in range(len(snakes_list)):

            #if the character is even, then
            #it must be the Tail of the snake
            if(x%2==0):
                if(snakes_list[x]=='T'):
                    flag=1

            #else the character is odd, then
            #it must be the Head of the snake
            else:
                if(snakes_list[x]=='H'):
                    flag=1

    #checking for the flag value
    if(not flag):
        print("Valid")
    else:
        print("Invalid")