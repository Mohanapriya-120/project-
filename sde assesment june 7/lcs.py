a=input()
b=input()
x=len(a)
y=len(b)
l=[[None]*(y+1) for i in range(x+1)]
for i in range(x+1):
    for j in range(y+1):
        if i==0 or j==0:
            l[i][j]=0
        elif a[i-1]==b[j-1]:
            l[i][j]=l[i-1][j-1]+1
        else:
            l[i][j]=max(l[i-1][j],l[i][j-1])
print(l[x][y])
