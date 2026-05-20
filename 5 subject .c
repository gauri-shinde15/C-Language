#include<stdio.h>
    void main()
{
	int a[5],i,tot=0;
	float per;
	for(i=0;i<5;i++)
	{
		printf("enter mark:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		tot=tot+a[i];
	}
	 per=tot/5;
	 printf("total=%d",tot);
	 printf("\n persentag%f,per");
}
