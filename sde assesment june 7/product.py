l=list(map(int,input().split()))
n=int(input())
le=len(l)
lst=[[0 for i in range(le+1)]for j in range(n+1)]
for i in range(1,n+1):
       for j in range(1,le+1):
           lst[i][j]=lst[i][j-1]
           if l[j-1]<=i and l[j-1]>0:
               lst[i][j]+=lst[i // l[j-1]][j-1]+1
print(lst[n][le])
       
       
       
