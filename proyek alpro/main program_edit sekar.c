#include <stdio.h>
#include <stdlib.h>
#include <string.h>

input_IP(int totalSKS,float ip);
list_matkul(int skstake);
help();
start_program(totalSKS,skstake);

main(totalSKS,skstake)
{
//put your main code here
    int choose;
    printf("=====Selamat datang di program pengisian IRS=====");
    printf("\nSilakan pilih diantara menu berikut:");
    printf("\n1.masuk program\n2.Help\n3.Keluar\n");
    printf("\nMasukkan pilihan anda: ");
    scanf("%d",&choose);
    if(choose==1)
    {
        start_program(totalSKS,skstake);
    }
    else if(choose==2)
    {
        system("cls");
        help();
    }
    else if(choose==3)
    {
        system("cls");
        return 0;
    }
    else system("cls");
    return main();
}
//list_matkul(int skstake);
start_program(totalSKS,skstake)
{
    int i=0;
    float ip;
    char nama[50];
	char npm[10];
	int total, sksambil;
	printf("Program untuk mendata mahasiswa\n");


		printf("masukkan info mahasiswa\n");
		printf("Nama: ");
		fflush(stdin);
		scanf("%s",&nama);
		printf("NPM: ");
		fflush(stdin);
		scanf("%s",&npm);

	//input_IP(totalSKS, ip);
    //list_matkul(skstake);
    total=input_IP(totalSKS, ip);
    sksambil=list_matkul(skstake);

	system("cls");
    printf("\nTotal SKS yang bisa anda ambil: %d",total);
    printf("\nSKS yang anda ambil: %d",sksambil);
}

input_IP(int totalSKS,float ip)
{
	//float ip;
	//int totalSKS;
	printf("IP terakhir: ");
	fflush(stdin);
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
	int i,m[20],sksnow, c=0;
	int sksawal,count=1,keep;
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
	while (m[count] != -1)
    {
        printf("\nnomor matkul: ");
        scanf("%d",&m[count]);

        if(m[count] == -1)
        {
            system("cls");
            printf("\n");
            //printf("\njumlah sks diambil: %d\n\n",skstake);
        }
        else
        {
                sksnow = sks[m[count]-1];
                skstake = skstake+sksnow;
                printf("sksnow: %d",sksnow);
                printf("\nsksambil: %d\n",skstake);
                //printf("\npilihan: [%d]\n",m[count]);
                //printf("\nhitungan: %d",count);
                printf("No  Kode MK		Nama Mata Kuliah	 	Kredit\n");
                printf("\n%2d %s %-45s %d\n", m[count], kode[m[count]-1], matkul[m[count]-1], sks[m[count]-1]);
                count++;
        }
    }
//fungsi untuk melakukan sorting
    for(c=0;c<count;c++)
        {
            //printf("%d\n",m[c]);
            for(i=0;i<(count-1);i++)
            {
                if(m[i]>m[i+1])
                {
                    keep =m[i];
                    m[i]=m[i+1];
                    m[i+1]=keep;
                }
            }
        }
	printf("\n\n\t\t\tDaftar Matkul Yang Anda Ambil\n\n");
	printf("mata kuliah diambil: %d mata kuliah\n",count-1);
	printf("No  Kode MK		Nama Mata Kuliah	 	Kredit\n");
	for(i=1;i<count;i++)
    {
		printf("%2d %s %-45s %d\n", m[i], kode[m[i]-1], matkul[m[i]-1], sks[m[i]-1]);
		//printf("%2d\n", m[i]);

    }
    printf("\njumlah sks diambil: %d\n\n",skstake);
//end fungsi sorting dan menampilkan

    getch();
        return skstake;
    }

help()
{
    int back;
    printf("Program ini adalah sebuah prototipe pengisian IRS Mahasiswa\n");
    printf("Pilihan mata kuliah dan sks yang tersedia hanya mata kuliah yang dapat diambil pada semester ganjil\n");
    printf("Perlu diingat!! yang diinput saat mengisi mata kuliah adalah nomor urut paling kiri, mohon diperhatikan baik-baik\n");
    printf("Jika ada pertanyaan seputar program, dapat menghubungi:\nFadilla Hardi Y\nDyah Sekar Asih\n\n");
    printf("Sekian dan Terima Kasih\n\n");
    printf("tekan nol (0) lalu Enter untuk kembali");
    scanf("%d",&back);
    if(back==0)
    {
        system("cls");
        return main();
    }
    else system("cls");
    return help();

}
