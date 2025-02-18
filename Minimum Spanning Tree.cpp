#include <stdio.h>
#include <stdlib.h>
int graph[10][10],visited[10],dv[10],n;
int minvertex()
{
	int min=INT_MAX,in;
	for(int i=0;i<n;i++)
	{
		if(visited[i]==0 && dv[i]<min)
		{
			min=dv[i];
			in=i;
		}
	}
	return in;
}
int prims(int s)
{
	for(int i=0;i<n;i++)
	{
		visited[i]=0;
		dv[i]=INT_MAX;
	}
	dv[s]=0;
	for(int i=0;i<n;i++)
	{
		int d=minvertex();
		visited[d]=1;
		for(int j=0;j<n;j++)
		{
			if(graph[d][j]!=0 && visited[j]==0 && graph[d][j]<dv[j])
			{
				dv[j]=graph[d][j];
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++) sum+=dv[i];
	printf("Minimum Cost:%d",sum);
}
int main()
{
	printf("Enter the Number of Vertices:");
	scanf("%d",&n);
	printf("Enter Graph's Adjacency Matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) scanf("%d",&graph[i][j]);
	}
	prims(0);
}
