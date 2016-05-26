#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int input_IP(int totalSKS,float ip); //deklarasi fungsi input_IP untuk memasukkan ip terakhir
int list_matkul(int skstake); //deklarasi fungsi list_matkul untuk melist daftar mata kuliah
void help(); //deklarasi fungsi help
int start_program(int totalSKS, int skstake);//deklarasi fungsi start_program untuk memulai program
int cariLinear(const int m[], int count); //deklarasi fungsi cariLinear untuk fungsi searching
void tampilkan_Matkul();

//struct untuk list mata kuliah
struct List_MK{
	char kode[36];
	char nama[50];
	int sks;
};

void header(){
	
	system("cls");
	printf("\n"); //menampilkan header
	printf("\t\t\t====================================\n");
    printf("\t\t\t=====      Selamat Datang      =====\n");
    printf("\t\t\t=====            di            =====\n");
    printf("\t\t\t=====   Program Pengisian IRS  =====\n");
    printf("\t\t\t====================================\n");
    
}

int main(int totalSKS, int skstake){
//put your main code here
    char choose;
	char back;
	
	header();          
    printf("\n\n\t\t\tSilakan pilih diantara menu berikut:\n");      
	printf("\n\t\t\t1.Masuk Program");
	printf("\n\t\t\t2.List Matkul");
	printf("\n\t\t\t3.Help");
	printf("\n\t\t\t4.Keluar\n");
    printf("\n\t\t\tMasukkan pilihan anda: ");			//Pemilihan menu untuk mwnjalankan program
    fflush(stdin);
	scanf("%c",&choose);
    if(choose=='1')
    {
		system("cls");
        start_program(totalSKS,skstake); //memanggil fungsi start_program
    }
    else if(choose=='2')
    {
    int back=1;
    	
    while(back!=0){
		system("cls");
		tampilkan_Matkul();	
       	fflush(stdin);
    	printf("\n\tTekan nol (0) lalu Enter untuk kembali ");
    	fflush(stdin);
		scanf("%c", &back); //memasukkan karakter untuk kembali ke menu utama
    	if(back=='0'){
        	system("cls");
        	main(totalSKS, skstake); // kembali ke fungsi utama
    	}
    	else{
    		printf("\tKarakter yang Anda tekan salah!\n");
    		printf("\tTekan Enter untuk kembali memasukkan karakter ");
			getch();
		}
    }
	}	
	else if(choose=='3')
    {
        system("cls");
        help(); //memanggil fungsi help
    }
    else if(choose=='4')
    {
        exit(0); //keluar dari program
    }
    else {
		printf("\t\t\tKarakter yang Anda tekan salah!\n");
		printf("\t\t\tTekan Enter untuk kembali memasukkan pilihan ");
		getch();
    	system("cls");
		main(totalSKS, skstake); //kembbali ke fungsi utama apabila input yang dimasukkan salah
	}
}

//Fungsi untuk memulai pengisian IRS
//list_matkul(int skstake);
int start_program(int totalSKS, int skstake){
    int i=0;
    float ip;
    char nama[50];
	char npm[10];
	int total, sksambil;
	printf("Program Untuk Mendata Mahasiswa\n");


		printf("Masukkan Info Mahasiswa: \n\n"); //user memasukkan data berupa nama dan npm
		printf("Nama: ");
		fflush(stdin);
		scanf("%[^\n]", nama);
		printf("NPM: ");
		fflush(stdin);
		scanf("%[^\n]", npm);

	//input_IP(totalSKS, ip);
    //list_matkul(skstake);
    //Parameter yang dipakai di program yang telah diproses pada fungsi modular
    total=input_IP(totalSKS, ip); //memanggil fungsi input_IP dan memasukkan passingan ip ke variabel total
    sksambil=list_matkul(skstake); //memanggil fungsi list_matkul dan memasukkan passingan jumlah sks yang diambil ke variabel sksambil

	fflush(stdin);
	printf("\n\nNama: %s", nama); //menampilkan nama
	printf("\nNPM : %s", npm); //menampilkan npm
	printf("\nTotal SKS yang bisa anda ambil: %d",total); //menampilkan sks maksimal yang dapat diambil
    printf("\nSKS yang anda ambil: %d",sksambil); //menampilkan jumlah sks yang diambil
    
    //Pengecekan SKS yang diambil, melebihi atau tidak dari SKS total yang bisa diambil
    if (sksambil>total){
    	printf("\nIRS Bermasalah, Anda kelebihan mengambil SKS!\n"); //jika sks yang diambil melibihi batas maksimal sks yang dapat diambil
    }
    else{
    	printf("\nIRS Tidak Bermasalah\n");
	}
	getch();
	main(totalSKS, skstake); //kembali ke fungsi utama
}

