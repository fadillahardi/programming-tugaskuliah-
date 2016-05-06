#include<stdio.h>

main()
{
	int n,i,x;
	int a[10];
	int b[10];
	printf("n= ");
	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
	scanf("%d",&a[x]);
}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		b[i]=a[i];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		a[i]=b[(n-1)-i];
		printf("%d",a[i]);
	}
}
