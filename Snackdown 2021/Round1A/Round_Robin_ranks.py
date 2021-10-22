#https://www.codechef.com/SNCK1A21/problems/RRR
#Anurag Yadav
#https://github.com/AnuragYadav365

for _ in range(int(input())):
    N, K = map(int, input().split())
    print(2*((2*N-K-1)//2))