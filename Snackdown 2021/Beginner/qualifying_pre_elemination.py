#https://www.codechef.com/SDPCB21/problems/QUALPREL
#Anurag Yadav
#https://github.com/AnuragYadav365

T = int(input())
for j in range(T):
    N, K = map(int, input().split())
    S = list(map(int, input().split()))

    #reversing the list
    S.sort(reverse=True)

    ans = 0
    for i in range(N):
        #checking for index value less than Kth index value
        if(S[i]>=S[K-1]):
            ans+=1

    print(ans)