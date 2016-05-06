#include <stdio.h>
#include <stdlib.h>

main()
{
    int c,h,q;
    system("cls");
    printf("Selamat Datang di Program Untuk Menghitung Rataan");
    printf("\nProgram ini akan menghitung rataan, nilai minimum, dan nilai maksimum dari sejumlah data");
    printf("\n\nTekan 1 untuk mulai\nTekan 2 untuk help\nTekan 0 untuk keluar");
    printf("\n\nApa pilihanmu ?");
    scanf("%d",&c);
    if(c==1)
    {
        system("cls");
        int a,i,x;
        float r,j;
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
        r = j/a;
        printf("\nrataan: %.2f",r);
        printf("\nnilai paling tinggi: %d",xmax);
        printf("\nnilai paling rendah: %d",xmin);
        printf("\n\nUntuk keluar tekan 0\nUntuk kembali tekan 1");
        printf("\napa pilihanmu?");
        scanf("%d",&h);
        if(h==1)
        {
            return main();
        }
        else if(h==0);
        {
            return 0;
        }
    }

    else if(c==0)
    {
        system("cls");
        return 0;
    }
    else if(c==2)
    {
        system("cls");
        printf("HELP");
        printf("\nProgram ini dijalankan dengan memasukkan nilai-nilai yang ingin diolah");
        printf("\nINGAT! Nilai yang dimasukkan tidak boleh dalam bentuk desimal");
        printf("\nUntuk info lebih lanjut, silakan hubungi:\nFadilla Hardi Yuwono\n08118888969");
        printf("\n\ntekan 0 untuk kembali");
        scanf("%d",&q);
        while(q!=0)
        {
            printf("\ninput salah");
            printf("\ntekan 0 untuk kembali");
            scanf("%d",&q);
        }
        return main();

    }
    else system("cls");
    return main();

    return 0;
}
