#https://www.codechef.com/SDPCB21/problems/TEMPLELA
#Anurag Yadav
#https://github.com/AnuragYadav365

S = int(input())
for j in range(S):
    N = int(input())
    H = list(map(int, input().split()))

    ans = "no"
    #to have a center the height list must be odd
    if(len(H)%2==0):
        print(ans)
        continue

    else:
        if(H[0] != 1):
            print(ans)
            continue
        else:
            counter=1
            temp_lst=[]
            for i in range(int(N/2)):
                if(H[i]==counter):
                    temp_lst.append(counter)
                    ans="yes"
                    pass
                else:
                    ans="no"
                    break
                counter+=1
            temp_lst.append(counter)
            print(temp_lst)
            if(ans=="no"):
                print(ans)
                continue
            else:
                left = H[:int(N/2)+1]
                right = H[int(N/2):]
                right.sort()
                if(left==temp_lst and right==temp_lst):
                    print(ans)
                else:
                    print("no")
                    continue

