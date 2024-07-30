#include <stdio.h>
void init(int a[][10],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
	}
}
int main()
{
	int a[10][10],b[10][10],c[10][10],n;
	printf("Enter the Matrix Order:");
	scanf("%d",&n);
	printf("Enter Matrix A\n"); init(a,n);
	printf("Enter Matrix B\n"); init(b,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=0;
			for(int k=0;k<n;k++) c[i][j]+=a[i][k]*b[k][j];
		}
	}
	printf("Resultant Matrix:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) printf("%d ",c[i][j]);
		printf("\n");
	}
}
