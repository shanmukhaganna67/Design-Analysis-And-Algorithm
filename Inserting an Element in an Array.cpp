#include <stdio.h>
int main()
{
	int a[10],n,in,s;
	printf("Enter the Array Size:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	printf("Enter the Index and Element to Insert:");
	scanf("%d%d",&in,&s);
	int t1=a[in];
	a[in]=s;
	n++;
	for(int i=in+1;i<n;i++)
	{
		int t2=a[i];
		a[i]=t1;
		t1=t2;
	}
	printf("Array After Insertion: ");
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}
