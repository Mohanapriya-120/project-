#include<stdio.h>
int main() { 
int n;
scanf("%d",&n);
int val[n];
int wt[n];
int i,j;
for(i=0;i<n;i++)
{
scanf("%d%d",&val[i],&wt[i]);
}
int w;
scanf("%d",&w); 
printf("%d",knap(w,wt,val,n));
} 
int max(int a,int b)
{ 
if(a>b)
return a;
else
return b;
}
int knap(int w,int wt[],int val[],int n) 
{ 
int i,j; int op[n+1][w+1]; 
for(i=0;i<=n;i++) 
{ 
for(j=0;j<=w;j++) 
{ 
if(i==0 || j==0)
op[i][j]=0;
else if(wt[i-1]<=j) 
op[i][j]=max(val[i-1]+op[i-1][j-wt[i-1]],op[i-1][j]);
else 
op[i][j]=op[i-1][j];
}
}
return op[n][w];
}

