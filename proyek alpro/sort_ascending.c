#include<stdio.h>
#include<stdlib.h>

main()
{
    int x,i,num,z,d,keep;
	for(num=0;num<SIZE;num++)
	{
		for(z=0;z<(SIZE-1);z++)
		{
			if(a[z]>a[z+1])
			{
				keep = a[z];
				a[z]=a[z+1];
				a[z+1]=keep;
			}
		}
	}
	printf("\n\n");
	printf("hasil urutan naik:\n ");
	for(z=0;z<SIZE;z++)
	{
		printf("%d ",a[z]);

	}
}