//Fungsi untuk memasukkan IP terakhir sebagai acuan SKS maksimum
int input_IP(int totalSKS, float ip){
	//float ip;
	//int totalSKS;
	int skstake;
		
	ip=5;
	
while (ip>4 || ip<0){	
	printf("IP terakhir: "); 
	fflush(stdin);
	scanf("%f", &ip); //memasukkan ip terakhir yang didapat

	if(ip>4 || ip<0){
		printf("Anda salah memasukkan nilai IP. Tekan Enter untuk mengulangi\n"); //pesan error jika masukkan ip diluar range ip 0-4
		getch();
	}
	else if(ip >= 3.5)
	{
		totalSKS = 24;
		//return totalSKS;
	}
	else if(ip>=3.0)
	{
		totalSKS = 21;
		//return totalSKS;
	}
	else if(ip>=2.5)
	{
		totalSKS = 18;
		//return totalSKS;
	}
	else if(ip>=2.0)
	{
		totalSKS = 15;
		//return totalSKS;
	}
	else if(ip<2.0)
	{
	totalSKS = 12;
	//return totalSKS;
	}
}
	printf("total sks anda: %d\n",totalSKS); //menampilkan jumlah sks maksimal yang dapat diambil
	system("PAUSE"); //layar di pause
	printf("\n\n");
	return (totalSKS); //passing variabel totalSKS
}

