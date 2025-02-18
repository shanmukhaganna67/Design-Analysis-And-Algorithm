#include <stdio.h>
int d[10][10],n,dtemp[10][10];
int min(int a,int b)
{
	if(a<b) return a;
	return b;
}
int copy()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			d[i][j]=dtemp[i][j];
			dtemp[i][j]=-1;
		}
	}
}
int floyd(int a)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a==i || a==j) dtemp[i][j]=d[i][j];
			if(i==j) dtemp[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(dtemp[i][j]==-1) dtemp[i][j]=min(d[i][j],d[i][a]+d[a][j]);
		}
	}
	copy();
}
int main()
{
	printf("Enter the Number of Vertex:");
	scanf("%d",&n);
	printf("Enter the Adjacency Matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&d[i][j]);
			dtemp[i][j]=-1;
		}
	}
    for(int i=0;i<n;i++)   floyd(i);
	printf("All Pair Shortest Paths\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) printf("%d ",d[i][j]);
		printf("\n");
	}
}
