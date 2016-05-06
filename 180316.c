#include<stdio.h>

main()
{
	int i,umur, now;
	int lahir[20]={1970,1964,1980,1967,1968,1961,1968,1968,1990,1977,1978,1979,1979,1964,1968,1976,1989,1988,1975,1978};
	int jumlah[32];
	now = 2016;
	for(i=0;i<32;i++)
	{
		jumlah[i]=0;
	}
	for(i=0;i<20;i++)
	{
		umur = 2016 - lahir[i];
		//printf("\n%d",umur);
		if(umur<25||umur>55)
		{
			jumlah[31] = jumlah[31]+1;	
		}
		else
		{
			jumlah[umur-25]=jumlah[umur-25]+1;
		}
	}
	printf("\n");
	printf("\numur\t jumlah");
	for(i=0;i<32;i++)
	{
		if(i==31)
		{
			printf("\nlainnya: %d",jumlah[i]);
			}
			else printf("\n%d\t %d",25+i,jumlah[i]);
	}
	return 0;
}
