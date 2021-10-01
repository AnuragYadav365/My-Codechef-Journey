T = int(input())
for i in range(T):
    A, B = map(int, input().split())
    if(A==0):
        print("Liquid")
    elif(B==0):
        print("Solid")
    else:
        print("Solution")