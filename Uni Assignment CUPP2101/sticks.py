#https://www.codechef.com/CUPP2101/problems/STICKS
#Anurag Yadav

T = int(input())
while(T>0):
    N = int(input())
    A = list(map(int, input().split()))

    A.sort(reverse=True)
    #print(A)

    pair=[]
    j = 0
    while j < N-1:
        if(A[j]==A[j+1]):
            pair.append(A[j])
            j+=2
        else:
            j+=1

        if(len(pair)==2):
            break

    if(len(pair)==2):
        print(pair[0]*pair[1])
    else:
        print(-1)

    T-=1