//Fungsi yang berisi seluruh mata kuliah yang bisa diambil, beserta pengisian IRS
int list_matkul(int skstake){
	int i,x,m[20],sksnow, take=0, a=0, c=0;
	int n,sum,searching,sksawal,count=1,keep;
	struct List_MK Matkul[36];
	
	system("cls");
	//List seluruh matkul yang dapat diambil
	printf("\t\t\t----------------------------------\n");
	printf("\t\t\tDAFTAR MATA KULIAH SEMESTER GANJIL\n");
	printf("\t\t\t----------------------------------\n\n");
	printf("\t No  Kode MK		Nama Mata Kuliah	 	Kredit\n");
	printf("\t_______________________________________________________________\n");
	
	/*for(i=0;i<=35;i++)
    {
		printf("%2d %s %-45s %d\n", i+1, kode[i], matkul[i], sks[i]);
	}*/
	
	//memasukkan data ke dalam struct
	strcpy(Matkul[0].kode,"ENEE600104");
    strcpy(Matkul[0].nama,"Antenna & Propagasi");
    Matkul[0].sks = 3;

    strcpy(Matkul[1].kode,"ENEE600008");
    strcpy(Matkul[1].nama,"Dasar Komputer");
    Matkul[1].sks = 3;

    strcpy(Matkul[2].kode,"ENEE600305");
    strcpy(Matkul[2].nama,"Dasar Nanoelektronika");
    Matkul[2].sks = 3;

    strcpy(Matkul[3].kode,"ENEE600007");
    strcpy(Matkul[3].nama,"Divais Elektronika");
    Matkul[3].sks = 2;

    strcpy(Matkul[4].kode,"ENEE600303");
    strcpy(Matkul[4].nama,"Divais Fotonik & Prak. Pilihan");
    Matkul[4].sks = 3;

    strcpy(Matkul[5].kode,"ENGE600004");
    strcpy(Matkul[5].nama,"Fisika Dasar 2");
    Matkul[5].sks = 4;

    strcpy(Matkul[6].kode,"ENEE600023");
    strcpy(Matkul[6].nama,"Kerja Praktek");
    Matkul[6].sks = 2;

	strcpy(Matkul[7].kode,"ENGE600008");
    strcpy(Matkul[7].nama,"Kesehatan,Keselamatan,Kerja&Lindung Ling");
    Matkul[7].sks = 2;

    strcpy(Matkul[8].kode,"ENEE600031");
    strcpy(Matkul[8].nama,"Komputasi Numerik");
    Matkul[8].sks = 2;

    strcpy(Matkul[9].kode,"ENEE600105");
    strcpy(Matkul[9].nama,"Komunikasi Optik");
    Matkul[9].sks = 3;

    strcpy(Matkul[10].kode,"ENEE600204");
    strcpy(Matkul[10].nama,"Konversi Tenaga Listrik");
    Matkul[10].sks = 3;

    strcpy(Matkul[11].kode,"ENEE601208");
    strcpy(Matkul[11].nama,"Kualitas Daya Sistem Tenaga Listrik");
    Matkul[11].sks = 3;

    strcpy(Matkul[12].kode,"ENEE600006");
    strcpy(Matkul[12].nama,"Matematika Teknik 1");
    Matkul[12].sks = 3;

    strcpy(Matkul[13].kode,"ENEE600021");
    strcpy(Matkul[13].nama,"Mikroprosesor & Mikrokontroler");
    Matkul[13].sks = 4;

    strcpy(Matkul[14].kode,"ENEE600405");
    strcpy(Matkul[14].nama,"Permodelan & Identifikasi Sistem");
    Matkul[14].sks = 3;

    strcpy(Matkul[15].kode,"ENEE600001");
    strcpy(Matkul[15].nama,"Pengantar Sistem Dijital");
    Matkul[15].sks = 2;

    strcpy(Matkul[16].kode,"ENEE600022");
    strcpy(Matkul[16].nama,"Prak. Mikrokontroler & Mikroprosesor");
    Matkul[16].sks = 1;

    strcpy(Matkul[17].kode,"ENEE600005");
    strcpy(Matkul[17].nama,"Prak. Rangkaian Listrik");
    Matkul[17].sks = 1;

    strcpy(Matkul[18].kode,"ENEE600020");
    strcpy(Matkul[18].nama,"Prak. Sistem Kendali");
    Matkul[18].sks = 1;

    strcpy(Matkul[19].kode,"ENEE600018");
    strcpy(Matkul[19].nama,"Prak. Teknik Tenaga Listrik");
    Matkul[19].sks = 1;

    strcpy(Matkul[20].kode,"ENEE600002");
    strcpy(Matkul[20].nama,"Praktikum Pengantar Sistem Dijital");
    Matkul[20].sks = 1;

    strcpy(Matkul[21].kode,"ENEE600004");
    strcpy(Matkul[21].nama,"Rangkaian Listrik");
    Matkul[21].sks = 3;

    strcpy(Matkul[22].kode,"ENCE601023");
    strcpy(Matkul[22].nama,"Rekayasa & Kewirausahaan");
    Matkul[22].sks = 2;

    strcpy(Matkul[23].kode,"ENEE601308");
    strcpy(Matkul[23].nama,"Rekayasa Optik & Prak");
    Matkul[23].sks = 3;

    strcpy(Matkul[24].kode,"ENEE600403");
    strcpy(Matkul[24].nama,"Robotika");
    Matkul[24].sks = 3;

    strcpy(Matkul[25].kode,"ENEE600029");
    strcpy(Matkul[25].nama,"Seminar");
    Matkul[25].sks = 2;

    strcpy(Matkul[26].kode,"ENEE600019");
    strcpy(Matkul[26].nama,"Sistem Kendali");
    Matkul[26].sks = 3;

    strcpy(Matkul[27].kode,"ENEE600404");
    strcpy(Matkul[27].nama,"Sistem Kendali Penggerak Elektrik");
    Matkul[27].sks = 3;

    strcpy(Matkul[28].kode,"ENEE601408");
    strcpy(Matkul[28].nama,"Sistem Kendali Prediktif & Adaptif");
    Matkul[28].sks = 3;

    strcpy(Matkul[29].kode,"ENEE600203");
    strcpy(Matkul[29].nama,"Sistem Tenaga Listik & Prak");
    Matkul[29].sks = 3;

    strcpy(Matkul[30].kode,"ENEE600030");
    strcpy(Matkul[30].nama,"Skripsi");
    Matkul[30].sks = 4;

    strcpy(Matkul[31].kode,"ENEE600205");
    strcpy(Matkul[31].nama,"Teknik Tegangan & Arus Tinggi & Prak ");
    Matkul[31].sks = 3;

    strcpy(Matkul[32].kode,"ENEE600017");
    strcpy(Matkul[32].nama,"Teknik Tenaga Listrik");
    Matkul[32].sks = 3;

    strcpy(Matkul[33].kode,"ENEE600103");
    strcpy(Matkul[33].nama,"Teori Coding & Aplikasi");
    Matkul[33].sks = 3;

    strcpy(Matkul[34].kode,"ENEE601108");
    strcpy(Matkul[34].nama,"Topik Khusus (Telekomunikasi 1)");
    Matkul[34].sks = 3;

    strcpy(Matkul[35].kode,"ENEE600304");
    strcpy(Matkul[35].nama,"VLSI");
    Matkul[35].sks = 3;

    //int i;
    //Memunculkan seluruh matkul yang bisa diambil pada program
	for(i=0;i<36;i++){
			printf("\t %-2d %s %-42s  %d\n", i+1, Matkul[i].kode, Matkul[i].nama, Matkul[i].sks);
	}
    
    //fungsi untuk memilih mata kuliah
    printf("\nTekan -1 untuk selesai memilih mata kuliah\n"); //petunjuk untuk mengakhiri pengambilan mata kuliah

	skstake=0; //inisialisasi skstake sama dengan 0
    //b[a]=0;
	while (m[count] != -1)
    {
        printf("\nnomor matkul: "); 
        scanf("%d",&m[count]); //memasukkan nomor mata kuliah yang akan diambil

	if(m[count]<=36 && m[count]>=1){
			searching=cariLinear(m, count); //memanggil fungsi searching
		if(searching==0){
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
                printf("%2d %s %-45s %d\n", m[count], Matkul[m[count]-1].kode, Matkul[m[count]-1].nama, Matkul[m[count]-1].sks);
                count++;
        	}
    	}
   		else{
    		printf("Anda sudah memilih mata kuliah ini\n"); //pesan kesalahan jika memasukkan nomor mata kuliah yang sebelumnya telah dimasukkan
    		printf("Silakan ulangi memasukkan nomor mata kuliah\n");
		}    
	}
	else{
		printf("Tidak ada mata kuliah dengan nomor ini\n"); //pesan kesalahan jika memasukkan nomor mata kuliah selain dari yang ada di daftar mata kuliah
		printf("Silakan masukan ulang pilihan Anda\n");
	}
	}
	
	//Fungsi sorting untuk mengurutkan mata kuliah yang diambil oleh user
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
	system("cls"); //mengosongkan layar
	
	//Memunculkan mata kuliah yang telah diurutkan
	printf("\n\t\t\tDaftar Matkul Yang Anda Ambil\n\n");
	printf("Mata kuliah diambil: %d mata kuliah\n",count-1);
	printf("No  Kode MK		Nama Mata Kuliah	 	Kredit\n");
	for(i=0;i<count-1;i++)
    {
		printf("%-2d %-8s %-45s %d\n", m[i], Matkul[m[i]-1].kode, Matkul[m[i]-1].nama, Matkul[m[i]-1].sks);
		//printf("%2d\n", m[i]);
    }
    printf("%61d", skstake);
    return skstake; //passing skstake 
    }

