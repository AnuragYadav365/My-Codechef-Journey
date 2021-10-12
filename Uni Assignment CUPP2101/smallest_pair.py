#https://www.codechef.com/CUPP2101/problems/SMPAIR
#Anurag Yadav 20BCS5427

T = int(input())
while(T>0):
    N = int(input())
    A = list(map(int, input().split()))
    A.sort()

    print(A[0]+A[1])
    T-=1