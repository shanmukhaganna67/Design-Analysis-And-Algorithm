#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Enter the row range of Pascal Triangle:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int coef=0;
		for(int j=n;j>=i;j--) printf(" ");
		for(int j=0;j<i+1;j++)
		{
			if(j==0 ||j==i || i==0)
			{
				coef=1;
				printf("%d ",coef);
			}
			else
			{
				coef*=ceil(i-j+1)/j;
				printf("%d ",coef);
			}
		}
		printf("\n");
	}
}
