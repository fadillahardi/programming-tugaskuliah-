#include <stdio.h>
#include <math.h>
#include <string.h>

main()
{
	int i,x,m[20],sksnow, take=0, a=0, c=0;
	int n,sum,sksawal,count=1,keep;
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
	int skstake=0;
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
	for(i=0;i<count-1;i++)
    {
		printf("%2d %s %-45s %d\n", m[i], kode[m[i]-1], matkul[m[i]-1], sks[m[i]-1]);
		//printf("%2d\n", m[i]);

    }


    getch();
        return skstake;
    }
