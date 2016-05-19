#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//list_matkul(int skstake);

struct DataMhs
{
	char nama[5][50];
	char npm[5];
};

input_IP(int totalSKS,float ip)
{
	//float ip;
	//int totalSKS;
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
	printf("total sks anda: %d\n\n",totalSKS);
	return (totalSKS);
}
list_matkul(int skstake)
{
	int i,x,m,sksnow, take=0, a=0, b[20],c=0;
	int n,sum,sksawal,count=1;
	char kode [36][11]={"ENEE600104", "ENEE600008", "ENEE600305", "ENEE600007", "ENEE600303", "ENGE600004", "ENEE600023", "ENGE600008", "ENEE600031", "ENEE600105", "ENEE600204", "ENEE601208",
	"ENEE600006", "ENEE600021", "ENEE600405", "ENEE600001", "ENEE600022", "ENEE600005", "ENEE600020", "ENEE600018", "ENEE600002", "ENEE600004", "ENCE601023", "ENEE601308", "ENEE600403", "ENEE600029",
	"ENEE600019", "ENEE600404", "ENEE601408", "ENEE600203", "ENEE600030", "ENEE600205", "ENEE600017", "ENEE600103", "ENEE601108", "ENEE600304"};
	char matkul [36][50]={"Antena & Propagasi", "Dasar Komputer", "Dasar Nanoelektronika", "Divais Elektronika", "Divais Fotonik & Prak. Pilihan", "Fisika Dasar 2", "Kerja Praktek", "Kesehatan,Keselamatan,Kerja&Lindung Ling.","Komputasi Numerik",
	"Komunikasi Optik", "Konversi Tenaga Listrik", "Kualitas Daya Sistem Tenaga Listrik", "Matematika Teknik 1", "Mikroprosesor & Mikrokontroler", "Pemodelan & Identifikasi Sistem", "Pengantar Sistem Dijital",
	"Prak. Mikroprosesor & Mikrokontroler", "Prak. Rangkaian Listrik", "Prak. Sistem Kendali", "Prak. Teknik Tenaga Listrik", "Praktikum Pengantar Sistem Dijital", "Rangkaian Listrik", "Rekayasa & Kewirausahaan",
	"Rekayasa Optik & Prak.", "Robotika", "Seminar", "Sistem Kendali", "Sistem Kendali Penggerak Elektrik", "Sistem Kendali Prediktif & Adaptif", "Sistem Tenaga Listrik & Prak.", "Skripsi", "Teknik Tegangan & Arus Tinggi & Prak",
	"Teknik Tenaga Listrik", "Teori Coding & Aplikasi", "Topik Khusus (Telekomunikasi 1)", "VLSI"};
    int sks [36]={3,3,3,2,3,4,2,2,2,3,3,3,3,4,3,2,1,1,1,1,1,3,2,3,3,2,3,3,3,3,4,3,3,3,3,3};

	printf("No  Kode MK		Nama Mata Kuliah	 	Kredit\n");
	for(i=0;i<=35;i++)
    {
		printf("%2d %s %-45s %d\n", i+1, kode[i], matkul[i], sks[i]);
	}
	skstake=0;
    //b[a]=0;
	while (m != -1)
    {
        printf("\n\nnomor matkul: ");
        scanf("%d",&m);
        //b[a]=NULL;
        b[a]=m;

        if(m == -1)
        {
            system("cls");
            printf("\nlol");
            printf("\njumlah sks diambil: %d\n\n",skstake);
            //return skstake;


        }
        else
        {
                sksnow = sks[m-1];
                skstake = skstake+sksnow;
                printf("\nsksnow: %d",sksnow);
                printf("\nsksambil: %d",skstake);
                printf("\npilihan: [%d ]",m);
                printf("\nhitungan: %d",count);
                printf("\n%2d %s %-45s %d\n", m, kode[m-1], matkul[m-1], sks[m-1]);
                count++;
        }
         printf("\n%2d %s %-45s %d\n", m, kode[m-1], matkul[m-1], sks[m-1]);
        }
        return skstake;
    }

main(totalSKS,skstake)
{
//put your main code here
    int i;
    float ip;
    char nama[50];
	char npm[10];
	struct DataMhs Mhs;
	printf("Program untuk mendata mahasiswa\n");


		printf("masukkan info mahasiswa\n");
		printf("Nama: ");
		scanf("%s",&nama);
		printf("NPM: ");
		scanf("%s",&npm);

	input_IP(totalSKS, ip);
    //list_matkul(skstake);
    //system("cls");
    printf("\nTotal SKS yang bisa anda ambil: %d",totalSKS);
    printf("\nSKS yang anda ambil: %d",skstake);

}
