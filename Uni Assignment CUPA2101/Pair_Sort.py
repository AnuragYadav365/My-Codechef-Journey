N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

temp_pair=[]
for i in range(N):
    temp_pair.append([A[i],B[i]])

print(A)
print(B)
temp_pair.sort()


for lst1 in range(N):
    a=max(B)
    ind=B.index(a)
    print(A[ind], a, end=" ")
    B.remove(a)
    A.remove(A[ind])
    #print(B, A)