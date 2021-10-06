#https://www.codechef.com/CUPP2101/problems/LAPIN
#Anurag Yadav 20BCS5427


T = int(input())
while(T>0):
    S = input()

    sub_s1 = []
    sub_s2 = []
    #if length of S is even
    if(len(S)%2==0):
        sub_s1 = list(map(str, S[0:int(len(S)/2)]))
        sub_s2 = list(map(str, S[int(len(S)/2):len(S)]))

    #if length of S is odd
    else:
        sub_s1 = list(map(str, S[0:int(len(S)/2)]))
        #ignore mid character in substring 2
        sub_s2 = list(map(str, S[int(len(S)/2)+1:len(S)]))


    #checking every element of sub_s1 in sub_s2
    #if found delete the occurence from sub_s2
    #otherwise just pass
    #after checking for element also delete it from sub_s1
    while(sub_s1!=[]):
        el = sub_s1[0]
        if el in sub_s2:
            sub_s2.remove(el)
        else:
            pass
        sub_s1.remove(el)

    # print(sub_s1)
    # print(sub_s2)

    #if both list have no elements
    #then they both have same elements and same number of occurences
    if(sub_s1==[] and sub_s2==[]):
        print("YES")
    else:
        print("NO")

    #while loop decrement counter
    T-=1