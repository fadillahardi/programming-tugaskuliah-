#include <stdio.h>
#include <math.h>
#include <string.h>

struct List_MK
{
	char kode[36];
	char nama[36];
	int sks;
};

main()
{
	int i,x,m[20],sksnow, take=0, a=0, c=0;
	int n,sum,sksawal,count=1,keep;
	struct List_MK Matkul[36];
	/*char kode [36][11]={"ENEE600104", "ENEE600008", "ENEE600305", "ENEE600007", "ENEE600303", "ENGE600004", "ENEE600023", "ENGE600008", "ENEE600031", "ENEE600105", "ENEE600204", "ENEE601208",
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
	}*/
	strcpy(Matkul[1].kode,"ENEE600104");
    strcpy(Matkul[1].nama,"Antenna & Propagasi");
    Matkul[1].sks = 3;

    strcpy(Matkul[2].kode,"ENEE600008");
    strcpy(Matkul[2].nama,"Dasar Komputer");
    Matkul[2].sks = 3;

    strcpy(Matkul[3].kode,"ENEE600305");
    strcpy(Matkul[3].nama,"Dasar Nanoelektronika");
    Matkul[3].sks = 3;

    strcpy(Matkul[4].kode,"ENEE600007");
    strcpy(Matkul[4].nama,"Divais Elektronika");
    Matkul[4].sks = 2;

    strcpy(Matkul[5].kode,"ENEE600303");
    strcpy(Matkul[5].nama,"Divais Fotonik & Prak. Pilihan");
    Matkul[5].sks = 3;

    strcpy(Matkul[6].kode,"ENGE600004");
    strcpy(Matkul[6].nama,"Fisika Dasar 2");
    Matkul[6].sks = 4;

    strcpy(Matkul[7].kode,"ENEE600023");
    strcpy(Matkul[7].nama,"Kerja Praktek");
    Matkul[7].sks = 2;

	strcpy(Matkul[8].kode,"ENGE600008");
    strcpy(Matkul[8].nama,"Kesehatan,Keselamatan,Kerja&Lindung Ling");
    Matkul[8].sks = 2;

    strcpy(Matkul[9].kode,"ENEE600031");
    strcpy(Matkul[9].nama,"Komputasi Numerik");
    Matkul[9].sks = 2;

    strcpy(Matkul[10].kode,"ENEE600105");
    strcpy(Matkul[10].nama,"Komunikasi Optik");
    Matkul[10].sks = 3;

    strcpy(Matkul[11].kode,"ENEE600204");
    strcpy(Matkul[11].nama,"Konversi Tenaga Listrik");
    Matkul[11].sks = 3;

    strcpy(Matkul[12].kode,"ENEE601208");
    strcpy(Matkul[12].nama,"Kualitas Daya Sistem Tenaga Listrik");
    Matkul[12].sks = 3;

    strcpy(Matkul[13].kode,"ENEE600006");
    strcpy(Matkul[13].nama,"Matematika Teknik 1");
    Matkul[13].sks = 3;

    strcpy(Matkul[14].kode,"ENEE600021");
    strcpy(Matkul[14].nama,"Mikroprosesor & Mikrokontroler");
    Matkul[14].sks = 4;

    strcpy(Matkul[15].kode,"ENEE600405");
    strcpy(Matkul[15].nama,"Permodelan & Identifikasi Sistem");
    Matkul[15].sks = 3;

    strcpy(Matkul[16].kode,"ENEE600001");
    strcpy(Matkul[16].nama,"Pengantar Sistem Dijital");
    Matkul[16].sks = 2;

    strcpy(Matkul[17].kode,"ENEE600022");
    strcpy(Matkul[17].nama,"Prak. Mikrokontroler & Mikroprosesor");
    Matkul[17].sks = 1;

    strcpy(Matkul[18].kode,"ENEE600005");
    strcpy(Matkul[18].nama,"Prak. Rangkaian Listrik");
    Matkul[18].sks = 1;

    strcpy(Matkul[19].kode,"ENEE600020");
    strcpy(Matkul[19].nama,"Prak. Sistem Kendali");
    Matkul[19].sks = 1;

    strcpy(Matkul[20].kode,"ENEE600018");
    strcpy(Matkul[20].nama,"Prak. Teknik Tenaga Listrik");
    Matkul[20].sks = 1;

    strcpy(Matkul[21].kode,"ENEE600002");
    strcpy(Matkul[21].nama,"Praktikum Pengantar Sistem Dijital");
    Matkul[21].sks = 1;

    strcpy(Matkul[22].kode,"ENEE600004");
    strcpy(Matkul[22].nama,"Rangkaian Listrik");
    Matkul[22].sks = 3;

    strcpy(Matkul[23].kode,"ENCE601023");
    strcpy(Matkul[23].nama,"Rekayasa & Kewirausahaan");
    Matkul[23].sks = 2;

    strcpy(Matkul[24].kode,"ENEE601308");
    strcpy(Matkul[24].nama,"Rekayasa Optik & Prak");
    Matkul[24].sks = 3;

    strcpy(Matkul[25].kode,"ENEE600403");
    strcpy(Matkul[25].nama,"Robotika");
    Matkul[25].sks = 3;

    strcpy(Matkul[26].kode,"ENEE600029");
    strcpy(Matkul[26].nama,"Seminar");
    Matkul[26].sks = 2;

    strcpy(Matkul[27].kode,"ENEE600019");
    strcpy(Matkul[27].nama,"Sistem Kendali");
    Matkul[27].sks = 3;

    strcpy(Matkul[28].kode,"ENEE600404");
    strcpy(Matkul[28].nama,"Sistem Kendali Penggerak Elektrik");
    Matkul[28].sks = 3;

    strcpy(Matkul[29].kode,"ENEE601408");
    strcpy(Matkul[29].nama,"Sistem Kendali Prediktif & Adaptif");
    Matkul[29].sks = 3;

    strcpy(Matkul[30].kode,"ENEE600203");
    strcpy(Matkul[30].nama,"Sistem Tenaga Listik & Prak");
    Matkul[30].sks = 3;

    strcpy(Matkul[31].kode,"ENEE600030");
    strcpy(Matkul[31].nama,"Skripsi");
    Matkul[31].sks = 4;

    strcpy(Matkul[32].kode,"ENEE600205");
    strcpy(Matkul[32].nama,"Teknik Tegangan & Arus Tinggi & Prak ");
    Matkul[32].sks = 3;

    strcpy(Matkul[33].kode,"ENEE600017");
    strcpy(Matkul[33].nama,"Teknik Tenaga Listrik");
    Matkul[33].sks = 3;

    strcpy(Matkul[34].kode,"ENEE600103");
    strcpy(Matkul[34].nama,"Teori Coding & Aplikasi");
    Matkul[34].sks = 3;

    strcpy(Matkul[35].kode,"ENEE601108");
    strcpy(Matkul[35].nama,"Topik Khusus (Telekomunikasi 1)");
    Matkul[35].sks = 3;

    strcpy(Matkul[36].kode,"ENEE600304");
    strcpy(Matkul[36].nama,"VLSI");
    Matkul[36].sks = 3;

    //int i;
    for(i=0;i<36;i++)
    {
    	printf("%s %-44s  %d\n", Matkul[i].kode, Matkul[i].nama, Matkul[i].sks);
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
                sksnow = Matkul[m[count]-1].sks;
                skstake = skstake+sksnow;
                printf("sksnow: %d",sksnow);
                printf("\nsksambil: %d\n",skstake);
                //printf("\npilihan: [%d]\n",m[count]);
                //printf("\nhitungan: %d",count);
                printf("No  Kode MK		Nama Mata Kuliah	 	Kredit\n");
                printf("\n%2d %s %-45s %d\n", m[count], Matkul[m[count]-1].kode, Matkul[m[count]-1].nama, Matkul[m[count]-1].sks);
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
		printf("%2d %s %-45s %d\n", m[i], Matkul[m[i]-1].kode, Matkul[m[i]-1].nama, Matkul[m[i]-1].sks);
		//printf("%2d\n", m[i]);
    }
    getch();
        return skstake;
    }
