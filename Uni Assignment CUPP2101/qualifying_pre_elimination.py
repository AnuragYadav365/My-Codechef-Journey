#https://www.codechef.com/CUPP2101/submit/QUALPREL
#Anurag Yadav 20BCS5427

T= int(input())

for i in range(T):
    N,K = map(int,input().split())
    S = list(map(int,input().split()))
    S.sort(reverse=True)

    cnt=0
    for i in range(N):
        if(S[i]>=S[K-1]):
            cnt+=1
    print(cnt)