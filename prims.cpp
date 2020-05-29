  #include<stdio.h>
 int fn(int m[],int s[],int n)
 {
 	int min=999,i,n1;
 	for(i=0;i<n;i++)
 	if(s[i]==0 && m[i]<min)
 	min=m[i],n1=i;
 	return n1;
 }
  void prims(int g[4][4])
  {int n=4;
  	int i,j,k,v,p[n],m[n],s[n];
  	for(i=0;i<n;i++)
  	{
  		m[i]=-999;
  		s[i]=0;
	  }
	  m[0]=0;
	  p[0]=-1;
	  for(k=0;k<n-1;k++)
	  {
	  	v=fn(m,s,n);
	  	s[v]=1;
	  	for(j=0;j<n;j++)
	  	{
	  		if(g[v][j] && s[j]==0 && g[v][j]<m[j])
	  		p[j]=v,m[j]=g[v][j];
		  }
	  }
	  for(i=1;i<n;i++)
	  {
	  	printf("%d->%d..%d\n",p[i],i,g[i][p[i]]);
	  }
  }
   main()
  {
  	int g[4][4]={{0,1,1,0},
	  {1,0,1,0},
	  {1,1,0,1},
	  {0,0,1,0}};
  	prims(g);
  	
  	
  }
