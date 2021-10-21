#https://www.codechef.com/SNCK1A21/problems/DANCEMOVES
#Anurag Yadav
#https://github.com/AnuragYadav365

for _ in range(int(input())):
    X, Y = map(int, input().split())

    diff = abs(X-Y)
    #print(diff)

    k=0
    moonwalk=0
    slide=0
    while(True):
        if(k<diff):
            k+=2
            moonwalk+=1
        elif(k>diff):
            k-=1
            slide+=1
        elif(k==diff):
            break

    print(moonwalk + slide)