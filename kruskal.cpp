#include<stdio.h>
int co=1,aa,mo=0;
int kruskals(int w[4][4],int n)
{
	int p[4]={0};
	int min,sum=0,ne=0,i,j,u,v,a,b;
	while(ne<n-1)
	{
		min=999;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(w[i][j]<min)
				{
					min=w[i][j];u=a=i;v=b=j;
				}
			}
		}
		while (p[u])
		u=p[u];
		while(p[v])
		v=p[v];
		if(u!=v)
		{
			ne++;
			sum+=min;
			printf("%d->%d %d\n",a,b,min);
		if(co==1)
		aa=a;
		co=0;
		if(aa!=a)
		mo++;
		
		aa=a;
		p[u]=v;
		
		}
		w[a][b]=w[b][a]=999;
	}
	ne++;
	printf("%d",mo+1);
}
main()
{
	int w[4][4]={{0,1,1,0},
	  {1,0,1,0},
	  {1,1,0,1},
	  {0,0,1,0}};
  	kruskals(w,4);
}
