#https://www.codechef.com/START16C/problems/DIRECTN
#Anurag Yadav
#https://github.com/AnuragYadav365

for _ in range(int(input())):
    N = int(input())
    dir = input()

    if 'LL' in dir:
        print("YES")
    elif 'RR' in dir:
        print("YES")
    else:
        print("NO")
