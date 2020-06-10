from collections import Counter
t,n=map(int,input().split())
s=[list(input()) for i in range(t)]
v=list(zip(*s))
r=[]
for i in v:
    x=Counter(sorted(list(i)))
    y=x.most_common(1)
    r.append(y[0][0])
print("".join(r))
    
