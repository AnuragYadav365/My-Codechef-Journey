#https://www.codechef.com/SNCKQL21/problems/TESTSERIES
#Anurag Yadav
#https://github.com/AnuragYadav365

T = int(input())

for i in range(T):
    draw_cnt=0
    ind_win = 0
    eng_win = 0

    R = list(map(int, input().split()))

    for j in R:
        if(j==0):
            draw_cnt+=1
        elif(j==1):
            ind_win+=1
        else:
            eng_win+=1

    #print(draw_cnt, ind_win, eng_win)

    if(draw_cnt>=eng_win and draw_cnt>=ind_win):
        if(ind_win>eng_win):
            print("INDIA")
        elif(eng_win>ind_win):
            print("ENGLAND")
        else:
            print("DRAW")
    else:
        if(ind_win>eng_win):
            print("INDIA")
        elif(eng_win>ind_win):
            print("ENGLAND")
        else:
            print("DRAW")