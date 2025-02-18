#include <stdio.h>
#include <stdlib.h>
int keys[10],freq[10];
int fsum(int i,int j)
{
	int sum=0;
	for(int k=i;k<=j;k++)
	{
		sum+=freq[k];
	}
	return sum;
}
int opcost(int i,int j)
{
	if(i==j) return freq[i];
	if(i>j) return 0;
	int sum=fsum(i,j);
	int min=INT_MAX;
	for(int r=i;r<=j;r++)
	{
		int cost=opcost(i,r-1)+opcost(r+1,j);
		if(min>cost) min=cost;
	}
	return min+sum;
}
int main()
{
	int n;
	printf("Enter the Number of Keys:");
	scanf("%d",&n);
	printf("Enter the Keys and their frequencies\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&keys[i],&freq[i]);
	}
	printf("The Optimised Cost:%d",opcost(0,n-1));
}
