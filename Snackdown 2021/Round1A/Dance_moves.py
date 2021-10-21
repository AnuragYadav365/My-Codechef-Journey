#https://www.codechef.com/SNCK1A21/problems/DANCEMOVES
#Anurag Yadav
#https://github.com/AnuragYadav365

for _ in range(int(input())):
    X, Y = map(int, input().split())

    diff = Y-X
    #print(diff)
    k=0
    moonwalk=0
    slide=0
    if(diff>0):
        while(True):
            if(k<diff):
                k+=2
                moonwalk+=1
            elif(k>diff):
                k-=1
                slide+=1
            elif(k==diff):
                break

    elif(diff<0):
        while(diff!=0):
            diff+=1
            slide+=1

    print(moonwalk + slide)