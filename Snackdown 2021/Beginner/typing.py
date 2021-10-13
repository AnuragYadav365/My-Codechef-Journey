#https://www.codechef.com/SDPCB21/problems/TYPING
#Anurag Yadav
#https://github.com/AnuragYadav365

T = int(input())
for j in range(T):
    final_time = 0
    N = int(input())
    words=[]
    for _ in range(N):
        word=input()
        tot_time=0
        for i in range(len(word)):
            if(i==0):
                tot_time+=2
            else:
                if(((word[i-1]=='d' or word[i-1]=='f') and(word[i]=='j' or word[i]=='k')) or ((word[i]=='d' or word[i]=='f') and (word[i-1]=='j' or word[i-1]=='k'))):
                    tot_time+=2

                else:
                    tot_time+=4

        if word in words:
            tot_time=tot_time//2

        words.append(word)
        final_time+=tot_time
    print(final_time)