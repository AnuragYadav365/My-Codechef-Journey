#https://www.codechef.com/SDPCB21/problems/TEMPLELA
#Anurag Yadav
#https://github.com/AnuragYadav365

S = int(input())
for j in range(S):
    N = int(input())
    H = list(map(int, input().split()))

    temp_lst = list(range(1,H[N//2]+1))

    left = H[:N//2+1]
    right = H[N//2:]
    right.reverse()

    if(N%2!=0):
        if(left==temp_lst and right==temp_lst):
            print("yes")
        else:
            print("no")
    else:
        print("no")
