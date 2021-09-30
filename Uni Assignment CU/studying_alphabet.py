#https://www.codechef.com/CUPP2101/problems/ALPHABET
#Anurag Yadav


#taking the string
S = input()

#number of strings to match characters
N = int(input())

#loop until N becomes 0
while(N>0):

    #input the word to check
    W = input()

    #output Yes if characters in W match with S
    #else No
    print("No" if "No" in ["Yes" if _ in S else "No" for _ in W] else "Yes")

    #while loop decrement
    N-=1