//Help saat user butuh bantuan dari pembuat program
void help(){
    char back; 
	int totalSKS, skstake;
    
	printf("\t\t\t\t======================\n");
    printf("\t\t\t\t         HELP         \n");
    printf("\t\t\t\t======================\n\n");
    printf("\t1.Program ini adalah sebuah prototipe pengisian IRS Mahasiswa.\n");
    printf("\t2.Pilihan mata kuliah dan sks yang tersedia hanya mata kuliah yang dapat diambil pada semester ganjil.\n");
    printf("\t3.Perlu diingat! Input saat mengisi mata kuliah adalah nomor urut paling kiri, mohon diperhatikan baik-baik.\n");
    printf("\n Jika ada pertanyaan seputar program, dapat menghubungi:\nFadilla Hardi Y\nDyah Sekar Asih\n\n");
    printf("\n\tSekian dan Terima Kasih\n\n");
    printf("\tTekan nol (0) lalu Enter untuk kembali ");
    fflush(stdin);
	scanf("%c", &back); //memasukkan karakter untuk kembali ke menu utama
    if(back=='0'){
        system("cls");
        main(totalSKS, skstake); // kembali ke fungsi utama
    }
    else {
		 //kembali memasukkan angka jika masukkan bukan 0
   		printf("\tKarakter yang Anda tekan salah!\n");
   		printf("\tTekan Enter untuk kembali memasukkan karakter ");
		getch();
		system("cls");
		help();
	}
}

