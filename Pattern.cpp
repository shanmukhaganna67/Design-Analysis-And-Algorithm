#include <stdio.h>
int main()
{
	printf("Pattern\n");
	for(int i=0;i<4;i++)
	{
		for(int j=4;j>=i;j--) printf(" ");
		for(int j=0;j<i+1;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
}
