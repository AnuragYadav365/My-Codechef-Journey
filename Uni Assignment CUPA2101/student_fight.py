#https://www.codechef.com/CUPA2101/problems/STUFIGHT
#Anurag Yadav

T = int(input())
while(T>0):
    N = int(input())
    score = list(map(int, input().split()))

    max_score = max(score)

    max_cnt=0
    for marks in score:
        if(marks==max_score):
            max_cnt+=1
        elif(max_cnt==2):
            break
        else:
            pass

    if(max_cnt<2):
        print("peace:)")
    else:
        print("fight:(")
    T-=1