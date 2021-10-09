#https://www.codechef.com/CUPP2101/problems/MAXDIFF
#Anurag Yadav 20BCS5427

T = int(input())

while(T>0):
    N, K = map(int, input().split())
    W = list(map(int, input().split()))

    W.sort()
    if K>N-K:
        K=N-K

    print(abs(sum(W[:K])-sum(W[K:N])))
    T-=1