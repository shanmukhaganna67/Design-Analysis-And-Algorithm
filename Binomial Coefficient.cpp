#include <stdio.h>
int bcf(int n,int k)
{
	if(k==0|| n==k) return 1;
	if(k==1) return n;
	return bcf(n-1,k-1)+bcf(n-1,k);
}
int main()
{
	int n,k;
	printf("Enter the n and K values:");
	scanf("%d%d",&n,&k);
	printf("The Binomial Coefficient Value:%d",bcf(n,k));
}
