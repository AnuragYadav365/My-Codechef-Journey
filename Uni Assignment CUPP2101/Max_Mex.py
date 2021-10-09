#https://www.codechef.com/CUPP2101/problems/MEX
#Anurag Yadav 20BCS5427

T= int(input())

while(T>0):
    N, K = map(int, input().split())
    S=list(map(int, input().split()))

    counter=0

    set_S = set(S)
    while(True):
        if counter in set_S:
            #print("counter in S ", counter)
            counter+=1
            continue

        if(K==0):
            print(counter)
            break
        else:
            counter+=1

        K-=1

    T-=1