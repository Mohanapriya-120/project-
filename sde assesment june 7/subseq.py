l=list(map(int,input().split()))
n=len(l)
lst=[1 for i in range(n)]
for i in range(1,n):
    for j in range(0,i):
        if l[i]>l[j] and lst[i]<lst[j]+1:
            lst[i]=lst[j]+1
m=0
for i in range(n):
    m=max(m,lst[i])
print(m)
