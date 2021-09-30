#https://www.codechef.com/CUPP2101/problems/TWOSTR
#Anurag Yadav 20BCS5427

#number of test cases
T =int(input())

#loop until test cases becomes 0
while(T>0):

    #taking input of X and Y words
    X = input()
    Y = input()

    #storing the ans
    ans = ""

    #check every character of Y with respect to X
    for a in range(len(X)):
        if(Y[a] == X[a] or X[a]=='?' or Y[a] == '?'):
            ans = "Yes"
        else:
            ans = "No"
            break
    T-=1
    print(ans)