#include <stdio.h>
int main()
{
	int min=999,max=-1,n,a[10];
	printf("Enter the Array Size:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(min>a[i]) min=a[i];
		if(max<a[i]) max=a[i];
	}
	printf("Maximum Element:%d\n",max);
	printf("Minimum Element:%d",min);
}
