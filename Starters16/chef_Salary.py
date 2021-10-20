#https://www.codechef.com/START16C/problems/HCAGMAM1
#Anurag Yadav
#https://github.com/AnuragYadav365

for _ in range(int(input())):
    X,Y = map(int, input().split())
    days = input()

    working_cnt=0
    temp=0
    max=0
    for i in range(len(days)):
        if(days[i]=="1"):
            working_cnt+=1
            temp+=1

            if(temp>max):
                max=temp
        else:
            if(temp>max):
                max=temp
            #print("temp initialized",temp)
            temp=0

    #print(working_cnt)
    sal = working_cnt*X
    bonus = max*Y
    print(sal+bonus)