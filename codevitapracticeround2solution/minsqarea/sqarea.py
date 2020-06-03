t=int(input())
while t!=0:
    t-=1
    n=int(input())
    x=[]
    y=[]
    while n!=0:
        n-=1
        a,b=map(int,input().split())
        x.append(a)
        y.append(b)
    x.sort()
    y.sort()

    l=max(x)-min(x)
    l1=max(y)-min(y)
    print(l*l1)
