#include<stdio.h>
void main()
{
	int i,n,max=0;
	printf("enter limit:");
	scanf("%d",&n);
	int a[5];
	for(i=0;i<n;i++)
	{
		printf("enter the maximum:");
		scanf("%d",&a[i]);
	}
	max=a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("maximum number=%d",max);
}
