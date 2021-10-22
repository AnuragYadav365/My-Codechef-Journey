#https://www.codechef.com/SNCK1A21/problems/MINLCM1
#Anurag Yadav
#https://github.com/AnuragYadav365

for _ in range(int(input())):
    X, Y =map(int, input().split())
    print(X*2,(X*Y-1)*(X*Y))