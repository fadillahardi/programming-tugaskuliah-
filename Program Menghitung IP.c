#include<stdio.h>

	int a, i=1, pilih, sks, totalsks=0;
	float banyak=0, indeksa,  ip, jumlah, nilai;
	char indeksn[2], kembali;

void header()
{
	printf("\t\t\t==========================\n");
	printf("\t\t\t==    Selamat Datang    ==\n");
	printf("\t\t\t==      di Program      ==\n");
	printf("\t\t\t==  Penghitung Nilai IP ==\n");
	printf("\t\t\t==========================\n");
}

char indeksnilai(float nilai)
{
	if(nilai>=85) return 'A';
	else if(nilai>=80) return 'A-';
	else if(nilai>=75) return 'B+';
	else if(nilai>=70) return 'B';
	else if(nilai>=65) return 'B-';
	else if(nilai>=60) return 'C+';
	else if(nilai>=55) return 'C';
	else if(nilai>=40) return 'D';
	else return 'E';
}

float indeksangka(float indeksa, float nilai)
{
	if(nilai>=85) indeksa=4;
	else if(nilai>=80) indeksa=3.7;
	else if(nilai>=75) indeksa=3.3;
	else if(nilai>=70) indeksa=3;
	else if(nilai>=65) indeksa=2.7;
	else if(nilai>=60) indeksa=2.3;
	else if(nilai>=55) indeksa=2;
	else if(nilai>=40) indeksa=1;
	else indeksa=0;

	return (indeksa);
}

float total(float jumlah, int sks, float indeksa)
{
	jumlah = sks*indeksa;
	return(jumlah);
}

void TentangProgram()
{
	system("cls");
	Keluar();
}

void HitungIP()
{
	int a, i=1, pilih, sks[100], totalsks=0;
	float banyak=0, indeksa, ip, jumlah, nilai[100];
	char indeksn[2];

	system("cls");
	while(nilai!=-1){
		printf("Masukkan Nilai Mata Kuliah ke %d dalam angka : ", i);
		scanf("%f", &nilai[i]);

		if(nilai[i]>=0 && nilai[i]<=100){
			printf("Masukkan banyak sks : ");
			scanf("%d", &sks[i]);
			indeksn[2]=indeksnilai(nilai);
			indeksa=indeksangka(indeksa, nilai);
			jumlah=total(jumlah, sks, indeksa);
			i++;
		}
		else if(nilai[i]==-1){
			break;
		}
		else{
			printf("Nilai yang anda masukkan salah, silakan masukkan nilai kembali!\n");
		}
		totalsks=totalsks+sks;
		banyak=banyak+jumlah;
		ip=banyak/totalsks;
	}


	printf("\nNo | Nilai Angka | Indeks Huruf | Indeks Angka | SKS | Total(SKSxIndeks Angka)\n");
	for(a=1;a<i;a++){
	printf("%2d | %11.2f | %12c | %12.1f | %3d | %20.2f\n", a, nilai[a], indeksn, indeksa, sks[a], jumlah);
	}
	printf("%52d | %20.2f\n\n", totalsks, banyak);
	printf("IP anda adalah %.2f ", ip);
	printf("\n\n");
	Keluar();

}

void Keluar()                //fungsi untuk keluar dari program
{
    printf("Apakah Anda ingin melakukan perhitungan lagi? (1 untuk Ya, 2 untuk Tidak): ");
    scanf(" %c", &kembali);
    if(kembali=='1')
        {
            main();
        }
    else if(kembali=='2'){
        printf("\n\nTERIMA KASIH :)\n\n");
        exit(0);
    }
    else{
        Keluar();
    }
}

void Tutup(){
	exit(0);
}
int main()
{
	system("cls");
	header ();
	printf("\n\n\t\t\t\tMenu Utama : \n\n");
	printf("\t\t\t1.Tentang Program\n");
	printf("\t\t\t2.Hitung IP\n");
	printf("\t\t\t3.Keluar\n");
	printf("\t\t\tMasukkan Pilihan Menu Anda : ");
	scanf("%d", &pilih);

	switch(pilih)
{
	case 1: TentangProgram();
	case 2: HitungIP();
	case 3: Tutup();
	default : main();
}

	return 0;
}
