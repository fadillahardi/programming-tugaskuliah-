#include<stdio.h>
#include<stdlib.h>

int sks, totalsks, i;
float nilai, indeks, angka;
int nhuruf;

nilaiHuruf(float nilai)
{
    if(nilai>=85)
    {
        printf("nilai huruf: A");
    }
	else if(nilai>=80)
    {
        printf("nilai huruf: A-");
	}
	else if(nilai>=75)
	{
        printf("nilai huruf: B+");
	}
	else if(nilai>=70)
    {
        printf("nilai huruf: B");
    }
	else if(nilai>=65)
    {
        printf("nilai huruf: B-");
    }
	else if(nilai>=60)
    {
        printf("nilai huruf: C+");
    }
	else if(nilai>=55)
    {
        printf("nilai huruf: C");
    }
	else if(nilai>=40)
	{
        printf("nilai huruf: D");
	}
	else printf("nilai huruf: E");
}

float nilaiAngka(float nilai, float indeks)
{
    if(nilai>=85)
    {
        indeks=4;
    }
	else if(nilai>=80)
    {
        indeks=3.7;
    }
	else if(nilai>=75)
    {
        indeks=3.3;
    }
	else if(nilai>=70)
    {
        indeks=3;
    }
	else if(nilai>=65)
    {
        indeks=2.7;
    }
	else if(nilai>=60)
    {
        indeks=2.3;
    }
	else if(nilai>=55)
    {
        indeks=2;
    }
	else if(nilai>=40)
    {
        indeks=1;
    }
	else indeks=0;
}

IP()
{
  printf("masukkan nilai matakuliah: ");
  scanf("%f",&nilai);
  printf("\nmasukkan jumlah sks: ");
  scanf("%d",&sks);
  nhuruf = nilaiHuruf(nilai);
  angka = nilaiAngka(nilai,indeks);
  return 0;
}
