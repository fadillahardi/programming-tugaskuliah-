#include <stdio.h>

int jumlahSKSMax(float IP,	int sksMax){

	if(IP>=3.5) sksMax=24;
	else if(IP>=3) sksMax=21;
	else if(IP>=2.5) sksMax=18;
	else if(IP>=2) sksMax=15;
	else sksMax=12;

	return(sksMax);
}

void listMatkul(){
	int i;

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
	for(i=0;i<=35;i++){
		printf("%2d %s %-45s %d\n", i+1, kode[i], matkul[i], sks[i]);
	}
}

void isiIRS(){

	int sksMax, i[10], count=1;
	float IP;

	printf("IP terakhir : ");
	scanf("%f", &IP);
	sksMax=jumlahSKSMax(IP, sksMax);
	printf("Jumlah SKS maksimal yang dapat Anda ambil adalah %d\n", sksMax);
	listMatkul();

	printf("Tekan -1 untuk berhenti memilih Mata Kuliah\n");
	while (i[count]!=-1){
		printf("Pilihan nomor mata kuliah ke %d : ", count);
		scanf("%d", &i[count]);

		if(i[count]>=1){
			count++;
		}
		else break;
	}
}

void bantuan(){
}

void keluar(){
}

int main(){

	char menu;

	system ("cls");
	printf("\t\t\t\t    Menu:\n");
	printf("\t\t\t\t 1. Isi IRS\n");
	printf("\t\t\t\t 2. Help\n");
	printf("\t\t\t\t 3. Exit\n");
	printf("\t\t\t\t Pilihan Menu : ");
	scanf("%c", &menu);

	switch(menu){
		case '1': isiIRS();
		case '2': bantuan();
		case '3': keluar();
		default : main();
	}
}