//Fungs searching untuk mengecek saat pengisian matkul
int cariLinear(const int m[], int count){
	int a=0, i, search;
	
	search=m[count]; //memasukkan data m[count] ke dalam variabel search
	for(i=0;i<count;++i){
		if(m[i]==search){
		a++;
		}
	}
	return (a); //passing a
}

void tampilkan_Matkul(){
	
	struct List_MK Matkul[36];
	int i;
	int totalSKS, skstake;
	
	system("cls");

	strcpy(Matkul[0].kode,"ENEE600104");
    strcpy(Matkul[0].nama,"Antenna & Propagasi");
    Matkul[0].sks = 3;

    strcpy(Matkul[1].kode,"ENEE600008");
    strcpy(Matkul[1].nama,"Dasar Komputer");
    Matkul[1].sks = 3;

    strcpy(Matkul[2].kode,"ENEE600305");
    strcpy(Matkul[2].nama,"Dasar Nanoelektronika");
    Matkul[2].sks = 3;

    strcpy(Matkul[3].kode,"ENEE600007");
    strcpy(Matkul[3].nama,"Divais Elektronika");
    Matkul[3].sks = 2;

    strcpy(Matkul[4].kode,"ENEE600303");
    strcpy(Matkul[4].nama,"Divais Fotonik & Prak. Pilihan");
    Matkul[4].sks = 3;

    strcpy(Matkul[5].kode,"ENGE600004");
    strcpy(Matkul[5].nama,"Fisika Dasar 2");
    Matkul[5].sks = 4;

    strcpy(Matkul[6].kode,"ENEE600023");
    strcpy(Matkul[6].nama,"Kerja Praktek");
    Matkul[6].sks = 2;

	strcpy(Matkul[7].kode,"ENGE600008");
    strcpy(Matkul[7].nama,"Kesehatan,Keselamatan,Kerja&Lindung Ling");
    Matkul[7].sks = 2;

    strcpy(Matkul[8].kode,"ENEE600031");
    strcpy(Matkul[8].nama,"Komputasi Numerik");
    Matkul[8].sks = 2;

    strcpy(Matkul[9].kode,"ENEE600105");
    strcpy(Matkul[9].nama,"Komunikasi Optik");
    Matkul[9].sks = 3;

    strcpy(Matkul[10].kode,"ENEE600204");
    strcpy(Matkul[10].nama,"Konversi Tenaga Listrik");
    Matkul[10].sks = 3;

    strcpy(Matkul[11].kode,"ENEE601208");
    strcpy(Matkul[11].nama,"Kualitas Daya Sistem Tenaga Listrik");
    Matkul[11].sks = 3;

    strcpy(Matkul[12].kode,"ENEE600006");
    strcpy(Matkul[12].nama,"Matematika Teknik 1");
    Matkul[12].sks = 3;

    strcpy(Matkul[13].kode,"ENEE600021");
    strcpy(Matkul[13].nama,"Mikroprosesor & Mikrokontroler");
    Matkul[13].sks = 4;

    strcpy(Matkul[14].kode,"ENEE600405");
    strcpy(Matkul[14].nama,"Permodelan & Identifikasi Sistem");
    Matkul[14].sks = 3;

    strcpy(Matkul[15].kode,"ENEE600001");
    strcpy(Matkul[15].nama,"Pengantar Sistem Dijital");
    Matkul[15].sks = 2;

    strcpy(Matkul[16].kode,"ENEE600022");
    strcpy(Matkul[16].nama,"Prak. Mikrokontroler & Mikroprosesor");
    Matkul[16].sks = 1;

    strcpy(Matkul[17].kode,"ENEE600005");
    strcpy(Matkul[17].nama,"Prak. Rangkaian Listrik");
    Matkul[17].sks = 1;

    strcpy(Matkul[18].kode,"ENEE600020");
    strcpy(Matkul[18].nama,"Prak. Sistem Kendali");
    Matkul[18].sks = 1;

    strcpy(Matkul[19].kode,"ENEE600018");
    strcpy(Matkul[19].nama,"Prak. Teknik Tenaga Listrik");
    Matkul[19].sks = 1;

    strcpy(Matkul[20].kode,"ENEE600002");
    strcpy(Matkul[20].nama,"Praktikum Pengantar Sistem Dijital");
    Matkul[20].sks = 1;

    strcpy(Matkul[21].kode,"ENEE600004");
    strcpy(Matkul[21].nama,"Rangkaian Listrik");
    Matkul[21].sks = 3;

    strcpy(Matkul[22].kode,"ENCE601023");
    strcpy(Matkul[22].nama,"Rekayasa & Kewirausahaan");
    Matkul[22].sks = 2;

    strcpy(Matkul[23].kode,"ENEE601308");
    strcpy(Matkul[23].nama,"Rekayasa Optik & Prak");
    Matkul[23].sks = 3;

    strcpy(Matkul[24].kode,"ENEE600403");
    strcpy(Matkul[24].nama,"Robotika");
    Matkul[24].sks = 3;

    strcpy(Matkul[25].kode,"ENEE600029");
    strcpy(Matkul[25].nama,"Seminar");
    Matkul[25].sks = 2;

    strcpy(Matkul[26].kode,"ENEE600019");
    strcpy(Matkul[26].nama,"Sistem Kendali");
    Matkul[26].sks = 3;

    strcpy(Matkul[27].kode,"ENEE600404");
    strcpy(Matkul[27].nama,"Sistem Kendali Penggerak Elektrik");
    Matkul[27].sks = 3;

    strcpy(Matkul[28].kode,"ENEE601408");
    strcpy(Matkul[28].nama,"Sistem Kendali Prediktif & Adaptif");
    Matkul[28].sks = 3;

    strcpy(Matkul[29].kode,"ENEE600203");
    strcpy(Matkul[29].nama,"Sistem Tenaga Listik & Prak");
    Matkul[29].sks = 3;

    strcpy(Matkul[30].kode,"ENEE600030");
    strcpy(Matkul[30].nama,"Skripsi");
    Matkul[30].sks = 4;

    strcpy(Matkul[31].kode,"ENEE600205");
    strcpy(Matkul[31].nama,"Teknik Tegangan & Arus Tinggi & Prak ");
    Matkul[31].sks = 3;

    strcpy(Matkul[32].kode,"ENEE600017");
    strcpy(Matkul[32].nama,"Teknik Tenaga Listrik");
    Matkul[32].sks = 3;

    strcpy(Matkul[33].kode,"ENEE600103");
    strcpy(Matkul[33].nama,"Teori Coding & Aplikasi");
    Matkul[33].sks = 3;

    strcpy(Matkul[34].kode,"ENEE601108");
    strcpy(Matkul[34].nama,"Topik Khusus (Telekomunikasi 1)");
    Matkul[34].sks = 3;

    strcpy(Matkul[35].kode,"ENEE600304");
    strcpy(Matkul[35].nama,"VLSI");
    Matkul[35].sks = 3;

	printf("\t\t\t----------------------------------\n");
	printf("\t\t\tDAFTAR MATA KULIAH SEMESTER GANJIL\n");
	printf("\t\t\t----------------------------------\n\n");
	printf("\t No  Kode MK		Nama Mata Kuliah	 	Kredit\n");
	printf("\t_______________________________________________________________\n");
	
	for(i=0;i<36;i++){
			printf("\t %-2d %s %-42s  %d\n", i+1, Matkul[i].kode, Matkul[i].nama, Matkul[i].sks);
	}
}
