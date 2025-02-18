#include <stdio.h>
int path[10],graph[10][10],n;
int check(int pos,int v)
{
	if(graph[path[pos-1]][v]==0) return 0;
	for(int i=0;i<pos;i++)
	{
		if(path[i]==v) return 0;
	}
	return 1;
}
int hamiltanion(int pos)
{
	if(pos==n) return 1;
	for(int i=1;i<n;i++)
	{
		if(check(pos,i))
		{
			path[pos]=i;
			if(hamiltanion(pos+1)) return 1;
			path[pos]=0;
		}
	}
	return 0;
}
int main()
{
	printf("Enter the Number of Vertex:");
	scanf("%d",&n);
	printf("Enter the graph Adjacency Matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) scanf("%d",&graph[i][j]);
	}
	path[0]=0;
	hamiltanion(1);
	printf("Hamiltanion Path=");
	for(int i=0;i<n;i++) printf("%d ",path[i]);
}
