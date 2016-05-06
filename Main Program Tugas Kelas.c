//Main Program
#include <stdio.h>
#include <stdlib.h>

float rata2(float r,float j, int a)
{
	r = j/a;
	return r;
}

konversi()
{

        system("cls");
        int n,h,i,x;
        int A,B,C,D;
        printf("Selamat Datang di Program Pemetaan Nilai");
        printf("\nProgram ini akan menghitung nilai, dan memetakannya ke dalam range nilai");
        printf("\nRange nilai adalah sebagai berikut:");
        printf("\nA = 86-100 \nB = 71-85 \nC = 55-70 \nD = 0-55");
        printf("\nSilakan masukkan nilai-nilai yang diinginkan");
        printf("\nmasukkan jumlah data : ");
        scanf("%d",&n);
        i=1;
        A=0;
        B=0;
        C=0;
        D=0;
        if(i!=-1)
        {
            while(i<=n)
            {
                printf("\n\nmasukkan nilai: ");
                scanf("%d",&x);
                if(x<=100&&x>85)
                {
                    A=A+1;
                    printf("nilai anda: A");
                }
                else if(x<=85&&x>70)
                {
                    B=B+1;
                    printf("nilai anda: B");
                }
                else if(x<=70&&x>55)
                {
                    C=C+1;
                    printf("nilai anda: C");
                }
                else if(x<=55&&x>=0)
                {
                    D=D+1;
                    printf("nilai anda: D");
                }
                else if(x>100||x<0)
                {
                    printf("Nilai tidak valid!");
                    i=i-1;
                }
                i=i+1;
            }
            printf("\n\nnilai A: %d",A);
            printf("\nnilai B: %d",B);
            printf("\nnilai C: %d",C);
            printf("\nnilai D: %d",D);
            printf("\n\nProgram Selesai\nTekan 1 jika ingin kembali ");
            scanf("\n%d",&h);
            if(h==1)
            {
                return main();
            }
            else printf("\ninput salah. Program akan menutup");
            return 0;
    }
}

rataan()
{
	system("cls");
        printf("Selamat Datang di Program Untuk Menghitung Rataan");
        printf("\nProgram ini akan menghitung rataan, nilai minimum, dan nilai maksimum dari sejumlah data");
        int a,v,i,x;
        float r,j,z;
        int xmin=100;
        int xmax=0;
        printf("\nmasukkan jumlah data : ");
        scanf("%d",&a);
        i=1;
        j=0;
        while(i<=a)
        {
            printf("masukkan bilangan: ");
            scanf("%d",&x);
            if(xmax<=x)
            {
                xmax=x;
            }
            else if(xmin>=x)
            {
                xmin=x;
            }

            j=j+x;
            i=i+1;

        }
        printf("\njumlah nilai: %.0f",j);
        z = rata2(r,j,a);
        printf("\nrataan: %.2f",z);
        printf("\nnilai paling tinggi: %d",xmax);
        printf("\nnilai paling rendah: %d",xmin);
        printf("\n\nUntuk kembali tekan 1");
        printf("\napa pilihanmu?");
        scanf("%d",&v);
        if(v==1)
        {
            return main();
        }
        else return 0;
}

help()
{
	int q;
	system("cls");
    printf("HELP");
    printf("\nProgram ini dijalankan dengan memasukkan nilai-nilai yang ingin diolah");
    printf("\nINGAT! Nilai yang dimasukkan tidak boleh dalam bentuk desimal");
    printf("\nUntuk info lebih lanjut, silakan hubungi:\nFadilla Hardi Yuwono\n08118888969");
    printf("\n\ntekan 0 lalu 'Enter' untuk kembali");
    scanf("%d",&q);
    while(q!=0)
    {
        system("cls");
		printf("\ninput salah");
        printf("\ntekan 0 lalu 'Enter' untuk kembali");
        scanf("%d",&q);
    }
    return main();
}


main()
{
	int p;
	system ("cls");
	printf("Program ini digunakan untuk mencari nilai rata-rata, dan konversi nilai");
	printf("\nTekan 1 untuk konversi\nTekan 2 untuk rataan\nTekan 3 untuk Help\nTekan 0 untuk keluar");
	printf("\n\nApa pilihanmu ? ");
	scanf("%d",&p);
	if(p==1)
	{
		konversi();
	}
	else if(p==2)
	{
		rataan();
	}
	else if(p==3)
	{
		help();
	}
	else if(p==0)
	{
		return 0;
	}
	else system("cls");
	return main();
}


