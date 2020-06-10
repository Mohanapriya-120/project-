s=str(input())
def find(s):
    n=len(s)
    l=[[0 for i in range(n+1)] for j in range(n+1)]
    for i in range(1,n+1):
        for j in range(1,n+1):
            if s[i-1]==s[j-1] and i!=j:
                l[i][j]=1+l[i-1][j-1]
            else:
                l[i][j]=max(l[i][j-1],l[i-1][j])
    st=''
    a=n
    b=n
    while  a>0 and b>0:
        #print(st)
        if l[a][b]==l[a-1][b-1]+1:
            st+=s[a-1]
            a-=1
            b-=1
        elif l[a][b]==l[a-1][b]:
            a-=1
        else:
            b-=1
    st=''.join(reversed(st))
    return st
print(find(s))
