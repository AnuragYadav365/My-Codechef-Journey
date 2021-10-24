#https://www.codechef.com/COOK134C/problems/CHEFSLP
#Anurag Yadav
#https://github.com/AnuragYadav365

for _ in range(int(input())):
    N, L, X = map(int, input().split())
    R = N-L
    if(L>R):
        print(R*X)
    elif(R>L):
        print(L*X)
    else:
        print(L*X)