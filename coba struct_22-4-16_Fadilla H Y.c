#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct DataMhs
{
	char nama[5][50];
	char npm[5];
	char no_tlp[5][15];
	float ipk[5];
};

main()
{
	int i;
	struct DataMhs Mhs;
	printf("Program untuk mendata mahasiswa\n");
	
	for(i=0;i<5;i++)
	{
		printf("masukkan info mahasiswa\n");
		printf("Nama: ");
		scanf("%s",&Mhs.nama[i]);
		printf("NPM: ");
		scanf("%s",&Mhs.npm[i]);
		printf("No.Telp: ");
		scanf("%s",&Mhs.no_tlp[i]);
		printf("IPK: ");
		scanf("%f",&Mhs.ipk[i]);
		system("cls");	
	}
	printf("Nama\t\tNPM\t\tNo.Telp\t\tIPK\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t\t%s\t%s\t\t%.2f\n",Mhs.nama[i],Mhs.npm[i],Mhs.no_tlp[i],Mhs.ipk[i]);
	}
	
	return 0;
}
