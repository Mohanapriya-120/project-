#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n],i,su,c,m,f,q;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    scanf("%lld",&m);
    while(m--)
    {scanf("%lld",&q);
     su=0;f=0;c=0;
        for(i=0;i<n;i++)
        {
            
            su+=a[i];c++;
            if(su>=q)
            {
                printf("%lld\n",c);
                f=1;
                break;
            }
            
        }
     if(f==0)
         printf("-1\n");
    }
}
