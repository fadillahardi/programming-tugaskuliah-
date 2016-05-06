#include<stdio.h>
#include<stdlib.h>


int sks,i=1;
float nilai, indeks, angka;
int nhuruf;

nilaiHuruf(float nilai)
{
    if(nilai>=85)
    {
        printf("Nilai huruf: A");
    }
	else if(nilai>=80)
    {
        printf("Nilai huruf: A-");
	}
	else if(nilai>=75)
	{
        printf("Nilai huruf: B+");
	}
	else if(nilai>=70)
    {
        printf("Nilai huruf: B");
    }
	else if(nilai>=65)
    {
        printf("Nilai huruf: B-");
    }
	else if(nilai>=60)
    {
        printf("Nilai huruf: C+");
    }
	else if(nilai>=55)
    {
        printf("Nilai huruf: C");
    }
	else if(nilai>=40)
	{
        printf("Nilai huruf: D");
	}
	else printf("Nilai huruf: E");
}

float nilaiAngka(float nilai, float indeks)
{
    if(nilai>=85)
    {
        indeks=4;
        return indeks;
    }
	else if(nilai>=80)
    {
        indeks=3.7;
        return indeks;
    }
	else if(nilai>=75)
    {
        indeks=3.3;
        return indeks;
    }
	else if(nilai>=70)
    {
        indeks=3;
        return indeks;
    }
	else if(nilai>=65)
    {
        indeks=2.7;
        return indeks;
    }
	else if(nilai>=60)
    {
        indeks=2.3;
        return indeks;
    }
	else if(nilai>=55)
    {
        indeks=2;
        return indeks;
    }
	else if(nilai>=40)
    {
        indeks=1;
        return indeks;
    }
	else
	{
            indeks==0;
    return indeks;
    }
}

hitung()
{
  system("cls");
  int matkul, totalsks = 0;
  float jumlah, banyak,ip;
  printf("Masukkan jumlah mata kuliah: ");
  scanf("%d",&matkul);
  system("cls");
  while(i<=matkul)
  {
    printf("%d. Mata Kuliah ",i);
    printf("\nnilai: ");
    scanf("%f",&nilai);
    printf("sks: ");
    scanf("%d",&sks);
    nhuruf = nilaiHuruf(nilai);
    angka = nilaiAngka(nilai,indeks);
    printf("\nNilai angka: %.2f",angka);
    totalsks = totalsks+sks;
    printf("\n\n");
    jumlah = sks*angka;
    banyak = banyak + jumlah;
    ip = banyak/totalsks;
    i++;
  }
  system("cls");
  printf ("Total SKS: %d | Bobot: %.2f | IP diperoleh: %.2f",totalsks,banyak,ip);
  return 0;
}

help()
{
    system("cls");
    int a;
    printf("Ini adalah program untuk menghitung IP.\nIngat! input harus berupa nilai angka");
    printf("\ntekan 0 lalu enter untuk kembali");
    scanf("%d",&a);
    if(a==0)

    {
        return main();
    }
    else return 0;
}

main()
{
    system("cls");
    int n;
    printf("Selamat datang di program menghitung IP");
    printf("\nSilakan pilih menu berikut:");
    printf("\n1.Main Program\n2.Bantuan\n3.Keluar");
    printf("\nPilihan menu: ");
    scanf("%d",&n);
    if(n==1)
    {
        hitung();
        return 0;
    }
    else if(n==2)
    {
        help();
        return 0;
    }
    else if(n==3)
    {
        return 0;
    }
    else return main();
}
