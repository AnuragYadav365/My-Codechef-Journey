#https://www.codechef.com/CUPP2101/problems/TOTCRT
#Anurag Yadav 20BCS5427

T = int(input())
while(T>0):
    N = int(input())

    N*=3
    dict={}

    while(N):
        val1, val2= map(str,input().split())

        if val1 in dict:
            dict[val1] = dict[val1] + int(val2)
        else:
            dict[val1]=int(val2)
        N-=1
    print(*sorted(dict.values()))
    T-=1