#include <stdio.h>
int jobs[10][10],n,assigned[10],assignment[10];
int assign(int worker)
{
	int min=999,in;
	for(int i=0;i<n;i++)
	{
		if(jobs[worker][i]<min && assigned[i]==0)
		{
			min=jobs[worker][i];
			in=i;
		}
	}
	return in;
}
int branchnbound()
{
	for(int i=0;i<n;i++) assigned[i]=0;
	for(int i=0;i<n;i++)
	{
		assignment[i]=assign(i);
		assigned[assignment[i]]=1;
	}
	for(int i=0;i<n;i++)
	{
		printf("Worker-%d Assigned %d Job\n",i+1,assignment[i]);
	}
}
int main()
{
	printf("Enter the Number of Workers:");
	scanf("%d",&n);
	printf("Enter the Cost Matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&jobs[i][j]);
		}
	}
	branchnbound();
}
