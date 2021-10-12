#https://www.codechef.com/CUPA2101/problems/CHEFSUB
#Anurag Yadav

T = int(input())
while(T>0):
    N = int(input())
    A= list(map(int, input().split()))

    ans=0
    cnt=0
    for i in range(0,N):
        if(A[i]%2==0):
            cnt +=1
            ans = max(ans,cnt)

        else:
            cnt = 0

    ans = max(ans,cnt)
    print(ans)
    T-=1