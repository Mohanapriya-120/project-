#include<stdio.h>
struct knap
{
	int val;
	int wgt;
	int fract;
}
main()
{
	int n;scanf("%d",&n);
	struct knap a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i].val,&a[i].wgt);
		//printf("%d",a[i].val);
	}
	for(i=0;i<n;i++)
	{
		a[i].fract=a[i].val/a[i].wgt;//printf("%d\n",a[i].fract);
	}int j;
	//for(i=0;i<n;i++)
	//printf("%d\n",a[i].fract);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i].fract<a[j].fract)
			{
				a[i].fract=a[j].fract;
				a[i].val=a[j].val;
				a[i].wgt=a[j].wgt;
			}			
		}
	}printf("sorted knapsack value\n");
	for(i=0;i<n;i++)
	printf("%d %d %d\n",a[i].val,a[i].wgt,a[i].fract);
	int w;printf("\nenter weight..");
	scanf("%d",&w);int op=0;
	for(i=0;i<n;i++)
	{
		if(w>0)
		{if(w>=a[i].wgt){
			op+=a[i].val;
			w=w-a[i].wgt;}
			else
			{//double a1=w/a[i].wgt;printf("%d",a1);
				op+=a[i].val*((float)(w/a[i].wgt));
			}
		}
		else
		break;
	}
	printf("max val is %d",op);
}
