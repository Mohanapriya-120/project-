n=int(input())
while n!=0:
    n-=1
    s=input()
    l=[0]*26
    if len(s)==1:
        print("No")
    else:
        for i in s:
            l[ord(i)-97]=l[ord(i)-97]+1
        f=0
        for i in l:
            if i!=0 and i!=1:
                if i>=2:
                    f=1 
                    break
        if f==0:
            print("No")
        else:
            print("Yes")
    
