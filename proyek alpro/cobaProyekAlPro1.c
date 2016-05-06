#include <stdio.h>

main()
{
	float ip;
	int totalSKS;
	printf("IP terakhir: ");
	scanf("%f", &ip);
	if(ip>=3.5)
	{
		totalSKS = 24;
		//return totalSKS;
	}
	else if(ip<3.5&&ip>=3.0)
	{
		totalSKS = 21;
		//return totalSKS;
	}
	else if(ip<3.0&&ip>=2.5)
	{
		totalSKS = 18;
		//return totalSKS;
	}
	else if(ip<2.5&&ip>=2.0)
	{
		totalSKS = 15;
		//return totalSKS;
	}
	else if(ip<2.0)
	{
	totalSKS = 12;
	//return totalSKS;
	}
	printf("total sks anda: %d",totalSKS);
	return totalSKS;
}
