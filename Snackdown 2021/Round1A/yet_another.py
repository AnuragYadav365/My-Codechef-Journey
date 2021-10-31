#https://www.codechef.com/SNCK1A21/problems/BINFLIP
#Anurag Yadav
#https://github.com/AnuragYadav365

import math
for _ in range(int(input())):
    N, K = map(int, input().split())
    if(K==0):
        print("Yes")
        print(0)

    elif(K%2!=0):
        lg = math.log2(K+1)
        int_lg = int(lg)

        #print("data",lg, int_lg)
        if((lg-int_lg)==0):
            print("YES")
            for i in range(int(lg),0,-1):
                print(i)
    else:
        print("NO")