#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data
{
    char nama[5][30];
    char npm[5][10];
    //struct data *next;
};

main()
{
    int i;
	struct Data Mhs;
	printf("Program untuk mendata mahasiswa\n");

	for(i=0;i<5;i++)
	{
		printf("masukkan info mahasiswa\n");
		printf("Nama: ");
		scanf("%s",&Mhs.nama[i]);
		printf("NPM: ");
		scanf("%s",&Mhs.npm[i]);
		system("cls");
	}
	printf("Nama\t\tNPM\t\n");
	for(i=0;i<5;i++)
	{
		printf("%s\t\t%s\t\n",Mhs.nama[i],Mhs.npm[i]);
	}

	return main();

}
