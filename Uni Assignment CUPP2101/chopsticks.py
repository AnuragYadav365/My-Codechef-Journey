#https://www.codechef.com/CUPP2101/problems/TACHSTCK
#Anurag Yadav 20BCS5427

N, D = map(int, input().split())
L=[]
for _ in range(N):
    L.append(int(input()))

pair_cnt = 0
iter = 0
L.sort()

while(iter<N-1):
    if(L[iter] >= (L[iter+1]-D)):
        pair_cnt += 1
        iter += 2
    else:
        iter += 1
    #print(pair_cnt, iter)
print(pair_cnt)